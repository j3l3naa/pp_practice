%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int var_type;
  int ass_id;
  int fun_type;
  int ret_cnt = 0;
  int lvl = 0;
  int switch_type;
  int switch_lit[100];
  int array_len = 0;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token <i> _DIRECTION
%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _SEMICOLON
%token <i> _AROP
%token <i> _RELOP
%token <i> _LOGOP
%token _DO
%token _WHILE
%token _COMMA
%token _INC
%token _SWITCH _CASE _DEFAULT _BREAK
%token _COLON
%token _FOR _NEXT
%token _STEP

%type <i> num_exp exp literal function_call argument rel_exp log_exp assigns

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : function_list
      {
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
  ;

function_list
  : function
  | function_list function
  ;

function
  : _TYPE _ID
      {
        lvl = 0;
        fun_idx = lookup_symbol($2, FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR);
        else
          err("redefinition of function '%s'", $2);
      }
    _LPAREN parameter _RPAREN body
      {
        clear_symbols(fun_idx + 1);
        var_num = 0;
        if(get_type(fun_idx) != VOID && ret_cnt == 0)

            warn("no return statement in non-void function %s", get_name(fun_idx));
        ret_cnt = 0;
      }
  ;

parameter
  : /* empty */
      { set_atr1(fun_idx, 0); }

  | _TYPE _ID
      {
        insert_symbol($2, PAR, $1, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, $1);
      }
  ;

body
  : _LBRACKET variable_list statement_list _RBRACKET
  ;

variable_list
  : /* empty */
  | variable_list variable
  ;

variable
  : _TYPE
    { var_type = $1;
      if($1 == VOID)
        err("variable type void");
    } variables _SEMICOLON
  ;

variables
  : _ID
    {
      int idx = lookup_symbol($1, VAR|PAR);
      if(idx == NO_INDEX || get_atr2(idx) != lvl)
        insert_symbol($1, VAR, var_type, ++var_num, lvl);
      else
        err("redefinition of '%s'", $1);
    }
  | variables _COMMA _ID
    {
      int idx = lookup_symbol($3, VAR|PAR);
      if(idx == NO_INDEX || get_atr2(idx) != lvl)
        insert_symbol($3, VAR, var_type, ++var_num, lvl);
      else
        err("redefinition of '%s'", $3);
    }
  ;

statement_list
  : /* empty */
  | statement_list statement
  ;

statement
  : compound_statement
  | assignment_statement
  | if_statement
  | return_statement
  | do_while_statement
  | increment_statement
  | switch_statement
  | standard_for
  | basic_for
  | function_call _SEMICOLON
    {
      if(fun_type != VOID)
        err("non-void function must be assigned");
    }
  ;

compound_statement
  : _LBRACKET
    {
      lvl++;
      $<i>$ = get_last_element();
    }
  variable_list statement_list
    {
      lvl--;
      clear_symbols($<i>2 + 1);
    }
    _RBRACKET
  ;

assignment_statement
  : assigns num_exp _SEMICOLON
    {
      if(get_type($1) != get_type($2))
        err("incompatible types in assignment");
    }
  ;

assigns
  : _ID _ASSIGN
    {
      $$ = lookup_symbol($1, VAR|PAR);
      if($$ == NO_INDEX)
        err("'%s' undeclared", $1);
    }
  | assigns _ID _ASSIGN
    {
      if(get_type($1) != get_type(lookup_symbol($2, VAR|PAR)))
        err("incompatible types in assignment");
    }
  ;

increment_statement
  : _ID _INC _SEMICOLON
    {
      int idx = lookup_symbol($1, VAR|PAR);
      if(idx == NO_INDEX)
        err("invalit lvalue %s in increment statement", $1);
    }
  ;
num_exp
  : exp
  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: arithmetic operation");
      }
  ;

exp
  : literal
  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | function_call
  | _ID _INC
    {
      $$ = lookup_symbol($1, VAR|PAR);
      if($$ == NO_INDEX)
        err("''%s' undeclared", $1);
    }
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
  ;

literal
  : _INT_NUMBER
      { $$ = insert_literal($1, INT); }

  | _UINT_NUMBER
      { $$ = insert_literal($1, UINT); }
  ;

function_call
  : _ID
      {
        fcall_idx = lookup_symbol($1, FUN);
        fun_type = get_type(fcall_idx);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", $1);
      }
    _LPAREN argument _RPAREN
      {
        if(get_atr1(fcall_idx) != $4)
          err("wrong number of args to function '%s'",
              get_name(fcall_idx));
        set_type(FUN_REG, get_type(fcall_idx));
        $$ = FUN_REG;
      }
  ;

argument
  : /* empty */
    { $$ = 0; }

  | num_exp
    {
      if(get_atr2(fcall_idx) != get_type($1))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
      $$ = 1;
    }
  ;

if_statement
  : if_part %prec ONLY_IF
  | if_part _ELSE statement
  ;

if_part
  : _IF _LPAREN log_exp _RPAREN statement
  ;

do_while_statement
  : _DO statement _WHILE _LPAREN log_exp _RPAREN _SEMICOLON
  ;

switch_statement
  : _SWITCH _LPAREN _ID
    {
      if(lookup_symbol($3, VAR|PAR) == NO_INDEX)
        err("'%s' undeclared", $3);
      switch_type = get_type(lookup_symbol($3, VAR|PAR));
    }
  _RPAREN _LBRACKET case_part default_part _RBRACKET
  ;

case_part
  : case
  | case_part case
  ;

case
  :  _CASE literal
    {
      if(get_type($2) != switch_type)
        err("incompatible types: switch statement");

      int i = 0;
      int lit = atoi(get_name($2));
      while(i < array_len)
      {
        if(switch_lit[i] == lit)
          err("already defined case: %d", lit);
        i++;
      }

      if(i == array_len)
      {
        switch_lit[i] = lit;
        array_len++;
      }
    }
  _COLON statement break_part
  ;

break_part
  : /* empty */
  | _BREAK _SEMICOLON
  ;

default_part
  : /* empty */
  | _DEFAULT _COLON statement
  ;

standard_for
  : _FOR _LPAREN _TYPE _ID _ASSIGN literal
      {
        lvl++;
        $<i>$ = get_last_element();

        int idx = lookup_symbol($4,VAR|PAR);

        if($3 == VOID)
          err("variable type void in standard for statement");
        else if(idx == NO_INDEX)
          insert_symbol($4, VAR, $3, ++var_num, lvl);
        else if(get_atr2(idx) == lvl)
          err("redefinition of %s", $4);
        else
          insert_symbol($4, VAR, $3, ++var_num, lvl);

        if($3 != get_type($6))
          err("incompatible types in standard for");
      }
   _SEMICOLON rel_exp _SEMICOLON _ID
      {
        int idx = lookup_symbol($11, VAR|PAR);
        if(idx == NO_INDEX)
          err("undeclared %s in standard for", $11);
        else if(idx != lookup_symbol($4, VAR|PAR))
          err("must be same variables in standard for");
      }
   _INC _RPAREN _LBRACKET statement _RBRACKET
   {
    lvl--;
    clear_symbols($<i>7 + 1);
   }
  ;

basic_for
  : _FOR _ID _ASSIGN literal _DIRECTION literal
    {
      int idx = lookup_symbol($2, VAR|PAR);
      if(idx == NO_INDEX)
        err("%s is undeclared", $2);
      else if(get_type(idx) != get_type($4) || get_type(idx) != get_type($6))
        err("incompatible types in basic_for statement");
      else if (($5 == TO && (atoi(get_name($4)) > atoi(get_name($6)))) || ($5 == DOWNTO && (atoi(get_name($4)) < atoi(get_name($6)))))
        err("wrong direction");

      var_type = get_type(idx);
    }
    step_part statement _NEXT _ID
      {
        int idx = lookup_symbol($11, VAR|PAR);
        if(idx == NO_INDEX)
          err("'%s' undeclared", $11);
        else if(idx != lookup_symbol($2, VAR|PAR))
          err("must be same ID in basic for statement");
      }
  ;

step_part
  : /* empty */
  | _STEP literal
    {
      if(var_type != get_type($2))
        err("incompatible types in basic for");
    }
  ;

log_exp
  : rel_exp
  | log_exp _LOGOP rel_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: logical operator");
      }
  ;

rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: relational operator");
      }
  | _LPAREN rel_exp _RPAREN
    {
      $$ = $2;
    }
  ;


return_statement
  : _RETURN num_exp _SEMICOLON
      {
        ret_cnt++;
        if(get_type(fun_idx) == VOID)
          err("void function: return statement with an expression");
        if(get_type(fun_idx) != get_type($2))
          err("incompatible types in return");
      }
  | _RETURN _SEMICOLON
    {
      ret_cnt++;
      if(get_type(fun_idx) != VOID)
        warn("non-void function should return an expression");
    }

  ;

%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();

  synerr = yyparse();

  clear_symtab();

  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count)
    printf("\n%d error(s).\n", error_count);

  if(synerr)
    return -1; //syntax error
  else
    return error_count; //semantic errors
}

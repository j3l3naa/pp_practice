/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "semantic.y" /* yacc.c:337  */

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

#line 98 "semantic.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "semantic.tab.h".  */
#ifndef YY_YY_SEMANTIC_TAB_H_INCLUDED
# define YY_YY_SEMANTIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _TYPE = 258,
    _IF = 259,
    _ELSE = 260,
    _RETURN = 261,
    _ID = 262,
    _INT_NUMBER = 263,
    _UINT_NUMBER = 264,
    _DIRECTION = 265,
    _LPAREN = 266,
    _RPAREN = 267,
    _LBRACKET = 268,
    _RBRACKET = 269,
    _ASSIGN = 270,
    _SEMICOLON = 271,
    _AROP = 272,
    _RELOP = 273,
    _LOGOP = 274,
    _DO = 275,
    _WHILE = 276,
    _COMMA = 277,
    _INC = 278,
    _SWITCH = 279,
    _CASE = 280,
    _DEFAULT = 281,
    _BREAK = 282,
    _COLON = 283,
    _FOR = 284,
    _NEXT = 285,
    _STEP = 286,
    ONLY_IF = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "semantic.y" /* yacc.c:352  */

  int i;
  char *s;

#line 179 "semantic.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SEMANTIC_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   145

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

#define YYUNDEFTOK  2
#define YYMAXUTOK   287

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    76,    77,    82,    81,   102,   104,   113,
     116,   118,   123,   122,   130,   138,   148,   150,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   172,   177,
     171,   185,   193,   199,   207,   215,   216,   224,   225,   231,
     232,   238,   243,   246,   252,   251,   270,   272,   282,   283,
     287,   291,   296,   295,   305,   306,   311,   310,   333,   335,
     338,   340,   345,   364,   344,   380,   379,   401,   403,   411,
     412,   420,   425,   433,   441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_ID", "_INT_NUMBER", "_UINT_NUMBER", "_DIRECTION", "_LPAREN", "_RPAREN",
  "_LBRACKET", "_RBRACKET", "_ASSIGN", "_SEMICOLON", "_AROP", "_RELOP",
  "_LOGOP", "_DO", "_WHILE", "_COMMA", "_INC", "_SWITCH", "_CASE",
  "_DEFAULT", "_BREAK", "_COLON", "_FOR", "_NEXT", "_STEP", "ONLY_IF",
  "$accept", "program", "function_list", "function", "$@1", "parameter",
  "body", "variable_list", "variable", "$@2", "variables",
  "statement_list", "statement", "compound_statement", "@3", "$@4",
  "assignment_statement", "assigns", "increment_statement", "num_exp",
  "exp", "literal", "function_call", "$@5", "argument", "if_statement",
  "if_part", "do_while_statement", "switch_statement", "$@6", "case_part",
  "case", "$@7", "break_part", "default_part", "standard_for", "@8", "$@9",
  "basic_for", "$@10", "step_part", "log_exp", "rel_exp",
  "return_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      16,    18,    10,    16,   -77,   -77,   -77,   -77,    21,    39,
      57,    37,   -77,    53,   -77,   -77,    67,   -77,   -77,     7,
      68,    70,    45,    -6,   -77,   -77,    31,    75,    36,   -77,
     -77,   -77,    65,   -77,    80,   -77,    92,   -77,   -77,   -77,
     -77,   -77,   -77,    23,    71,    -5,   -77,   -77,    76,   -77,
      42,   -77,   -77,   -77,   -77,    82,    88,   -77,    79,    94,
      89,   100,    -7,    72,   -77,    31,   -77,    99,    71,    73,
       3,   -77,   -77,    12,   -77,    76,   -77,    76,    67,    96,
     -77,    84,   102,   -77,   -77,   -77,   -77,    50,   101,    76,
      31,    71,   -77,   -77,    95,   103,    31,    71,   105,   104,
     106,   -77,    95,   -77,   -77,   -77,   108,    11,   107,    84,
      84,   -77,   109,    93,   -77,   -77,   -77,    84,    69,   -77,
      97,   110,   -77,    91,   -77,   113,    84,    31,    71,   111,
      31,   -77,   -77,   112,   114,    31,   -77,   117,   124,   116,
     -77,   -77,   118,   -77,   115,   -77,   120,   122,    31,   119,
     -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     5,     1,     4,     0,     7,
       0,     0,     8,     0,    10,     6,    16,    12,    11,     0,
       0,     0,     0,    44,    28,     9,     0,     0,     0,    17,
      18,    19,     0,    23,     0,    20,    48,    22,    24,    25,
      26,    21,    14,     0,     0,    38,    42,    43,     0,    74,
       0,    35,    37,    39,    32,     0,     0,    10,     0,     0,
       0,     0,    38,     0,    27,     0,    13,     0,     0,     0,
       0,    69,    40,     0,    73,     0,    34,    46,    16,     0,
      52,     0,     0,    33,    31,    49,    15,     0,     0,     0,
       0,     0,    41,    36,    47,     0,    29,     0,     0,     0,
       0,    72,    71,    50,    70,    45,     0,     0,     0,     0,
       0,    30,     0,     0,    65,    62,    51,     0,    60,    54,
      67,     0,    56,     0,    55,     0,     0,     0,     0,     0,
       0,    53,    68,     0,     0,     0,    61,     0,     0,    58,
      66,    63,     0,    57,     0,    59,     0,     0,     0,     0,
      64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   133,   -77,   -77,   -77,    83,   -77,   -77,
     -77,    59,   -25,   -77,   -77,   -77,   -77,   -77,   -77,   -20,
      66,   -76,   -19,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,    26,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,    48,   -65,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    11,    15,    16,    18,    20,
      43,    19,    29,    30,    57,   106,    31,    32,    33,    69,
      51,    52,    53,    56,    95,    35,    36,    37,    38,    98,
     118,   119,   129,   143,   125,    39,   121,   144,    40,   120,
     127,    70,    71,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    58,    50,    88,   -44,    99,   -44,    34,    83,    54,
       6,    21,    63,    22,    23,    90,    72,    55,    72,     1,
      24,    25,    91,   112,    92,     5,   104,    26,    73,    75,
      91,    27,     9,   114,   115,    21,    28,    22,    23,    66,
      85,   122,    10,    60,    24,    67,    34,    61,    87,    13,
     132,    26,    45,    46,    47,    27,    48,    94,    74,    75,
      28,    49,    92,   134,    12,   103,    14,    75,    89,   102,
      17,    34,    62,    46,    47,    42,    48,    34,    45,    46,
      47,    44,    68,    45,    46,    47,    59,    48,    84,    75,
      75,    89,    46,    47,   117,   123,    64,    65,    76,    77,
      79,    80,   133,    82,    81,   136,    86,    97,    34,   100,
     139,    34,    75,   101,   109,   105,    34,   108,   117,   130,
     113,   110,   111,   149,   140,   116,   128,   131,   126,    34,
     138,   141,   147,   150,   145,   148,     7,    96,   146,   135,
      78,    93,   137,   142,   124,   107
};

static const yytype_uint8 yycheck[] =
{
      19,    26,    22,    68,    11,    81,    11,    26,    15,    15,
       0,     4,    32,     6,     7,    12,    23,    23,    23,     3,
      13,    14,    19,    12,    12,     7,    91,    20,    48,    17,
      19,    24,    11,   109,   110,     4,    29,     6,     7,    16,
      65,   117,     3,     7,    13,    22,    65,    11,    68,    12,
     126,    20,     7,     8,     9,    24,    11,    77,    16,    17,
      29,    16,    12,   128,     7,    90,    13,    17,    18,    89,
       3,    90,     7,     8,     9,     7,    11,    96,     7,     8,
       9,    11,    11,     7,     8,     9,    11,    11,    16,    17,
      17,    18,     8,     9,    25,    26,    16,     5,    16,    11,
      21,     7,   127,     3,    15,   130,     7,    11,   127,     7,
     135,   130,    17,    12,    10,    12,   135,    12,    25,    28,
      13,    15,    14,   148,     7,    16,    16,    14,    31,   148,
      16,     7,    12,    14,    16,    13,     3,    78,    23,    28,
      57,    75,    30,    27,   118,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    34,    35,    36,     7,     0,    36,    37,    11,
       3,    38,     7,    12,    13,    39,    40,     3,    41,    44,
      42,     4,     6,     7,    13,    14,    20,    24,    29,    45,
      46,    49,    50,    51,    55,    58,    59,    60,    61,    68,
      71,    76,     7,    43,    11,     7,     8,     9,    11,    16,
      52,    53,    54,    55,    15,    23,    56,    47,    45,    11,
       7,    11,     7,    52,    16,     5,    16,    22,    11,    52,
      74,    75,    23,    52,    16,    17,    16,    11,    40,    21,
       7,    15,     3,    15,    16,    45,     7,    52,    75,    18,
      12,    19,    12,    53,    52,    57,    44,    11,    62,    54,
       7,    12,    52,    45,    75,    12,    48,    74,    12,    10,
      15,    14,    12,    13,    54,    54,    16,    25,    63,    64,
      72,    69,    54,    26,    64,    67,    31,    73,    16,    65,
      28,    14,    54,    45,    75,    28,    45,    30,    16,    45,
       7,     7,    27,    66,    70,    16,    23,    12,    13,    45,
      14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    35,    37,    36,    38,    38,    39,
      40,    40,    42,    41,    43,    43,    44,    44,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    47,    48,
      46,    49,    50,    50,    51,    52,    52,    53,    53,    53,
      53,    53,    54,    54,    56,    55,    57,    57,    58,    58,
      59,    60,    62,    61,    63,    63,    65,    64,    66,    66,
      67,    67,    69,    70,    68,    72,    71,    73,    73,    74,
      74,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     7,     0,     2,     4,
       0,     2,     0,     4,     1,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       6,     3,     2,     3,     3,     1,     3,     1,     1,     1,
       2,     3,     1,     1,     0,     5,     0,     1,     1,     3,
       5,     7,     0,     9,     1,     2,     0,     6,     0,     2,
       0,     3,     0,     0,    17,     0,    11,     0,     2,     1,
       3,     3,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 69 "semantic.y" /* yacc.c:1652  */
    {
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
#line 1382 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 82 "semantic.y" /* yacc.c:1652  */
    {
        lvl = 0;
        fun_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR);
        else
          err("redefinition of function '%s'", (yyvsp[0].s));
      }
#line 1395 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 91 "semantic.y" /* yacc.c:1652  */
    {
        clear_symbols(fun_idx + 1);
        var_num = 0;
        if(get_type(fun_idx) != VOID && ret_cnt == 0)

            warn("no return statement in non-void function %s", get_name(fun_idx));
      }
#line 1407 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 102 "semantic.y" /* yacc.c:1652  */
    { set_atr1(fun_idx, 0); }
#line 1413 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 105 "semantic.y" /* yacc.c:1652  */
    {
        insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, (yyvsp[-1].i));
      }
#line 1423 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 123 "semantic.y" /* yacc.c:1652  */
    { var_type = (yyvsp[0].i);
      if((yyvsp[0].i) == VOID)
        err("variable type void");
    }
#line 1432 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 131 "semantic.y" /* yacc.c:1652  */
    {
      int idx = lookup_symbol((yyvsp[0].s), VAR|PAR);
      if(idx == NO_INDEX || get_atr2(idx) != lvl)
        insert_symbol((yyvsp[0].s), VAR, var_type, ++var_num, lvl);
      else
        err("redefinition of '%s'", (yyvsp[0].s));
    }
#line 1444 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 139 "semantic.y" /* yacc.c:1652  */
    {
      int idx = lookup_symbol((yyvsp[0].s), VAR|PAR);
      if(idx == NO_INDEX || get_atr2(idx) != lvl)
        insert_symbol((yyvsp[0].s), VAR, var_type, ++var_num, lvl);
      else
        err("redefinition of '%s'", (yyvsp[0].s));
    }
#line 1456 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 164 "semantic.y" /* yacc.c:1652  */
    {
      if(fun_type != VOID)
        err("non-void function must be assigned");
    }
#line 1465 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 172 "semantic.y" /* yacc.c:1652  */
    {
      lvl++;
      (yyval.i) = get_last_element();
    }
#line 1474 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 177 "semantic.y" /* yacc.c:1652  */
    {
      lvl--;
      clear_symbols((yyvsp[-2].i) + 1);
    }
#line 1483 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 186 "semantic.y" /* yacc.c:1652  */
    {
      if(get_type((yyvsp[-2].i)) != get_type((yyvsp[-1].i)))
        err("incompatible types in assignment");
    }
#line 1492 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 194 "semantic.y" /* yacc.c:1652  */
    {
      (yyval.i) = lookup_symbol((yyvsp[-1].s), VAR|PAR);
      if((yyval.i) == NO_INDEX)
        err("'%s' undeclared", (yyvsp[-1].s));
    }
#line 1502 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 200 "semantic.y" /* yacc.c:1652  */
    {
      if(get_type((yyvsp[-2].i)) != get_type(lookup_symbol((yyvsp[-1].s), VAR|PAR)))
        err("incompatible types in assignment");
    }
#line 1511 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 208 "semantic.y" /* yacc.c:1652  */
    {
      int idx = lookup_symbol((yyvsp[-2].s), VAR|PAR);
      if(idx == NO_INDEX)
        err("invalit lvalue %s in increment statement", (yyvsp[-2].s));
    }
#line 1521 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 217 "semantic.y" /* yacc.c:1652  */
    {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: arithmetic operation");
      }
#line 1530 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 226 "semantic.y" /* yacc.c:1652  */
    {
        (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
      }
#line 1540 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 233 "semantic.y" /* yacc.c:1652  */
    {
      (yyval.i) = lookup_symbol((yyvsp[-1].s), VAR|PAR);
      if((yyval.i) == NO_INDEX)
        err("''%s' undeclared", (yyvsp[-1].s));
    }
#line 1550 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 239 "semantic.y" /* yacc.c:1652  */
    { (yyval.i) = (yyvsp[-1].i); }
#line 1556 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 244 "semantic.y" /* yacc.c:1652  */
    { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 1562 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 247 "semantic.y" /* yacc.c:1652  */
    { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 1568 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 252 "semantic.y" /* yacc.c:1652  */
    {
        fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        fun_type = get_type(fcall_idx);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[0].s));
      }
#line 1579 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 259 "semantic.y" /* yacc.c:1652  */
    {
        if(get_atr1(fcall_idx) != (yyvsp[-1].i))
          err("wrong number of args to function '%s'",
              get_name(fcall_idx));
        set_type(FUN_REG, get_type(fcall_idx));
        (yyval.i) = FUN_REG;
      }
#line 1591 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 270 "semantic.y" /* yacc.c:1652  */
    { (yyval.i) = 0; }
#line 1597 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 273 "semantic.y" /* yacc.c:1652  */
    {
      if(get_atr2(fcall_idx) != get_type((yyvsp[0].i)))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
      (yyval.i) = 1;
    }
#line 1608 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 296 "semantic.y" /* yacc.c:1652  */
    {
      if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX)
        err("'%s' undeclared", (yyvsp[0].s));
      switch_type = get_type(lookup_symbol((yyvsp[0].s), VAR|PAR));
    }
#line 1618 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 311 "semantic.y" /* yacc.c:1652  */
    {
      if(get_type((yyvsp[0].i)) != switch_type)
        err("incompatible types: switch statement");

      int i = 0;
      int lit = atoi(get_name((yyvsp[0].i)));
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
#line 1642 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 345 "semantic.y" /* yacc.c:1652  */
    {
        lvl++;
        (yyval.i) = get_last_element();

        int idx = lookup_symbol((yyvsp[-2].s),VAR|PAR);

        if((yyvsp[-3].i) == VOID)
          err("variable type void in standard for statement");
        else if(idx == NO_INDEX)
          insert_symbol((yyvsp[-2].s), VAR, (yyvsp[-3].i), ++var_num, lvl);
        else if(get_atr2(idx) == lvl)
          err("redefinition of %s", (yyvsp[-2].s));
        else
          insert_symbol((yyvsp[-2].s), VAR, (yyvsp[-3].i), ++var_num, lvl);

        if((yyvsp[-3].i) != get_type((yyvsp[0].i)))
          err("incompatible types in standard for");
      }
#line 1665 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 364 "semantic.y" /* yacc.c:1652  */
    {
        int idx = lookup_symbol((yyvsp[0].s), VAR|PAR);
        if(idx == NO_INDEX)
          err("undeclared %s in standard for", (yyvsp[0].s));
        else if(idx != lookup_symbol((yyvsp[-7].s), VAR|PAR))
          err("must be same variables in standard for");
      }
#line 1677 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 372 "semantic.y" /* yacc.c:1652  */
    {
    lvl--;
    clear_symbols((yyvsp[-10].i) + 1);
   }
#line 1686 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 380 "semantic.y" /* yacc.c:1652  */
    {
      int idx = lookup_symbol((yyvsp[-4].s), VAR|PAR);
      if(idx == NO_INDEX)
        err("%s is undeclared", (yyvsp[-4].s));
      else if(get_type(idx) != get_type((yyvsp[-2].i)) || get_type(idx) != get_type((yyvsp[0].i)))
        err("incompatible types in basic_for statement");
      else if (((yyvsp[-1].i) == TO && (atoi(get_name((yyvsp[-2].i))) > atoi(get_name((yyvsp[0].i))))) || ((yyvsp[-1].i) == DOWNTO && (atoi(get_name((yyvsp[-2].i))) < atoi(get_name((yyvsp[0].i))))))
        err("wrong direction");

      var_type = get_type(idx);
    }
#line 1702 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 392 "semantic.y" /* yacc.c:1652  */
    {
        int idx = lookup_symbol((yyvsp[0].s), VAR|PAR);
        if(idx == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
        else if(idx != lookup_symbol((yyvsp[-9].s), VAR|PAR))
          err("must be same ID in basic for statement");
      }
#line 1714 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 404 "semantic.y" /* yacc.c:1652  */
    {
      if(var_type != get_type((yyvsp[0].i)))
        err("incompatible types in basic for");
    }
#line 1723 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 413 "semantic.y" /* yacc.c:1652  */
    {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: logical operator");
      }
#line 1732 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 421 "semantic.y" /* yacc.c:1652  */
    {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: relational operator");
      }
#line 1741 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 426 "semantic.y" /* yacc.c:1652  */
    {
      (yyval.i) = (yyvsp[-1].i);
    }
#line 1749 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 434 "semantic.y" /* yacc.c:1652  */
    {
        ret_cnt++;
        if(get_type(fun_idx) == VOID)
          err("void function: return statement with an expression");
        if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
          err("incompatible types in return");
      }
#line 1761 "semantic.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 442 "semantic.y" /* yacc.c:1652  */
    {
      ret_cnt++;
      if(get_type(fun_idx) != VOID)
        warn("non-void function should return an expression");
    }
#line 1771 "semantic.tab.c" /* yacc.c:1652  */
    break;


#line 1775 "semantic.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 450 "semantic.y" /* yacc.c:1918  */


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

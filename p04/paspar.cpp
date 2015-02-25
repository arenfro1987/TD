/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BEGAN = 258,
     END = 259,
     ID = 260,
     PLUS = 261,
     MINUS = 262,
     STAR = 263,
     SLASH = 264,
     ASSIGN = 265,
     PERIOD = 266,
     COMMA = 267,
     SEMICOLON = 268,
     COLON = 269,
     EQU = 270,
     NEQ = 271,
     LES = 272,
     LEQ = 273,
     GRT = 274,
     GEQ = 275,
     LPAREN = 276,
     RPAREN = 277,
     LBRACKET = 278,
     RBRACKET = 279,
     RANGE = 280,
     AND = 281,
     ARRAY = 282,
     DIV = 283,
     DO = 284,
     ELSE = 285,
     FUNCTION = 286,
     IF = 287,
     MOD = 288,
     NOT = 289,
     OF = 290,
     OR = 291,
     PROCEDURE = 292,
     PROGRAM = 293,
     THEN = 294,
     TO = 295,
     TYPE = 296,
     VAR = 297,
     COMMENT = 298,
     CHRLIT = 299,
     REALIT = 300,
     INTLIT = 301,
     WHILE = 302
   };
#endif
/* Tokens.  */
#define BEGAN 258
#define END 259
#define ID 260
#define PLUS 261
#define MINUS 262
#define STAR 263
#define SLASH 264
#define ASSIGN 265
#define PERIOD 266
#define COMMA 267
#define SEMICOLON 268
#define COLON 269
#define EQU 270
#define NEQ 271
#define LES 272
#define LEQ 273
#define GRT 274
#define GEQ 275
#define LPAREN 276
#define RPAREN 277
#define LBRACKET 278
#define RBRACKET 279
#define RANGE 280
#define AND 281
#define ARRAY 282
#define DIV 283
#define DO 284
#define ELSE 285
#define FUNCTION 286
#define IF 287
#define MOD 288
#define NOT 289
#define OF 290
#define OR 291
#define PROCEDURE 292
#define PROGRAM 293
#define THEN 294
#define TO 295
#define TYPE 296
#define VAR 297
#define COMMENT 298
#define CHRLIT 299
#define REALIT 300
#define INTLIT 301
#define WHILE 302




/* Copy the first part of user declarations.  */
#line 1 "paspar.y"

//c++ includes
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
//app inlude file
#include "paslex.h"
#include "paspar.h"
//symbol table
#include "List.h"
#include "Typ.h"
#include "Sym.h"
#include "Label.h"
#include "Namespace.h"
#include "Locality.h"
#include "LocalityStack.h"
#include "SymbolTable.h"
//semantic include files
#include "program.h"
#include "program_head.h"
#include "subprogram_head.h"
#include "subprogram_declaration.h"
#include "standard_type.h"
#include "subprogram_parameters.h"
#include "variable_declarations.h"
#include "type.h"
#include "parameter_list.h"
#include "identifier_list.h"



typedef string st;



//functions
void yyerror(const char* msg) {}
int yylex(void);
int yywrap(){
	return 1;
}
//externals
extern int yylex ();
extern void yyerror ( char *);
extern int line;
extern int col;
extern Label L;
extern ofstream o;

//global varibles defined in paspar.y
SymbolTable ST;  //The SymbolTable



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 58 "paspar.y"
{
  string* token;
  List<string>* slist;
  Typ* typ;
  List<VariableSymbol*>* varlist;
}
/* Line 193 of yacc.c.  */
#line 255 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 268 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    12,    15,    18,    19,    23,    25,
      27,    31,    32,    39,    41,    50,    52,    53,    57,    61,
      67,    72,    73,    77,    81,    87,    91,    92,    94,    96,
     100,   104,   106,   108,   115,   120,   122,   127,   129,   134,
     136,   140,   142,   146,   148,   150,   152,   154,   156,   158,
     160,   163,   167,   169,   171,   173,   175,   177,   179,   183,
     185,   187,   189,   191,   193,   195,   200,   205,   209,   212,
     214,   216
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    51,    52,    -1,    38,     5,    53,
      13,    -1,    56,    59,    -1,    64,    11,    -1,    -1,    21,
      54,    22,    -1,    55,    -1,     5,    -1,    55,    12,     5,
      -1,    -1,    56,    42,    55,    14,    57,    13,    -1,    58,
      -1,    27,    23,    46,    25,    46,    24,    35,    58,    -1,
       5,    -1,    -1,    59,    60,    13,    -1,    61,    56,    64,
      -1,    31,     5,    62,    14,    58,    -1,    37,     5,    62,
      13,    -1,    -1,    21,    63,    22,    -1,    55,    14,    57,
      -1,    63,    13,    55,    14,    57,    -1,     3,    65,     4,
      -1,    -1,    66,    -1,    67,    -1,    66,    13,    67,    -1,
      68,    10,    71,    -1,    69,    -1,    64,    -1,    32,    71,
      39,    67,    30,    67,    -1,    47,    71,    29,    67,    -1,
       5,    -1,     5,    23,    71,    24,    -1,     5,    -1,     5,
      21,    70,    22,    -1,    71,    -1,    70,    12,    71,    -1,
      73,    -1,    73,    72,    73,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    76,    -1,
      74,    76,    -1,    73,    75,    76,    -1,     6,    -1,     7,
      -1,     6,    -1,     7,    -1,    36,    -1,    78,    -1,    76,
      77,    78,    -1,     8,    -1,     9,    -1,    28,    -1,    33,
      -1,    26,    -1,     5,    -1,     5,    23,    71,    24,    -1,
       5,    21,    70,    22,    -1,    21,    71,    22,    -1,    34,
      78,    -1,    46,    -1,    45,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   123,   128,   132,   137,   140,   144,   148,
     153,   159,   162,   167,   172,   177,   183,   186,   190,   195,
     200,   206,   210,   215,   220,   225,   230,   233,   237,   241,
     245,   249,   253,   257,   261,   265,   269,   273,   277,   281,
     285,   289,   293,   297,   301,   305,   309,   313,   317,   321,
     325,   329,   333,   337,   341,   345,   349,   353,   357,   361,
     365,   369,   373,   377,   381,   385,   389,   393,   397,   401,
     405,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEGAN", "END", "ID", "PLUS", "MINUS",
  "STAR", "SLASH", "ASSIGN", "PERIOD", "COMMA", "SEMICOLON", "COLON",
  "EQU", "NEQ", "LES", "LEQ", "GRT", "GEQ", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "RANGE", "AND", "ARRAY", "DIV", "DO", "ELSE", "FUNCTION",
  "IF", "MOD", "NOT", "OF", "OR", "PROCEDURE", "PROGRAM", "THEN", "TO",
  "TYPE", "VAR", "COMMENT", "CHRLIT", "REALIT", "INTLIT", "WHILE",
  "$accept", "program", "program_head", "program_declarations",
  "program_body", "program_parameters", "program_parameter_list",
  "identifier_list", "variable_declarations", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "subprogram_parameters", "parameter_list", "compound_statement",
  "optional_statements", "statement_list", "statement", "variable",
  "procedure_statement", "expression_list", "expression", "relop",
  "simple_expression", "sign", "addop", "term", "mulop", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    51,    52,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    59,    59,    60,    61,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     2,     0,     3,     1,     1,
       3,     0,     6,     1,     8,     1,     0,     3,     3,     5,
       4,     0,     3,     3,     5,     3,     0,     1,     1,     3,
       3,     1,     1,     6,     4,     1,     4,     1,     4,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     2,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     6,     1,     0,    16,     0,     0,
      26,     2,     0,     0,     4,     9,     0,     8,     3,    37,
       0,     0,    32,     0,    27,    28,     0,    31,     5,     0,
       0,     0,     0,    11,     7,     0,     0,     0,    64,    52,
      53,     0,     0,    71,    70,    69,     0,    41,     0,    49,
      57,     0,    25,     0,     0,     0,    21,    21,    17,     0,
      10,     0,    39,     0,     0,     0,     0,    68,     0,    54,
      55,    43,    44,    45,    46,    47,    48,    56,     0,     0,
      50,    59,    60,    63,    61,    62,     0,     0,    29,    30,
      15,     0,     0,    13,     0,     0,     0,    18,     0,    38,
      36,     0,     0,    67,     0,    42,    51,    58,    34,     0,
      12,     0,     0,     0,    20,    40,    66,    65,     0,     0,
       0,     0,    22,    19,    33,     0,    23,     0,     0,     0,
       0,    24,     0,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    11,     9,    16,    17,     7,    92,
      93,    14,    32,    33,    95,   112,    22,    23,    24,    25,
      26,    27,    61,    62,    78,    47,    48,    79,    49,    86,
      50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int8 yypact[] =
{
     -21,    16,    24,  -104,    22,  -104,    33,    12,    39,    44,
       2,  -104,    49,    39,    -6,  -104,    41,    52,  -104,    67,
       7,     7,  -104,    64,    76,  -104,    83,  -104,  -104,    68,
      90,    91,    84,  -104,  -104,    93,     7,     7,    63,  -104,
    -104,     7,    21,  -104,  -104,  -104,    60,    55,    21,    50,
    -104,    71,  -104,     2,     7,     6,    81,    81,  -104,     5,
    -104,     8,  -104,    77,     7,     7,    82,  -104,     2,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,     7,    21,
      50,  -104,  -104,  -104,  -104,  -104,    21,     2,  -104,  -104,
    -104,    86,    92,  -104,    39,    89,    94,  -104,     7,  -104,
    -104,    15,    87,  -104,    85,     9,    50,  -104,  -104,    66,
    -104,    73,    10,   101,  -104,  -104,  -104,  -104,     2,    88,
       6,    39,  -104,  -104,  -104,    70,  -104,    80,    95,     6,
      75,  -104,   101,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,  -104,  -104,  -104,  -104,  -104,   -13,    96,   -81,
    -103,  -104,  -104,  -104,    57,  -104,    -3,  -104,  -104,   -49,
    -104,  -104,    53,   -19,  -104,    40,  -104,  -104,   -39,  -104,
     -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int16 yytable[] =
{
      29,    46,    51,    12,    88,    10,    67,    19,    10,    80,
     123,    90,    38,    39,    40,    69,    70,     1,    63,   104,
      98,     4,    66,   121,     5,    30,    38,    98,    41,   133,
      99,    31,   122,    91,    20,    89,    10,   116,   108,   126,
     106,    42,    41,     8,    15,    77,   102,    13,   131,    21,
     107,    43,    44,    45,    13,    42,    97,    18,    81,    82,
      28,    69,    70,    34,    35,    43,    44,    45,    52,   124,
      71,    72,    73,    74,    75,    76,    83,   -35,    84,   115,
      35,   111,    55,    85,    64,    35,    65,   120,    36,    53,
      37,    77,    35,    54,   129,    56,    57,    58,    60,    68,
      87,   100,    94,   113,   103,   110,    90,   114,   127,   109,
     132,   117,   119,   125,    96,   118,   128,   101,   105,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59
};

static const yytype_int16 yycheck[] =
{
      13,    20,    21,     6,    53,     3,    42,     5,     3,    48,
     113,     5,     5,     6,     7,     6,     7,    38,    37,    68,
      12,     5,    41,    13,     0,    31,     5,    12,    21,   132,
      22,    37,    22,    27,    32,    54,     3,    22,    87,   120,
      79,    34,    21,    21,     5,    36,    65,    42,   129,    47,
      86,    44,    45,    46,    42,    34,    59,    13,     8,     9,
      11,     6,     7,    22,    12,    44,    45,    46,     4,   118,
      15,    16,    17,    18,    19,    20,    26,    10,    28,    98,
      12,    94,    14,    33,    21,    12,    23,    14,    21,    13,
      23,    36,    12,    10,    14,     5,     5,    13,     5,    39,
      29,    24,    21,    14,    22,    13,     5,    13,   121,    23,
      35,    24,    46,    25,    57,    30,    46,    64,    78,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    49,    50,     5,     0,    51,    56,    21,    53,
       3,    52,    64,    42,    59,     5,    54,    55,    13,     5,
      32,    47,    64,    65,    66,    67,    68,    69,    11,    55,
      31,    37,    60,    61,    22,    12,    21,    23,     5,     6,
       7,    21,    34,    44,    45,    46,    71,    73,    74,    76,
      78,    71,     4,    13,    10,    14,     5,     5,    13,    56,
       5,    70,    71,    71,    21,    23,    71,    78,    39,     6,
       7,    15,    16,    17,    18,    19,    20,    36,    72,    75,
      76,     8,     9,    26,    28,    33,    77,    29,    67,    71,
       5,    27,    57,    58,    21,    62,    62,    64,    12,    22,
      24,    70,    71,    22,    67,    73,    76,    78,    67,    23,
      13,    55,    63,    14,    13,    71,    22,    24,    30,    46,
      14,    13,    22,    58,    67,    25,    57,    55,    46,    14,
      24,    57,    35,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 119 "paspar.y"
    {
    o << "#001 program -> program_head program_declarations program_body" << endl;
    program();                 //program semantics
  }
    break;

  case 3:
#line 124 "paspar.y"
    {
    o << "#002 program_head -> PROGRAM ID(" << (*(yyvsp[(2) - (4)].token)) << ") program_parameters ;" << endl;
    program_head(*(yyvsp[(2) - (4)].token));
  }
    break;

  case 4:
#line 129 "paspar.y"
    {
    o << "#003 program_declarations -> variable_declarations subprogram_declarations" << endl;
  }
    break;

  case 5:
#line 133 "paspar.y"
    {
    o << "#004 program_body -> compound_statement ." << endl;
  }
    break;

  case 6:
#line 137 "paspar.y"
    {
    o << "#005 program_parameters -> empty" << endl;
  }
    break;

  case 7:
#line 141 "paspar.y"
    {
    o << "#006 program_parameters -> (program_parameter_list)" << endl;
  }
    break;

  case 8:
#line 145 "paspar.y"
    {
    o << "#007 program_parameter_list -> identifier_list" << endl;
  }
    break;

  case 9:
#line 149 "paspar.y"
    {
    o << "#008 identifier_list -> ID(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl;
    (yyval.slist)=identifier_list((yyvsp[(1) - (1)].token));
  }
    break;

  case 10:
#line 154 "paspar.y"
    {
    o << "#009 identifier_list -> identifier_list , ID(" << (*(yyvsp[(3) - (3)].token)) << ")" << endl; 
    (yyval.slist)=identifier_list((yyvsp[(1) - (3)].slist),(yyvsp[(3) - (3)].token));
  }
    break;

  case 11:
#line 159 "paspar.y"
    {
    o << "#010 variable_declarations -> empty" << endl; 
  }
    break;

  case 12:
#line 163 "paspar.y"
    {
    o << "#011 variable_declarations -> variable_declarations VAR identifier_list:type;" << endl; 
    variable_declarations((yyvsp[(3) - (6)].slist),(yyvsp[(5) - (6)].typ));
  }
    break;

  case 13:
#line 168 "paspar.y"
    {
    o << "#012 type -> standard_type" << endl; 
    (yyval.typ)=type((yyvsp[(1) - (1)].typ));
  }
    break;

  case 14:
#line 173 "paspar.y"
    {
    o << "#013 type -> ARRAY[INTLIT .. INTLIT] OF standard_type" << endl; 
    (yyval.typ)=type(*(yyvsp[(3) - (8)].token),*(yyvsp[(5) - (8)].token),(yyvsp[(8) - (8)].typ));
  }
    break;

  case 15:
#line 178 "paspar.y"
    {
    o << "#014 standard_type -> ID(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
    (yyval.typ)=standard_type(*(yyvsp[(1) - (1)].token));
  }
    break;

  case 16:
#line 183 "paspar.y"
    {
    o << "#015 subprogram_declarations -> empty" << endl; 
  }
    break;

  case 17:
#line 187 "paspar.y"
    {
    o << "#016 subprogram_declarations -> subprogram_declarations subprogram_declaration ;" << endl; 
  }
    break;

  case 18:
#line 191 "paspar.y"
    {
    o << "#017 subprogram_declaration -> subprogram_head variable_declarations compound_statement" << endl; 
    subprogram_declaration();
  }
    break;

  case 19:
#line 196 "paspar.y"
    {
    o << "#018 subprogram_head -> FUNCTION ID(" << (*(yyvsp[(2) - (5)].token)) << ") subprogram_parameters : standard_type ;" << endl; 
    subprogram_head(*(yyvsp[(2) - (5)].token),(yyvsp[(3) - (5)].varlist),(yyvsp[(5) - (5)].typ));
  }
    break;

  case 20:
#line 201 "paspar.y"
    {
    o << "#019 subprogram_head -> PROCDURE ID(" << (*(yyvsp[(2) - (4)].token)) << ") subprogram_parameters ;" << endl;
    subprogram_head(*(yyvsp[(2) - (4)].token),(yyvsp[(3) - (4)].varlist));
  }
    break;

  case 21:
#line 206 "paspar.y"
    {
    o << "#020 subprogram_parameters -> empty" << endl; 
    (yyval.varlist)=subprogram_parameters();
  }
    break;

  case 22:
#line 211 "paspar.y"
    {
    o << "#021 subprogram_parameters -> ( parameter_list )" << endl; 
    (yyval.varlist)=subprogram_parameters((yyvsp[(2) - (3)].varlist));
  }
    break;

  case 23:
#line 216 "paspar.y"
    {
    o << "#022 parameter_list -> identifier_list : type" << endl; 
    (yyval.varlist)=parameter_list((yyvsp[(1) - (3)].slist),(yyvsp[(3) - (3)].typ));
  }
    break;

  case 24:
#line 221 "paspar.y"
    {
    o << "#023 parameter_list -> parameter_list ; identifier_list : type" <<endl; 
    (yyval.varlist)=parameter_list((yyvsp[(1) - (5)].varlist),(yyvsp[(3) - (5)].slist),(yyvsp[(5) - (5)].typ));
  }
    break;

  case 25:
#line 226 "paspar.y"
    {
    o << "#024 compound_statement -> BEGIN optional_statement END" << endl; 
  }
    break;

  case 26:
#line 230 "paspar.y"
    {
    o << "#025 optional_statements -> empty" << endl; 
  }
    break;

  case 27:
#line 234 "paspar.y"
    {
    o << "#026 optional_statements -> statement_list" << endl; 
  }
    break;

  case 28:
#line 238 "paspar.y"
    {
    o << "#027 statement_list -> statement" << endl; 
  }
    break;

  case 29:
#line 242 "paspar.y"
    {
    o << "#028 statement_list -> statement_list ; statement" << endl; 
  }
    break;

  case 30:
#line 246 "paspar.y"
    {
    o << "#029 statement -> variable := expression" << endl; 
  }
    break;

  case 31:
#line 250 "paspar.y"
    {
    o << "#030 statement -> procedure_statement" << endl; 
  }
    break;

  case 32:
#line 254 "paspar.y"
    {
    o << "#031 statement -> compound_statement" << endl; 
  }
    break;

  case 33:
#line 258 "paspar.y"
    {
    o << "#032 statement -> IF expression THEN statement ELSE statement " << endl; 
  }
    break;

  case 34:
#line 262 "paspar.y"
    {
    o << endl << "#033 statement -> WHILE expression DO statement " << endl; 
  }
    break;

  case 35:
#line 266 "paspar.y"
    {
    o << "#034 variable -> ID(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;

  case 36:
#line 270 "paspar.y"
    {
    o << "#035 variable -> ID [ expression ]" << endl; 
  }
    break;

  case 37:
#line 274 "paspar.y"
    {
    o << "#036 procedure_statement -> ID(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;

  case 38:
#line 278 "paspar.y"
    {
    o << "#037 procedure_statement -> ID(" << (*(yyvsp[(1) - (4)].token)) << ") ( expression_list )" << endl; 
  }
    break;

  case 39:
#line 282 "paspar.y"
    {
    o << "#038 expression_list -> expression" << endl; 
  }
    break;

  case 40:
#line 286 "paspar.y"
    {
    o << "#039 expression_list -> expression_list , expression" << endl; 
  }
    break;

  case 41:
#line 290 "paspar.y"
    {
    o << "#040 expression -> simple_expression" << endl; 
  }
    break;

  case 42:
#line 294 "paspar.y"
    {
    o << "#041 expression -> simple_expression relop simple_expression" << endl; 
  }
    break;

  case 43:
#line 298 "paspar.y"
    {
    o << "#042 relop -> =" << endl; 
  }
    break;

  case 44:
#line 302 "paspar.y"
    {
    o << "#043 relop -> <>" << endl; 
  }
    break;

  case 45:
#line 306 "paspar.y"
    {
    o << "#044 relop -> <" << endl; 
  }
    break;

  case 46:
#line 310 "paspar.y"
    {
    o << "#045 relop -> <=" << endl; 
  }
    break;

  case 47:
#line 314 "paspar.y"
    {
    o << "#046 relop -> >" << endl; 
  }
    break;

  case 48:
#line 318 "paspar.y"
    {
    o << "#047 relop -> >=" << endl; 
  }
    break;

  case 49:
#line 322 "paspar.y"
    {
    o << "#048 simple_expression -> term" << endl; 
  }
    break;

  case 50:
#line 326 "paspar.y"
    {
    o << "#049 simple_expression -> sign term" << endl; 
  }
    break;

  case 51:
#line 330 "paspar.y"
    {
    o << "#050 simple_expression -> simple_expression addop term" << endl; 
  }
    break;

  case 52:
#line 334 "paspar.y"
    {
    o << "#051 sign -> +" << endl; 
  }
    break;

  case 53:
#line 338 "paspar.y"
    {
    o << "#052 sign -> -" << endl; 
  }
    break;

  case 54:
#line 342 "paspar.y"
    {
    o << "#053 addop -> +" << endl; 
  }
    break;

  case 55:
#line 346 "paspar.y"
    {
    o << "#054 addop -> -" << endl; 
  }
    break;

  case 56:
#line 350 "paspar.y"
    {
    o << "#055 addop -> OR" << endl; 
  }
    break;

  case 57:
#line 354 "paspar.y"
    {
    o << "#056 term -> factor" << endl; 
  }
    break;

  case 58:
#line 358 "paspar.y"
    {
    o << "#057 term -> term mulop factor" << endl; 
  }
    break;

  case 59:
#line 362 "paspar.y"
    {
    o << "#058 mulop -> *" << endl; 
  }
    break;

  case 60:
#line 366 "paspar.y"
    {
    o << "#059 mulop -> /" << endl; 
  }
    break;

  case 61:
#line 370 "paspar.y"
    {
    o << "#060 mulop -> DIV" << endl; 
  }
    break;

  case 62:
#line 374 "paspar.y"
    {
    o << "#061 mulop -> MOD" << endl; 
  }
    break;

  case 63:
#line 378 "paspar.y"
    {
    o << "#062 mulop -> AND" << endl; 
  }
    break;

  case 64:
#line 382 "paspar.y"
    {
    o << "#063 factor -> ID(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;

  case 65:
#line 386 "paspar.y"
    {
    o << "#064 factor -> ID(" << (*(yyvsp[(1) - (4)].token)) << ") [ expression ]" << endl; 
  }
    break;

  case 66:
#line 390 "paspar.y"
    {
    o << "#065 factor -> ID(" << (*(yyvsp[(1) - (4)].token)) << ") ( expression_list )" << endl; 
  }
    break;

  case 67:
#line 394 "paspar.y"
    {
    o << "#066 factor -> ( expression )" << endl; 
  }
    break;

  case 68:
#line 398 "paspar.y"
    {
    o << "#067 factor -> NOT factor" << endl; 
  }
    break;

  case 69:
#line 402 "paspar.y"
    {
    o << "#068 factor -> INTLIT(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;

  case 70:
#line 406 "paspar.y"
    {
    o << "#069 factor -> REALIT(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;

  case 71:
#line 410 "paspar.y"
    {
    o << "#070 factor -> CHRLIT(" << (*(yyvsp[(1) - (1)].token)) << ")" << endl; 
  }
    break;


/* Line 1267 of yacc.c.  */
#line 2091 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 413 "paspar.y"


Parser::Parser(FILE* i):Lexer(i){}
int Parser::Parse(){
	return yyparse();
}


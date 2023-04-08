/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Parser-G22.2.y"

	#include <stdio.h>
	#include <stdlib.h>
  	extern int yylex(void);
  	extern char *yytext;
 	extern FILE *yyin;
	extern int yylineno;
	int linea;	


/* Line 189 of yacc.c  */
#line 83 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOCTYPE = 258,
     AHTML = 259,
     CHTML = 260,
     AHEAD = 261,
     CHEAD = 262,
     METACHARSET = 263,
     META = 264,
     NAME = 265,
     CONTENT = 266,
     ATITLE = 267,
     CTITLE = 268,
     ABODY = 269,
     CBODY = 270,
     ASECTION = 271,
     CSECTION = 272,
     ADIV = 273,
     CDIV = 274,
     APARRAFO = 275,
     CPARRAFO = 276,
     AHEADER = 277,
     CHEADER = 278,
     BR = 279,
     HR = 280,
     ASTRONG = 281,
     CSTRONG = 282,
     AEM = 283,
     CEM = 284,
     AMARK = 285,
     CMARK = 286,
     AOL = 287,
     COL = 288,
     AUL = 289,
     CUL = 290,
     ALI = 291,
     CLI = 292,
     ATABLE = 293,
     CTABLE = 294,
     ATHEAD = 295,
     CTHEAD = 296,
     ATBODY = 297,
     CTBODY = 298,
     AFOOT = 299,
     CFOOT = 300,
     ATR = 301,
     CTR = 302,
     ATD = 303,
     CTD = 304,
     ATH = 305,
     CTH = 306,
     AA = 307,
     CA = 308,
     IMG = 309,
     CBRACKET = 310,
     CLASS = 311,
     ID = 312,
     TYPE = 313,
     VALUE = 314,
     HREF = 315,
     TARGET = 316,
     ALT = 317,
     WIDTH = 318,
     HEIGHT = 319,
     SRC = 320,
     BORDER = 321,
     ACAPTION = 322,
     CCAPTION = 323,
     CCOM = 324,
     URL = 325,
     TEXTO = 326,
     NUM = 327,
     ESP = 328
   };
#endif
/* Tokens.  */
#define DOCTYPE 258
#define AHTML 259
#define CHTML 260
#define AHEAD 261
#define CHEAD 262
#define METACHARSET 263
#define META 264
#define NAME 265
#define CONTENT 266
#define ATITLE 267
#define CTITLE 268
#define ABODY 269
#define CBODY 270
#define ASECTION 271
#define CSECTION 272
#define ADIV 273
#define CDIV 274
#define APARRAFO 275
#define CPARRAFO 276
#define AHEADER 277
#define CHEADER 278
#define BR 279
#define HR 280
#define ASTRONG 281
#define CSTRONG 282
#define AEM 283
#define CEM 284
#define AMARK 285
#define CMARK 286
#define AOL 287
#define COL 288
#define AUL 289
#define CUL 290
#define ALI 291
#define CLI 292
#define ATABLE 293
#define CTABLE 294
#define ATHEAD 295
#define CTHEAD 296
#define ATBODY 297
#define CTBODY 298
#define AFOOT 299
#define CFOOT 300
#define ATR 301
#define CTR 302
#define ATD 303
#define CTD 304
#define ATH 305
#define CTH 306
#define AA 307
#define CA 308
#define IMG 309
#define CBRACKET 310
#define CLASS 311
#define ID 312
#define TYPE 313
#define VALUE 314
#define HREF 315
#define TARGET 316
#define ALT 317
#define WIDTH 318
#define HEIGHT 319
#define SRC 320
#define BORDER 321
#define ACAPTION 322
#define CCAPTION 323
#define CCOM 324
#define URL 325
#define TEXTO 326
#define NUM 327
#define ESP 328




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "Parser-G22.2.y"




/* Line 214 of yacc.c  */
#line 270 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 282 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  459

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    19,    27,    34,    41,    47,
      52,    57,    61,    71,    78,    85,    94,   100,   106,   109,
     111,   114,   117,   119,   121,   125,   128,   130,   132,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   172,   175,   178,
     181,   184,   187,   190,   193,   196,   199,   202,   205,   208,
     211,   214,   217,   220,   226,   231,   237,   242,   248,   253,
     259,   264,   268,   271,   275,   278,   284,   289,   295,   300,
     306,   311,   317,   322,   328,   333,   340,   348,   355,   361,
     367,   373,   380,   386,   391,   396,   400,   404,   408,   412,
     416,   420,   423,   426,   429,   432,   435,   438,   440,   442,
     444,   449,   454,   459,   464,   469,   474,   478,   482,   486,
     490,   494,   498,   501,   504,   507,   512,   517,   522,   527,
     533,   538,   544,   549,   553,   559,   565,   570,   575,   580,
     584,   590,   596,   601,   606,   610,   614,   623,   631,   639,
     647,   654,   661,   670,   678,   686,   694,   701,   708,   716,
     723,   730,   737,   743,   749,   757,   764,   771,   778,   784,
     790,   797,   803,   809,   814,   820,   825,   833,   841,   849,
     856,   863,   870,   877,   883,   890,   894,   898,   905,   912,
     919,   926,   933,   940,   947,   954,   961,   968,   975,   982,
     989,   995,  1001,  1007,  1013,  1019,  1025,  1030,  1035,  1040,
    1045,  1050,  1055
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,     3,    76,    -1,     4,    77,    81,     5,
      -1,     6,     8,    78,    12,    79,    13,     7,    -1,     6,
      78,     8,    12,    79,    13,     7,    -1,     6,    78,     8,
      12,    13,     7,    -1,     6,     8,    12,    79,    13,     7,
      -1,     6,     8,    12,    13,     7,    -1,     6,     8,    78,
       7,    -1,     6,    78,     8,     7,    -1,     6,     8,     7,
      -1,     9,    10,    79,    69,    11,    79,    69,    55,    78,
      -1,     9,    10,    79,    69,    55,    78,    -1,     9,    11,
      79,    69,    55,    78,    -1,     9,    10,    79,    69,    11,
      79,    69,    55,    -1,     9,    10,    79,    69,    55,    -1,
       9,    11,    79,    69,    55,    -1,    71,    79,    -1,    71,
      -1,    71,    80,    -1,    72,    80,    -1,    71,    -1,    72,
      -1,    14,    83,    15,    -1,    56,    57,    -1,    56,    -1,
      57,    -1,    57,    56,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,   103,    -1,   104,    -1,   106,
      -1,    71,    -1,    72,    -1,    70,    -1,    69,    -1,    84,
      83,    -1,    85,    83,    -1,    86,    83,    -1,    87,    83,
      -1,    88,    83,    -1,    89,    83,    -1,    90,    83,    -1,
      91,    83,    -1,    92,    83,    -1,    93,    83,    -1,   103,
      83,    -1,   104,    83,    -1,   106,    83,    -1,    71,    83,
      -1,    72,    83,    -1,    70,    83,    -1,    69,    83,    -1,
      16,    82,    55,    83,    17,    -1,    16,    55,    83,    17,
      -1,    18,    82,    55,    83,    19,    -1,    18,    55,    83,
      19,    -1,    20,    82,    55,    83,    21,    -1,    20,    55,
      83,    21,    -1,    22,    82,    55,    80,    23,    -1,    22,
      55,    80,    23,    -1,    24,    82,    55,    -1,    24,    55,
      -1,    25,    82,    55,    -1,    25,    55,    -1,    26,    82,
      55,    83,    27,    -1,    26,    55,    83,    27,    -1,    30,
      82,    55,    83,    31,    -1,    30,    55,    83,    31,    -1,
      28,    82,    55,    83,    29,    -1,    28,    55,    83,    29,
      -1,    32,    58,    55,    94,    33,    -1,    32,    55,    94,
      33,    -1,    34,    58,    55,    94,    35,    -1,    34,    55,
      94,    35,    -1,    36,    59,    55,    83,    37,    94,    -1,
      36,    59,    55,    83,    94,    37,    94,    -1,    36,    59,
      55,    94,    37,    94,    -1,    36,    59,    55,    83,    37,
      -1,    36,    59,    55,    94,    37,    -1,    36,    55,    83,
      37,    94,    -1,    36,    55,    83,    94,    37,    94,    -1,
      36,    55,    94,    37,    94,    -1,    36,    55,    83,    37,
      -1,    36,    55,    94,    37,    -1,    96,    97,    98,    -1,
      96,    98,    97,    -1,    97,    96,    98,    -1,    97,    98,
      96,    -1,    98,    97,    96,    -1,    98,    96,    97,    -1,
      96,    97,    -1,    96,    98,    -1,    97,    96,    -1,    97,
      98,    -1,    98,    97,    -1,    98,    96,    -1,    96,    -1,
      97,    -1,    98,    -1,    96,    97,    98,    99,    -1,    96,
      98,    97,    99,    -1,    97,    96,    98,    99,    -1,    97,
      98,    96,    99,    -1,    98,    97,    96,    99,    -1,    98,
      96,    97,    99,    -1,    96,    97,    99,    -1,    96,    98,
      99,    -1,    97,    96,    99,    -1,    97,    98,    99,    -1,
      98,    97,    99,    -1,    98,    96,    99,    -1,    96,    99,
      -1,    97,    99,    -1,    98,    99,    -1,    40,    55,    99,
      41,    -1,    42,    55,    99,    43,    -1,    44,    55,    99,
      45,    -1,    46,    55,   100,    47,    -1,    46,    55,   100,
      47,    99,    -1,    46,    55,   101,    47,    -1,    46,    55,
     101,    47,    99,    -1,    46,    55,    47,    99,    -1,    46,
      55,    47,    -1,    48,    55,    83,    49,   100,    -1,    48,
      55,    83,    49,   101,    -1,    48,    55,    83,    49,    -1,
      48,    55,    49,   100,    -1,    48,    55,    49,   101,    -1,
      48,    55,    49,    -1,    50,    55,    83,    51,   100,    -1,
      50,    55,    83,    51,   101,    -1,    50,    55,    83,    51,
      -1,    50,    55,    51,   101,    -1,    50,    55,    51,    -1,
      67,    79,    68,    -1,    38,    82,    66,    55,   102,    99,
      95,    39,    -1,    38,    82,    66,    55,    99,    95,    39,
      -1,    38,    82,    66,    55,   102,    95,    39,    -1,    38,
      82,    66,    55,   102,    99,    39,    -1,    38,    82,    66,
      55,    99,    39,    -1,    38,    82,    66,    55,    95,    39,
      -1,    38,    66,    82,    55,   102,    99,    95,    39,    -1,
      38,    66,    82,    55,    99,    95,    39,    -1,    38,    66,
      82,    55,   102,    95,    39,    -1,    38,    66,    82,    55,
     102,    99,    39,    -1,    38,    66,    82,    55,    99,    39,
      -1,    38,    66,    82,    55,    95,    39,    -1,    38,    82,
      55,   102,    99,    95,    39,    -1,    38,    82,    55,    99,
      95,    39,    -1,    38,    82,    55,   102,    95,    39,    -1,
      38,    82,    55,   102,    99,    39,    -1,    38,    82,    55,
      95,    39,    -1,    38,    82,    55,    99,    39,    -1,    38,
      66,    55,   102,    99,    95,    39,    -1,    38,    66,    55,
      99,    95,    39,    -1,    38,    66,    55,   102,    95,    39,
      -1,    38,    66,    55,   102,    99,    39,    -1,    38,    66,
      55,    99,    39,    -1,    38,    66,    55,    95,    39,    -1,
      38,    55,   102,    99,    95,    39,    -1,    38,    55,   102,
      95,    39,    -1,    38,    55,   102,    99,    39,    -1,    38,
      55,    95,    39,    -1,    38,    55,    99,    95,    39,    -1,
      38,    55,    99,    39,    -1,    52,    82,    60,    61,    55,
      83,    53,    -1,    52,    60,    82,    61,    55,    83,    53,
      -1,    52,    60,    61,    82,    55,    83,    53,    -1,    52,
      82,    60,    55,    83,    53,    -1,    52,    60,    82,    55,
      83,    53,    -1,    52,    60,    61,    55,    83,    53,    -1,
      52,    61,    60,    55,    83,    53,    -1,    52,    60,    55,
      83,    53,    -1,    63,    72,    69,    64,    72,    69,    -1,
      63,    72,    69,    -1,    64,    72,    69,    -1,    64,    72,
      69,    63,    72,    69,    -1,    54,    65,    82,    62,   105,
      55,    -1,    54,    82,    65,    62,   105,    55,    -1,    54,
      82,    62,    65,   105,    55,    -1,    54,    82,    62,   105,
      65,    55,    -1,    54,    65,   105,    82,    62,    55,    -1,
      54,   105,    65,    82,    62,    55,    -1,    54,   105,    82,
      65,    62,    55,    -1,    54,   105,    82,    62,    65,    55,
      -1,    54,    65,   105,    62,    82,    55,    -1,    54,   105,
      65,    62,    82,    55,    -1,    54,   105,    62,    65,    82,
      55,    -1,    54,   105,    62,    82,    65,    55,    -1,    54,
      65,    62,   105,    55,    -1,    54,    62,    65,   105,    55,
      -1,    54,    62,   105,    65,    55,    -1,    54,    65,   105,
      62,    55,    -1,    54,   105,    65,    62,    55,    -1,    54,
     105,    62,    65,    55,    -1,    54,    65,    62,    55,    -1,
      54,    62,    65,    55,    -1,    54,    65,   105,    55,    -1,
      54,   105,    65,    55,    -1,    54,    65,    82,    55,    -1,
      54,    82,    65,    55,    -1,    54,    65,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    63,    66,    67,    68,    69,    70,    71,
      72,    73,    76,    77,    78,    79,    80,    81,    83,    83,
      86,    86,    86,    86,    89,    92,    93,    94,    95,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,   101,   101,   104,   104,   107,   107,   110,
     110,   113,   113,   113,   113,   116,   116,   119,   119,   122,
     122,   125,   125,   128,   128,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   175,   178,   181,   184,   184,
     184,   184,   184,   184,   187,   187,   187,   187,   187,   187,
     190,   190,   190,   190,   190,   193,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   228,   229,   230,   231,
     232,   233,   234,   235,   238,   239,   240,   241,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "AHTML", "CHTML", "AHEAD",
  "CHEAD", "METACHARSET", "META", "NAME", "CONTENT", "ATITLE", "CTITLE",
  "ABODY", "CBODY", "ASECTION", "CSECTION", "ADIV", "CDIV", "APARRAFO",
  "CPARRAFO", "AHEADER", "CHEADER", "BR", "HR", "ASTRONG", "CSTRONG",
  "AEM", "CEM", "AMARK", "CMARK", "AOL", "COL", "AUL", "CUL", "ALI", "CLI",
  "ATABLE", "CTABLE", "ATHEAD", "CTHEAD", "ATBODY", "CTBODY", "AFOOT",
  "CFOOT", "ATR", "CTR", "ATD", "CTD", "ATH", "CTH", "AA", "CA", "IMG",
  "CBRACKET", "CLASS", "ID", "TYPE", "VALUE", "HREF", "TARGET", "ALT",
  "WIDTH", "HEIGHT", "SRC", "BORDER", "ACAPTION", "CCAPTION", "CCOM",
  "URL", "TEXTO", "NUM", "ESP", "$accept", "inicio", "html5", "enc",
  "meta", "text", "tyn", "cuerpo", "atrglobal", "etiqueta", "sec", "div",
  "par", "h", "salto", "strong", "mark", "em", "ol", "ul", "li",
  "cuerpotabla", "th", "tb", "tf", "filas", "td", "celdas", "caption",
  "tabla", "eta", "atrwh", "imagen", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    97,    98,    99,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     7,     7,     6,     6,     5,     4,
       4,     3,     9,     6,     6,     8,     5,     5,     2,     1,
       2,     2,     1,     1,     3,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,     4,     5,     4,     5,     4,     5,
       4,     3,     2,     3,     2,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     6,     7,     6,     5,     5,
       5,     6,     5,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     4,     4,     4,     4,     5,
       4,     5,     4,     3,     5,     5,     4,     4,     4,     3,
       5,     5,     4,     4,     3,     3,     8,     7,     7,     7,
       6,     6,     8,     7,     7,     7,     6,     6,     7,     6,
       6,     6,     5,     5,     7,     6,     6,     6,     5,     5,
       6,     5,     5,     4,     5,     4,     7,     7,     7,     6,
       6,     6,     6,     5,     6,     3,     3,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       5,     5,     5,     5,     5,     5,     4,     4,     4,     4,
       4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     1,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    44,    42,    43,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     3,     0,    19,     0,     9,     0,     0,     0,    10,
       0,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,    72,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    61,    59,
      60,    24,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     8,    18,     0,     0,     0,
       0,     0,     0,     0,    25,    28,     0,     0,     0,     0,
       0,    22,    23,     0,     0,    71,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,    16,    17,     6,     0,    64,     0,
      66,     0,    68,     0,    20,    21,    70,     0,    76,     0,
      80,     0,    78,     0,     0,     0,    82,     0,    84,     0,
       0,     0,     0,     0,     0,   173,   101,   102,   122,   103,
     104,   123,   106,   105,   124,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,     0,     0,   185,   186,
     206,     0,   210,     0,   208,     0,     0,     0,     0,   211,
       0,     0,     0,   209,     0,     0,     0,     0,     4,     0,
      13,    14,     5,    63,    65,    67,    69,    75,    79,    77,
       0,     0,     0,    81,    83,     0,     0,     0,   133,     0,
       0,     0,     0,   145,    95,   116,    96,   117,    97,   118,
      98,   119,   100,   121,    99,   120,   174,   171,   172,     0,
     169,   168,     0,     0,     0,     0,     0,     0,   162,   163,
       0,     0,     0,     0,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,   200,     0,
     203,     0,     0,     0,     0,     0,   205,     0,     0,   204,
       0,     0,     0,     0,     0,    93,     0,    94,     0,     0,
     125,   126,   127,   132,     0,     0,   128,   130,   110,   111,
     112,   113,   115,   114,   170,   165,   166,   167,     0,   157,
     156,     0,     0,     0,   159,   160,   161,     0,   151,   150,
       0,     0,     0,   181,     0,   180,     0,   182,   179,     0,
       0,     0,   188,   196,   192,   190,   191,   189,   198,   199,
     197,   193,   195,   194,    15,    90,     0,    92,    88,     0,
      89,   139,     0,   144,     0,   129,   131,   164,   153,   154,
     155,     0,   158,   147,   148,   149,     0,   178,   177,   176,
     184,   187,    12,    91,    85,     0,    87,   137,   138,   136,
     143,   142,   152,   146,    86,   134,   135,   140,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     7,    10,    54,   133,    12,    64,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     144,   153,   154,   155,   156,   157,   291,   292,   158,    48,
      49,    96,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -415
static const yytype_int16 yypact[] =
{
       9,    70,    88,    92,  -415,  -415,   243,    96,    99,   331,
     118,   492,   159,  -415,   -10,    19,   114,   114,    36,   315,
     318,   321,   324,   327,   354,   357,   360,   388,    28,   161,
      34,   193,   104,   492,   492,   492,   492,   160,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,  -415,   197,   114,   196,  -415,   114,   163,   169,  -415,
      -7,   492,   186,   203,   214,   492,   230,   492,   235,   290,
     242,  -415,   244,  -415,   247,   492,   249,   492,   254,   492,
     258,   257,   264,   257,   266,    79,   391,   -21,   117,   265,
     267,   283,   260,   279,   171,   158,   130,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,   322,   341,    -6,
     282,   352,   372,   374,  -415,  -415,   492,   368,   492,   376,
     492,   290,   290,   366,   290,  -415,  -415,   378,   492,   364,
     492,   387,   492,     3,   390,   257,   385,   257,   344,   346,
     348,   373,   114,   393,   155,    84,   110,   202,    74,    79,
     375,    79,   379,   492,   415,   129,   381,   153,   -17,   342,
     369,   380,  -415,   107,   -11,   150,   411,    -2,   146,   174,
     209,  -415,   445,   114,   447,   447,  -415,   455,  -415,   437,
    -415,   449,  -415,   443,  -415,  -415,  -415,   465,  -415,   439,
    -415,   463,  -415,   462,   111,   440,  -415,   461,  -415,   466,
     450,   450,   450,   236,   429,  -415,   219,   102,  -415,   219,
     148,  -415,   102,   148,  -415,  -415,   459,   464,   216,   470,
     222,    74,    79,   472,   228,    74,    79,   460,   492,   468,
     492,   473,   492,   492,   474,  -415,   476,   477,   438,   452,
    -415,   478,  -415,   303,  -415,   422,   457,   303,   456,  -415,
     303,   425,   469,  -415,   428,   475,   471,   479,  -415,   458,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
     389,   488,   111,  -415,  -415,   494,   495,   497,   450,   484,
     485,   496,   498,  -415,   450,  -415,   450,  -415,   450,  -415,
     450,  -415,   450,  -415,   450,  -415,  -415,  -415,  -415,   508,
    -415,  -415,   509,   510,   238,   511,   256,    74,  -415,  -415,
     512,   513,   272,   514,   278,    74,  -415,   501,   492,   502,
     492,   503,   504,   492,  -415,  -415,   486,   487,  -415,   505,
    -415,   515,   516,   517,   518,   519,  -415,   520,   521,  -415,
     522,   523,   524,   525,   526,   257,   528,   257,   454,   529,
    -415,  -415,  -415,  -415,   370,   435,   450,   450,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   530,  -415,
    -415,   543,   544,   284,  -415,  -415,  -415,   545,  -415,  -415,
     546,   547,   291,  -415,   534,  -415,   535,  -415,  -415,   536,
     499,   527,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,   447,  -415,   257,  -415,   257,   553,
     257,   231,   542,   548,   541,  -415,  -415,  -415,  -415,  -415,
    -415,   554,  -415,  -415,  -415,  -415,   555,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,   257,  -415,  -415,  -415,   231,
    -415,   231,  -415,  -415,  -415,  -415,  -415,  -415,  -415
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -415,  -415,  -415,  -415,    -8,    39,   226,  -415,    46,   -25,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
     -82,   -77,  -127,  -115,  -122,   133,  -414,  -364,  -157,  -415,
    -415,   -64,  -415
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      15,   146,   231,    52,   235,   183,   121,   447,    97,    98,
      99,   100,     1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    55,   169,   219,   222,
     175,    56,   217,   220,   161,   455,   123,   457,   245,   216,
     127,   223,   129,    59,   252,   162,    92,    93,    60,   184,
     137,   253,   139,   259,   141,    57,    58,   448,   204,   450,
     260,    53,   205,   207,    53,   209,    66,    68,    70,    72,
      74,    76,    78,    80,     3,   317,    87,    90,    95,   325,
     226,   227,   229,    81,   233,   456,    82,   458,     5,    85,
      62,    63,   116,   300,   294,   118,   304,   298,     6,   122,
      86,   189,   296,   191,   246,   193,    13,   302,     9,   251,
      11,    14,   258,   199,   148,   201,   149,   203,   150,   148,
     151,   149,   281,   150,   148,   151,    18,    19,   150,    20,
     151,    21,   160,    22,   165,    23,    24,    25,   237,    26,
     174,    27,   180,    28,   149,    29,   152,   143,   151,    30,
     148,   309,   149,   312,   313,   315,   151,   320,   321,   323,
      62,    63,   250,    31,    51,    32,    91,    92,    93,    94,
      92,    93,   163,    62,    63,   101,   270,   271,   164,   280,
      33,    34,    35,    36,   240,    53,    62,    63,   148,   339,
     241,   214,   178,   343,   151,   179,   345,   149,   356,   150,
     359,   151,    62,    63,   115,   254,    62,    63,   243,   117,
     239,   261,   255,   327,   244,   329,    83,   331,   332,    84,
     176,   256,   269,   177,   262,   265,   172,    62,    63,   263,
      62,    63,   119,   173,    92,    93,   264,   378,   120,   381,
     382,   225,   148,   124,   149,   387,   150,   390,   391,    62,
      63,     8,     9,    88,    89,   308,   148,   358,   149,   125,
     150,   311,   148,   150,   149,   151,   150,   319,   148,   126,
     149,   266,   150,   415,   267,   417,   419,   377,   148,   289,
     149,   290,   150,   288,   289,   128,   290,   218,   221,   224,
     130,   228,   230,   143,   234,   380,   148,   134,   149,   135,
     150,   341,   136,   394,   138,   396,   431,   347,   399,   140,
     350,   386,   148,   142,   149,   436,   150,   389,   148,   145,
     149,   147,   150,   430,   148,   166,   149,   167,   150,   181,
     435,   148,   170,   149,   443,   150,   444,   185,   446,   422,
     424,    16,    17,   285,   286,   287,    92,    93,   168,   295,
     297,   171,   299,   301,   182,   303,   305,   194,   195,   186,
     197,   131,   132,   454,   314,   316,    92,    93,   322,   324,
      61,    62,    63,    65,    62,    63,    67,    62,    63,    69,
      62,    63,    71,    62,    63,   187,    19,   190,    20,   196,
      21,   188,    22,   200,    23,    24,    25,   192,    26,   210,
      27,   211,    28,   212,    29,   198,   442,   247,    30,    73,
      62,    63,    75,    62,    63,    77,    62,    63,   202,   421,
     208,   363,    31,   206,    32,   143,   355,   368,   213,   369,
     232,   370,   215,   371,   236,   372,   242,   373,   248,    33,
      34,    35,    36,    79,    62,    63,   159,    62,    63,   249,
     383,    19,   268,    20,   273,    21,     9,    22,   392,    23,
      24,    25,   272,    26,   275,    27,   277,    28,   274,    29,
     238,    62,    63,    30,    92,    93,   257,   340,    62,    63,
     346,    62,    63,   349,    62,    63,   423,    31,   276,    32,
     143,   418,   278,   279,   283,   282,   151,   293,   306,   425,
     426,   284,   336,   307,    33,    34,    35,    36,    19,   310,
      20,   318,    21,   326,    22,   337,    23,    24,    25,   342,
      26,   344,    27,   328,    28,   357,    29,   354,   330,   333,
      30,   334,   335,   338,   348,   360,   352,   351,   361,   364,
     365,   353,   362,   366,    31,   367,    32,   374,   375,   376,
     379,   384,   385,   388,   393,   395,   397,   398,   400,   401,
     402,    33,    34,    35,    36,   416,   420,     0,   440,   427,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   428,   429,   432,   433,   434,   437,   438,   439,
     445,   449,   451,   452,   453,     0,   441,     0,   290
};

static const yytype_int16 yycheck[] =
{
       8,    83,   159,    13,   161,    11,    13,   421,    33,    34,
      35,    36,     3,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     7,    91,   155,   156,
      94,    12,   154,   155,    55,   449,    61,   451,    55,   154,
      65,   156,    67,     7,    55,    66,    63,    64,    12,    55,
      75,    62,    77,    55,    79,    16,    17,   421,    55,   423,
      62,    71,    59,   145,    71,   147,    20,    21,    22,    23,
      24,    25,    26,    27,     4,   232,    30,    31,    32,   236,
     157,   158,   159,    55,   161,   449,    58,   451,     0,    55,
      56,    57,    53,   220,   216,    56,   223,   219,     6,    60,
      66,   126,   217,   128,   168,   130,     7,   222,     9,   173,
      14,    12,   176,   138,    40,   140,    42,   142,    44,    40,
      46,    42,   204,    44,    40,    46,     8,    16,    44,    18,
      46,    20,    86,    22,    88,    24,    25,    26,   163,    28,
      94,    30,    96,    32,    42,    34,    67,    36,    46,    38,
      40,   228,    42,   230,   231,   232,    46,   234,   235,   236,
      56,    57,    55,    52,     5,    54,    62,    63,    64,    65,
      63,    64,    55,    56,    57,    15,   184,   185,    61,   204,
      69,    70,    71,    72,    55,    71,    56,    57,    40,   253,
      61,   152,    62,   257,    46,    65,   260,    42,   280,    44,
     282,    46,    56,    57,     7,    55,    56,    57,    55,    13,
     164,    65,    62,   238,    61,   240,    55,   242,   243,    58,
      62,   175,   183,    65,   178,   179,    55,    56,    57,    55,
      56,    57,    69,    62,    63,    64,    62,   314,    69,   316,
     317,    39,    40,    57,    42,   322,    44,   324,   325,    56,
      57,     8,     9,    60,    61,    39,    40,   282,    42,    56,
      44,    39,    40,    44,    42,    46,    44,    39,    40,    55,
      42,    62,    44,   355,    65,   357,   358,    39,    40,    48,
      42,    50,    44,    47,    48,    55,    50,   154,   155,   156,
      55,   158,   159,    36,   161,    39,    40,    55,    42,    55,
      44,   255,    55,   328,    55,   330,   383,   261,   333,    55,
     264,    39,    40,    55,    42,   392,    44,    39,    40,    55,
      42,    55,    44,    39,    40,    60,    42,    60,    44,     7,
      39,    40,    72,    42,   416,    44,   418,    55,   420,   364,
     365,    10,    11,   210,   211,   212,    63,    64,    65,   216,
     217,    72,   219,   220,    13,   222,   223,   131,   132,     7,
     134,    71,    72,   445,   231,   232,    63,    64,   235,   236,
      55,    56,    57,    55,    56,    57,    55,    56,    57,    55,
      56,    57,    55,    56,    57,    13,    16,    19,    18,    23,
      20,    17,    22,    29,    24,    25,    26,    21,    28,    55,
      30,    55,    32,    55,    34,    27,   414,    65,    38,    55,
      56,    57,    55,    56,    57,    55,    56,    57,    31,    49,
      35,   288,    52,    33,    54,    36,    37,   294,    55,   296,
      55,   298,    39,   300,    55,   302,    55,   304,    69,    69,
      70,    71,    72,    55,    56,    57,    55,    56,    57,    69,
     317,    16,     7,    18,    17,    20,     9,    22,   325,    24,
      25,    26,     7,    28,    21,    30,    27,    32,    19,    34,
      55,    56,    57,    38,    63,    64,    65,    55,    56,    57,
      55,    56,    57,    55,    56,    57,    51,    52,    23,    54,
      36,    37,    29,    31,    33,    55,    46,    68,    39,   366,
     367,    35,    64,    39,    69,    70,    71,    72,    16,    39,
      18,    39,    20,    53,    22,    63,    24,    25,    26,    62,
      28,    65,    30,    55,    32,    37,    34,    69,    55,    55,
      38,    55,    55,    55,    65,    41,    65,    62,    43,    55,
      55,    62,    45,    47,    52,    47,    54,    39,    39,    39,
      39,    39,    39,    39,    53,    53,    53,    53,    72,    72,
      55,    69,    70,    71,    72,    37,    37,    -1,    69,    39,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    39,    39,    39,    39,    39,    53,    53,    53,
      37,    49,    51,    39,    39,    -1,    69,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    75,     4,    76,     0,     6,    77,     8,     9,
      78,    14,    81,     7,    12,    78,    10,    11,     8,    16,
      18,    20,    22,    24,    25,    26,    28,    30,    32,    34,
      38,    52,    54,    69,    70,    71,    72,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   103,   104,
     106,     5,    13,    71,    79,     7,    12,    79,    79,     7,
      12,    55,    56,    57,    82,    55,    82,    55,    82,    55,
      82,    55,    82,    55,    82,    55,    82,    55,    82,    55,
      82,    55,    58,    55,    58,    55,    66,    82,    60,    61,
      82,    62,    63,    64,    65,    82,   105,    83,    83,    83,
      83,    15,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,     7,    79,    13,    79,    69,
      69,    13,    79,    83,    57,    56,    55,    83,    55,    83,
      55,    71,    72,    80,    55,    55,    55,    83,    55,    83,
      55,    83,    55,    36,    94,    55,    94,    55,    40,    42,
      44,    46,    67,    95,    96,    97,    98,    99,   102,    55,
      82,    55,    66,    55,    61,    82,    60,    60,    65,   105,
      72,    72,    55,    62,    82,   105,    62,    65,    62,    65,
      82,     7,    13,    11,    55,    55,     7,    13,    17,    83,
      19,    83,    21,    83,    80,    80,    23,    80,    27,    83,
      29,    83,    31,    83,    55,    59,    33,    94,    35,    94,
      55,    55,    55,    55,    79,    39,    97,    98,    99,    96,
      98,    99,    96,    97,    99,    39,    95,    95,    99,    95,
      99,   102,    55,    95,    99,   102,    55,    83,    55,    82,
      55,    61,    55,    55,    61,    55,   105,    65,    69,    69,
      55,   105,    55,    62,    55,    62,    82,    65,   105,    55,
      62,    65,    82,    55,    62,    82,    62,    65,     7,    79,
      78,    78,     7,    17,    19,    21,    23,    27,    29,    31,
      83,    94,    55,    33,    35,    99,    99,    99,    47,    48,
      50,   100,   101,    68,    98,    99,    97,    99,    98,    99,
      96,    99,    97,    99,    96,    99,    39,    39,    39,    95,
      39,    39,    95,    95,    99,    95,    99,   102,    39,    39,
      95,    95,    99,    95,    99,   102,    53,    83,    55,    83,
      55,    83,    83,    55,    55,    55,    64,    63,    55,   105,
      55,    82,    62,   105,    65,   105,    55,    82,    65,    55,
      82,    62,    65,    62,    69,    37,    94,    37,    83,    94,
      41,    43,    45,    99,    55,    55,    47,    47,    99,    99,
      99,    99,    99,    99,    39,    39,    39,    39,    95,    39,
      39,    95,    95,    99,    39,    39,    39,    95,    39,    39,
      95,    95,    99,    53,    83,    53,    83,    53,    53,    83,
      72,    72,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    94,    37,    94,    37,    94,
      37,    49,    83,    51,    83,    99,    99,    39,    39,    39,
      39,    95,    39,    39,    39,    39,    95,    53,    53,    53,
      69,    69,    78,    94,    94,    37,    94,   100,   101,    49,
     101,    51,    39,    39,    94,   100,   101,   100,   101
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
      

/* Line 1464 of yacc.c  */
#line 1942 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1684 of yacc.c  */
#line 273 "Parser-G22.2.y"


yyerror(char * msg)
{
	printf("%s\n",msg);
}
int main(int argc, char *argv[])
{
	printf("ANALISIS SINTACTICO\n");
	if (argc==2)
	{
		yyin=fopen(argv[1],"rt");
		if(yyin==NULL)
			printf("\nNo se puede leer el archivo");
			if( yyparse() == 0)
	{
		printf("\nCodigo CORRECTO\n");
		printf("ingrese CTRL+ C para finalizar\n");
	} else
		{
			printf("Error en la linea: %d\n",linea); 
			fclose(yyin); 
			return 0; 
		}
		fclose(yyin);
		getchar();
	} else 
		{	
			printf("Bienvenido al MODO INTERACTIVO\n");
			printf("Ingrese su codigo html\n");
			printf("Si ha finalizado su codigo y no se detecto error,\n");
			printf("ingrese ENTER y CTRL+ C para finalizar\n");
			printf("En caso de detectarse error,\n");
			printf("ingrese CTRL+ C para finalizar\n");
			yyin = stdin;
			yyparse ();
		}
	if( yyparse() == 0)
	{
		printf("\nCodigo CORRECTO\n");
	} else
		{
			printf("Error en la linea: %d\n",linea); 
		}
}




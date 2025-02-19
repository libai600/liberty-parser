/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         syntax_parser_parse
#define yylex           syntax_parser_lex
#define yyerror         syntax_parser_error
#define yydebug         syntax_parser_debug
#define yynerrs         syntax_parser_nerrs
#define yylval          syntax_parser_lval
#define yychar          syntax_parser_char

/* First part of user prologue.  */
#line 3 "syntax_parser.y"

/******************************************************************************
    Copyright (c) 1996-2005 Synopsys, Inc.    ALL RIGHTS RESERVED

  The contents of this file are subject to the restrictions and limitations
  set forth in the SYNOPSYS Open Source License Version 1.0  (the "License"); 
  you may not use this file except in compliance with such restrictions 
  and limitations. You may obtain instructions on how to receive a copy of 
  the License at

  http://www.synopsys.com/partners/tapin/tapinprogram.html. 

  Software distributed by Original Contributor under the License is 
  distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either 
  expressed or implied. See the License for the specific language governing 
  rights and limitations under the License.

******************************************************************************/
#include <stdio.h>
#include "syntax.h"
#ifdef DMALLOC
#include <dmalloc.h>
#endif
#include "mymalloc.h"
	
static libsynt_group_info *gs[100];
static int gsindex = 0;

 liberty_hash_table *libsynt_groups;
 liberty_hash_table *libsynt_allgroups;
 liberty_hash_table *libsynt_attrs;

 libsynt_technology libsynt_techs[20];
 int libsynt_tech_count = 0;
 
void push_group(libsynt_head *h);
void pop_group(void);

extern int synt_lineno;

libsynt_attribute_info *make_complex(libsynt_head *h);
 
libsynt_attribute_info *make_simple(char *name, libsynt_attr_type type, void *constraint_ptr);
 

 static char *enumlist[100]; /* temps used in the process of building structs */
 static int enumcount;
 

#line 128 "syntax_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "syntax_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMA = 3,                      /* COMMA  */
  YYSYMBOL_SEMI = 4,                       /* SEMI  */
  YYSYMBOL_LPAR = 5,                       /* LPAR  */
  YYSYMBOL_RPAR = 6,                       /* RPAR  */
  YYSYMBOL_LCURLY = 7,                     /* LCURLY  */
  YYSYMBOL_RCURLY = 8,                     /* RCURLY  */
  YYSYMBOL_COLON = 9,                      /* COLON  */
  YYSYMBOL_LBRACK = 10,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 11,                    /* RBRACK  */
  YYSYMBOL_KW_FLOAT = 12,                  /* KW_FLOAT  */
  YYSYMBOL_KW_STRING = 13,                 /* KW_STRING  */
  YYSYMBOL_KW_ENUM = 14,                   /* KW_ENUM  */
  YYSYMBOL_KW_UNK_ARGS = 15,               /* KW_UNK_ARGS  */
  YYSYMBOL_KW_INTEGER = 16,                /* KW_INTEGER  */
  YYSYMBOL_KW_VIRTATTR = 17,               /* KW_VIRTATTR  */
  YYSYMBOL_KW_SHORT = 18,                  /* KW_SHORT  */
  YYSYMBOL_KW_OR = 19,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 20,                    /* KW_AND  */
  YYSYMBOL_KW_BOOLEAN = 21,                /* KW_BOOLEAN  */
  YYSYMBOL_COLONEQ = 22,                   /* COLONEQ  */
  YYSYMBOL_KW_LIST = 23,                   /* KW_LIST  */
  YYSYMBOL_GREATERTHAN = 24,               /* GREATERTHAN  */
  YYSYMBOL_LESSTHAN = 25,                  /* LESSTHAN  */
  YYSYMBOL_DOTS = 26,                      /* DOTS  */
  YYSYMBOL_NUM = 27,                       /* NUM  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_IDENT = 29,                     /* IDENT  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_file = 31,                      /* file  */
  YYSYMBOL_group = 32,                     /* group  */
  YYSYMBOL_33_1 = 33,                      /* $@1  */
  YYSYMBOL_34_2 = 34,                      /* $@2  */
  YYSYMBOL_statements = 35,                /* statements  */
  YYSYMBOL_statement = 36,                 /* statement  */
  YYSYMBOL_simple_attr = 37,               /* simple_attr  */
  YYSYMBOL_string_enum = 38,               /* string_enum  */
  YYSYMBOL_s_or_i_list = 39,               /* s_or_i_list  */
  YYSYMBOL_float_constraint = 40,          /* float_constraint  */
  YYSYMBOL_int_constraint = 41,            /* int_constraint  */
  YYSYMBOL_complex_attr = 42,              /* complex_attr  */
  YYSYMBOL_head = 43,                      /* head  */
  YYSYMBOL_arg_or_namelist = 44,           /* arg_or_namelist  */
  YYSYMBOL_namelist = 45,                  /* namelist  */
  YYSYMBOL_arglist = 46,                   /* arglist  */
  YYSYMBOL_s_or_i = 47                     /* s_or_i  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    93,    93,    94,    94,   100,   101,   105,
     106,   107,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   123,   127,   128,   129,   133,   134,   135,
     137,   138,   139,   140,   142,   143,   144,   145,   149,   150,
     151,   153,   154,   155,   156,   158,   159,   160,   161,   167,
     170,   171,   175,   176,   179,   180,   181,   182,   183,   184,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   200,
     201
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COMMA", "SEMI",
  "LPAR", "RPAR", "LCURLY", "RCURLY", "COLON", "LBRACK", "RBRACK",
  "KW_FLOAT", "KW_STRING", "KW_ENUM", "KW_UNK_ARGS", "KW_INTEGER",
  "KW_VIRTATTR", "KW_SHORT", "KW_OR", "KW_AND", "KW_BOOLEAN", "COLONEQ",
  "KW_LIST", "GREATERTHAN", "LESSTHAN", "DOTS", "NUM", "STRING", "IDENT",
  "$accept", "file", "group", "$@1", "$@2", "statements", "statement",
  "simple_attr", "string_enum", "s_or_i_list", "float_constraint",
  "int_constraint", "complex_attr", "head", "arg_or_namelist", "namelist",
  "arglist", "s_or_i", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -10,     9,    26,    49,   -65,    76,    -6,    -6,   -65,    46,
      67,   -65,   -65,   -65,   -65,   -65,    37,    91,   -65,    95,
      93,    16,    92,    90,    73,   100,   -65,    13,   -65,    32,
     -65,    -7,   -65,   -65,   -65,    54,   -65,   -65,   101,    79,
     -65,   -65,   -65,   -65,    39,   -65,   -65,   -65,    77,   104,
      -2,    86,   103,     8,   105,    11,   106,   -65,    82,   -65,
      68,    38,   108,   -65,    14,   109,   110,   -65,    70,    41,
     111,   -65,   -65,   112,   -65,   107,    94,    96,   -65,   -65,
     -65,   -65,   -65,    56,   -65,   -65,   -65,    97,    98,   -65,
     -65,   -65,   -65,   -65,    15,   113,    -1,   -65,    18,   114,
     115,   102,   116,    14,   -65,   117,   118,   119,    44,    99,
      47,   -65,    50,   120,    53,   -65,   -65,   122,   -65,   -65,
     -65,   -65,   123,   -65,   -65,   124,   126,    57,    60,   -65,
     -65,   -65,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,    54,    54,     1,     3,
       0,    62,    60,    63,    61,    64,    55,     0,    52,    53,
       0,     0,     0,     0,     0,     0,    51,     0,    50,     0,
      11,     0,     7,     9,    10,     0,     6,    56,    58,     0,
      67,    65,    66,    68,     0,     4,     8,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,    16,
       0,     0,     0,    13,     0,     0,     0,    20,     0,     0,
       0,    12,    18,     0,    22,     0,     0,     0,    30,    69,
      70,    34,    15,     0,    24,    14,    17,     0,     0,    41,
      45,    21,    19,    57,     0,     0,     0,    23,     0,     0,
      27,     0,    28,     0,    25,    38,     0,    39,     0,     0,
       0,    26,     0,     0,     0,    31,    35,     0,    32,    36,
      42,    46,     0,    43,    47,    29,    40,     0,     0,    33,
      37,    44,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   130,   -65,   -65,   -65,   121,   -65,    65,   -65,
     -65,    78,   -65,   131,   125,   -65,   -65,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,    30,    21,    22,    31,    32,    33,    65,    83,
      62,    70,    34,    35,    17,    18,    19,    81
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    45,    59,    60,    10,    90,    11,    12,     1,    13,
      14,     1,    67,    68,     6,    72,    68,    15,   103,     2,
      61,   100,    29,    16,   105,    40,    41,    79,    80,    42,
      69,     7,   104,    69,     1,   101,    43,     7,   106,   111,
      24,    44,    79,    80,   116,    29,   119,    25,   121,     8,
     124,    50,    51,    52,    -5,    53,    54,    55,    47,    96,
      56,     9,    97,   130,   132,    78,    79,    80,    89,    79,
      80,   115,    79,    80,   118,    79,    80,   120,    79,    80,
     123,    79,    80,     9,   129,    79,    80,   131,    79,    80,
      63,    64,    76,    77,    87,    88,    23,    26,    27,    28,
      36,    37,    38,    39,    48,    49,    57,    58,    64,    71,
      74,    75,    82,    85,    86,    91,    92,    66,    93,   102,
     107,    94,     0,    95,    98,    99,   117,   109,   125,   126,
       4,     5,    20,    73,     0,     0,     0,   108,   110,   112,
       0,   114,     0,   113,     0,     0,   127,   122,   128,     0,
       0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      64,     8,     4,     5,    10,    69,    12,    13,    18,    15,
      16,    18,     4,     5,     5,     4,     5,    23,    19,    29,
      22,     6,    29,    29,     6,    12,    13,    28,    29,    16,
      22,     5,    96,    22,    18,    20,    23,     5,    20,   103,
       3,     9,    28,    29,   108,    29,   110,    10,   112,     0,
     114,    12,    13,    14,     8,    16,    17,    18,     4,     3,
      21,     7,     6,   127,   128,    27,    28,    29,    27,    28,
      29,    27,    28,    29,    27,    28,    29,    27,    28,    29,
      27,    28,    29,     7,    27,    28,    29,    27,    28,    29,
       4,     5,    24,    25,    24,    25,    29,     6,     3,     6,
       8,    11,    29,     3,     3,    26,    29,     3,     5,     4,
       4,    29,     4,     4,     4,     4,     4,    52,    11,     6,
       6,    27,    -1,    27,    27,    27,    27,    25,     6,     6,
       0,     0,     7,    55,    -1,    -1,    -1,    22,    22,    22,
      -1,    22,    -1,    25,    -1,    -1,    22,    27,    22,    -1,
      -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    29,    31,    32,    43,     5,     5,     0,     7,
      10,    12,    13,    15,    16,    23,    29,    44,    45,    46,
      44,    33,    34,    29,     3,    10,     6,     3,     6,    29,
      32,    35,    36,    37,    42,    43,     8,    11,    29,     3,
      12,    13,    16,    23,     9,     8,    36,     4,     3,    26,
      12,    13,    14,    16,    17,    18,    21,    29,     3,     4,
       5,    22,    40,     4,     5,    38,    38,     4,     5,    22,
      41,     4,     4,    41,     4,    29,    24,    25,    27,    28,
      29,    47,     4,    39,    47,     4,     4,    24,    25,    27,
      47,     4,     4,    11,    27,    27,     3,     6,    27,    27,
       6,    20,     6,    19,    47,     6,    20,     6,    22,    25,
      22,    47,    22,    25,    22,    27,    47,    27,    27,    47,
      27,    47,    27,    27,    47,     6,     6,    22,    22,    27,
      47,    27,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    33,    32,    34,    32,    35,    35,    36,
      36,    36,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    38,    39,    39,    39,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    42,
      43,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     5,     0,     4,     1,     2,     1,
       1,     1,     4,     4,     5,     5,     4,     5,     4,     5,
       4,     5,     4,     3,     1,     3,     4,     4,     4,     7,
       2,     6,     6,     9,     2,     6,     6,     9,     4,     4,
       7,     2,     6,     6,     9,     2,     6,     6,     9,     2,
       4,     4,     1,     1,     0,     1,     3,     7,     3,     5,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* file: group  */
#line 90 "syntax_parser.y"
                { libsynt_techs[libsynt_tech_count++].lib = (yyvsp[0].group); }
#line 1250 "syntax_parser.c"
    break;

  case 3: /* $@1: %empty  */
#line 93 "syntax_parser.y"
                      {push_group((yyvsp[-1].head));}
#line 1256 "syntax_parser.c"
    break;

  case 4: /* group: head LCURLY $@1 statements RCURLY  */
#line 93 "syntax_parser.y"
                                                          {(yyval.group) = gs[gsindex-1];pop_group();}
#line 1262 "syntax_parser.c"
    break;

  case 5: /* $@2: %empty  */
#line 94 "syntax_parser.y"
                      {push_group((yyvsp[-1].head));}
#line 1268 "syntax_parser.c"
    break;

  case 6: /* group: head LCURLY $@2 RCURLY  */
#line 94 "syntax_parser.y"
                                               {si2drObjectIdT toid;  (yyval.group) = gs[gsindex-1]; liberty_hash_lookup(libsynt_groups, gs[gsindex-1]->type, &toid);
                                                if( toid.v1 != (void*)NULL )(yyval.group)->ref =(libsynt_group_info*)toid.v1;
                                                else {printf("Error: line %d: Couldn't find group %s\n",(yyvsp[-3].head)->lineno,(yyvsp[-3].head)->ident); } pop_group();}
#line 1276 "syntax_parser.c"
    break;

  case 7: /* statements: statement  */
#line 100 "syntax_parser.y"
                            {}
#line 1282 "syntax_parser.c"
    break;

  case 8: /* statements: statements statement  */
#line 101 "syntax_parser.y"
                                               {}
#line 1288 "syntax_parser.c"
    break;

  case 9: /* statement: simple_attr  */
#line 105 "syntax_parser.y"
                              {si2drObjectIdT toid; toid.v1 = (void*)(yyvsp[0].attr);liberty_hash_enter_oid(gs[gsindex-1]->attr_hash, (yyvsp[0].attr)->name, toid);(yyvsp[0].attr)->next = gs[gsindex-1]->attr_list; gs[gsindex-1]->attr_list = (yyvsp[0].attr); }
#line 1294 "syntax_parser.c"
    break;

  case 10: /* statement: complex_attr  */
#line 106 "syntax_parser.y"
                                       {si2drObjectIdT toid;toid.v1 = (void*)(yyvsp[0].attr);liberty_hash_enter_oid(gs[gsindex-1]->attr_hash, (yyvsp[0].attr)->name, toid);(yyvsp[0].attr)->next = gs[gsindex-1]->attr_list; gs[gsindex-1]->attr_list = (yyvsp[0].attr);}
#line 1300 "syntax_parser.c"
    break;

  case 11: /* statement: group  */
#line 107 "syntax_parser.y"
                                 {si2drObjectIdT toid;toid.v1 = (void*)(yyvsp[0].group);liberty_hash_enter_oid(gs[gsindex-1]->group_hash, (yyvsp[0].group)->type,toid);(yyvsp[0].group)->next = gs[gsindex-1]->group_list; gs[gsindex-1]->group_list = (yyvsp[0].group);}
#line 1306 "syntax_parser.c"
    break;

  case 12: /* simple_attr: IDENT COLON KW_VIRTATTR SEMI  */
#line 110 "syntax_parser.y"
                                              { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_VIRTUAL,0);}
#line 1312 "syntax_parser.c"
    break;

  case 13: /* simple_attr: IDENT COLON KW_STRING SEMI  */
#line 111 "syntax_parser.y"
                                        { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_STRING,0);}
#line 1318 "syntax_parser.c"
    break;

  case 14: /* simple_attr: IDENT COLON KW_STRING string_enum SEMI  */
#line 112 "syntax_parser.y"
                                                    { (yyval.attr) = make_simple((yyvsp[-4].str),SYNTAX_ATTRTYPE_ENUM, (yyvsp[-1].str_enum));}
#line 1324 "syntax_parser.c"
    break;

  case 15: /* simple_attr: IDENT COLON KW_FLOAT float_constraint SEMI  */
#line 113 "syntax_parser.y"
                                                         { (yyval.attr) = make_simple((yyvsp[-4].str),SYNTAX_ATTRTYPE_FLOAT,(yyvsp[-1].float_constr));}
#line 1330 "syntax_parser.c"
    break;

  case 16: /* simple_attr: IDENT COLON KW_FLOAT SEMI  */
#line 114 "syntax_parser.y"
                                       { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_FLOAT,0);}
#line 1336 "syntax_parser.c"
    break;

  case 17: /* simple_attr: IDENT COLON KW_ENUM string_enum SEMI  */
#line 115 "syntax_parser.y"
                                                  { (yyval.attr) = make_simple((yyvsp[-4].str),SYNTAX_ATTRTYPE_ENUM, (yyvsp[-1].str_enum));}
#line 1342 "syntax_parser.c"
    break;

  case 18: /* simple_attr: IDENT COLON KW_SHORT SEMI  */
#line 116 "syntax_parser.y"
                                       { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_INT,0);}
#line 1348 "syntax_parser.c"
    break;

  case 19: /* simple_attr: IDENT COLON KW_SHORT int_constraint SEMI  */
#line 117 "syntax_parser.y"
                                                      { (yyval.attr) = make_simple((yyvsp[-4].str),SYNTAX_ATTRTYPE_INT,(yyvsp[-1].int_constr));}
#line 1354 "syntax_parser.c"
    break;

  case 20: /* simple_attr: IDENT COLON KW_INTEGER SEMI  */
#line 118 "syntax_parser.y"
                                         { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_INT,0);}
#line 1360 "syntax_parser.c"
    break;

  case 21: /* simple_attr: IDENT COLON KW_INTEGER int_constraint SEMI  */
#line 119 "syntax_parser.y"
                                                        { (yyval.attr) = make_simple((yyvsp[-4].str),SYNTAX_ATTRTYPE_INT,(yyvsp[-1].int_constr));}
#line 1366 "syntax_parser.c"
    break;

  case 22: /* simple_attr: IDENT COLON KW_BOOLEAN SEMI  */
#line 120 "syntax_parser.y"
                                         { (yyval.attr) = make_simple((yyvsp[-3].str),SYNTAX_ATTRTYPE_BOOLEAN,0);}
#line 1372 "syntax_parser.c"
    break;

  case 23: /* string_enum: LPAR s_or_i_list RPAR  */
#line 123 "syntax_parser.y"
                                    { int i; (yyval.str_enum) = (libsynt_string_enum*)my_calloc(sizeof(libsynt_string_enum),1); (yyval.str_enum)->array = (char**)my_calloc(sizeof(char*),enumcount+1);
                                            for(i=0;i<enumcount; i++){(yyval.str_enum)->array[i] = enumlist[i];} (yyval.str_enum)->size = enumcount;}
#line 1379 "syntax_parser.c"
    break;

  case 24: /* s_or_i_list: s_or_i  */
#line 127 "syntax_parser.y"
                     { enumcount=0; enumlist[enumcount++] = (yyvsp[0].str);}
#line 1385 "syntax_parser.c"
    break;

  case 25: /* s_or_i_list: s_or_i_list COMMA s_or_i  */
#line 128 "syntax_parser.y"
                                       { enumlist[enumcount++] = (yyvsp[0].str);}
#line 1391 "syntax_parser.c"
    break;

  case 26: /* s_or_i_list: s_or_i_list COMMA KW_OR s_or_i  */
#line 129 "syntax_parser.y"
                                             { enumlist[enumcount++] = (yyvsp[0].str);}
#line 1397 "syntax_parser.c"
    break;

  case 27: /* float_constraint: LPAR GREATERTHAN NUM RPAR  */
#line 133 "syntax_parser.y"
                                             {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->greater_than = (yyvsp[-1].num); (yyval.float_constr)->greater_specd =1; }
#line 1403 "syntax_parser.c"
    break;

  case 28: /* float_constraint: LPAR LESSTHAN NUM RPAR  */
#line 134 "syntax_parser.y"
                                          {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->less_than = (yyvsp[-1].num); (yyval.float_constr)->less_specd = 1; }
#line 1409 "syntax_parser.c"
    break;

  case 29: /* float_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR  */
#line 135 "syntax_parser.y"
                                                                 {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1);
                                                 (yyval.float_constr)->less_than = (yyvsp[-1].num); (yyval.float_constr)->less_specd = 1;(yyval.float_constr)->greater_than = (yyvsp[-4].num); (yyval.float_constr)->greater_specd =1;}
#line 1416 "syntax_parser.c"
    break;

  case 30: /* float_constraint: COLONEQ NUM  */
#line 137 "syntax_parser.y"
                               {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->default_value = (yyvsp[0].num); (yyval.float_constr)->default_specd =1;}
#line 1422 "syntax_parser.c"
    break;

  case 31: /* float_constraint: LPAR GREATERTHAN NUM RPAR COLONEQ NUM  */
#line 138 "syntax_parser.y"
                                                         {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->default_value = (yyvsp[0].num); (yyval.float_constr)->default_specd =1; (yyval.float_constr)->greater_than = (yyvsp[-3].num); (yyval.float_constr)->greater_specd =1; }
#line 1428 "syntax_parser.c"
    break;

  case 32: /* float_constraint: LPAR LESSTHAN NUM RPAR COLONEQ NUM  */
#line 139 "syntax_parser.y"
                                                      {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->default_value = (yyvsp[0].num); (yyval.float_constr)->default_specd =1;(yyval.float_constr)->less_than = (yyvsp[-3].num); (yyval.float_constr)->less_specd = 1; }
#line 1434 "syntax_parser.c"
    break;

  case 33: /* float_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR COLONEQ NUM  */
#line 140 "syntax_parser.y"
                                                                             {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->default_value = (yyvsp[0].num);
                                                 (yyval.float_constr)->less_than = (yyvsp[-3].num); (yyval.float_constr)->less_specd = 1;(yyval.float_constr)->greater_than = (yyvsp[-6].num); (yyval.float_constr)->greater_specd =1; (yyval.float_constr)->default_specd =1;}
#line 1441 "syntax_parser.c"
    break;

  case 34: /* float_constraint: COLONEQ s_or_i  */
#line 142 "syntax_parser.y"
                                  {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->refd_default = (yyvsp[0].str); (yyval.float_constr)->ref_default_specd =1;}
#line 1447 "syntax_parser.c"
    break;

  case 35: /* float_constraint: LPAR GREATERTHAN NUM RPAR COLONEQ s_or_i  */
#line 143 "syntax_parser.y"
                                                            {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->refd_default = (yyvsp[0].str);  (yyval.float_constr)->ref_default_specd =1;(yyval.float_constr)->greater_than = (yyvsp[-3].num); (yyval.float_constr)->greater_specd =1; }
#line 1453 "syntax_parser.c"
    break;

  case 36: /* float_constraint: LPAR LESSTHAN NUM RPAR COLONEQ s_or_i  */
#line 144 "syntax_parser.y"
                                                         {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->refd_default = (yyvsp[0].str); (yyval.float_constr)->ref_default_specd =1;(yyval.float_constr)->less_than = (yyvsp[-3].num); (yyval.float_constr)->less_specd = 1; }
#line 1459 "syntax_parser.c"
    break;

  case 37: /* float_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR COLONEQ s_or_i  */
#line 145 "syntax_parser.y"
                                                                                {(yyval.float_constr) = (libsynt_float_constraint*)my_calloc(sizeof(libsynt_float_constraint),1); (yyval.float_constr)->refd_default = (yyvsp[0].str);
                                                 (yyval.float_constr)->less_than = (yyvsp[-3].num); (yyval.float_constr)->less_specd = 1;(yyval.float_constr)->greater_than = (yyvsp[-6].num); (yyval.float_constr)->greater_specd =1; (yyval.float_constr)->ref_default_specd =1;}
#line 1466 "syntax_parser.c"
    break;

  case 38: /* int_constraint: LPAR GREATERTHAN NUM RPAR  */
#line 149 "syntax_parser.y"
                                            {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->greater_than = (yyvsp[-1].num); (yyval.int_constr)->greater_specd =1; }
#line 1472 "syntax_parser.c"
    break;

  case 39: /* int_constraint: LPAR LESSTHAN NUM RPAR  */
#line 150 "syntax_parser.y"
                                        {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->less_than = (yyvsp[-1].num); (yyval.int_constr)->less_specd = 1; }
#line 1478 "syntax_parser.c"
    break;

  case 40: /* int_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR  */
#line 151 "syntax_parser.y"
                                                               {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1);
                                                                (yyval.int_constr)->less_than = (yyvsp[-1].num); (yyval.int_constr)->less_specd = 1;(yyval.int_constr)->greater_than = (yyvsp[-4].num); (yyval.int_constr)->greater_specd =1;}
#line 1485 "syntax_parser.c"
    break;

  case 41: /* int_constraint: COLONEQ NUM  */
#line 153 "syntax_parser.y"
                             {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->default_value = (yyvsp[0].num); (yyval.int_constr)->default_specd =1;}
#line 1491 "syntax_parser.c"
    break;

  case 42: /* int_constraint: LPAR GREATERTHAN NUM RPAR COLONEQ NUM  */
#line 154 "syntax_parser.y"
                                                       {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->default_value = (yyvsp[0].num); (yyval.int_constr)->default_specd =1; (yyval.int_constr)->greater_than = (yyvsp[-3].num); (yyval.int_constr)->greater_specd =1; }
#line 1497 "syntax_parser.c"
    break;

  case 43: /* int_constraint: LPAR LESSTHAN NUM RPAR COLONEQ NUM  */
#line 155 "syntax_parser.y"
                                                    {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->default_value = (yyvsp[0].num); (yyval.int_constr)->default_specd =1;(yyval.int_constr)->less_than = (yyvsp[-3].num); (yyval.int_constr)->less_specd = 1; }
#line 1503 "syntax_parser.c"
    break;

  case 44: /* int_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR COLONEQ NUM  */
#line 156 "syntax_parser.y"
                                                                           {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->default_value = (yyvsp[0].num);
                                                                            (yyval.int_constr)->less_than = (yyvsp[-3].num); (yyval.int_constr)->less_specd = 1;(yyval.int_constr)->greater_than = (yyvsp[-6].num); (yyval.int_constr)->greater_specd =1; (yyval.int_constr)->default_specd =1;}
#line 1510 "syntax_parser.c"
    break;

  case 45: /* int_constraint: COLONEQ s_or_i  */
#line 158 "syntax_parser.y"
                                {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->refd_default = (yyvsp[0].str); (yyval.int_constr)->ref_default_specd =1;}
#line 1516 "syntax_parser.c"
    break;

  case 46: /* int_constraint: LPAR GREATERTHAN NUM RPAR COLONEQ s_or_i  */
#line 159 "syntax_parser.y"
                                                          {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->refd_default = (yyvsp[0].str);  (yyval.int_constr)->ref_default_specd =1;(yyval.int_constr)->greater_than = (yyvsp[-3].num); (yyval.int_constr)->greater_specd =1; }
#line 1522 "syntax_parser.c"
    break;

  case 47: /* int_constraint: LPAR LESSTHAN NUM RPAR COLONEQ s_or_i  */
#line 160 "syntax_parser.y"
                                                       {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->refd_default = (yyvsp[0].str); (yyval.int_constr)->ref_default_specd =1;(yyval.int_constr)->less_than = (yyvsp[-3].num); (yyval.int_constr)->less_specd = 1; }
#line 1528 "syntax_parser.c"
    break;

  case 48: /* int_constraint: LPAR GREATERTHAN NUM KW_AND LESSTHAN NUM RPAR COLONEQ s_or_i  */
#line 161 "syntax_parser.y"
                                                                              {(yyval.int_constr) = (libsynt_int_constraint*)my_calloc(sizeof(libsynt_int_constraint),1); (yyval.int_constr)->refd_default = (yyvsp[0].str);
                                                                      (yyval.int_constr)->less_than = (yyvsp[-3].num); (yyval.int_constr)->less_specd = 1;(yyval.int_constr)->greater_than = (yyvsp[-6].num); (yyval.int_constr)->greater_specd =1; (yyval.int_constr)->ref_default_specd =1;}
#line 1535 "syntax_parser.c"
    break;

  case 49: /* complex_attr: head SEMI  */
#line 167 "syntax_parser.y"
                              { (yyval.attr)= make_complex((yyvsp[-1].head));}
#line 1541 "syntax_parser.c"
    break;

  case 50: /* head: IDENT LPAR arg_or_namelist RPAR  */
#line 170 "syntax_parser.y"
                                          { (yyval.head) = (yyvsp[-1].head); (yyval.head)->ident = (yyvsp[-3].str); (yyval.head)->lineno = synt_lineno;}
#line 1547 "syntax_parser.c"
    break;

  case 51: /* head: KW_SHORT LPAR arg_or_namelist RPAR  */
#line 171 "syntax_parser.y"
                                             { (yyval.head) = (yyvsp[-1].head); (yyval.head)->ident = "short"; (yyval.head)->lineno = synt_lineno;}
#line 1553 "syntax_parser.c"
    break;

  case 52: /* arg_or_namelist: namelist  */
#line 175 "syntax_parser.y"
                           {(yyval.head) = my_calloc(sizeof(libsynt_head),1); (yyval.head)->namecons = (yyvsp[0].nameconstr);}
#line 1559 "syntax_parser.c"
    break;

  case 53: /* arg_or_namelist: arglist  */
#line 176 "syntax_parser.y"
                                          {(yyval.head) = my_calloc(sizeof(libsynt_head),1); (yyval.head)->arglist = (yyvsp[0].arg);}
#line 1565 "syntax_parser.c"
    break;

  case 54: /* namelist: %empty  */
#line 179 "syntax_parser.y"
            {(yyval.nameconstr) = SYNTAX_GNAME_NONE;}
#line 1571 "syntax_parser.c"
    break;

  case 55: /* namelist: IDENT  */
#line 180 "syntax_parser.y"
                         {(yyval.nameconstr) = SYNTAX_GNAME_ONE;}
#line 1577 "syntax_parser.c"
    break;

  case 56: /* namelist: LBRACK IDENT RBRACK  */
#line 181 "syntax_parser.y"
                                       {(yyval.nameconstr) = SYNTAX_GNAME_NONE_OR_ONE;}
#line 1583 "syntax_parser.c"
    break;

  case 57: /* namelist: IDENT LBRACK COMMA DOTS COMMA IDENT RBRACK  */
#line 182 "syntax_parser.y"
                                                              {(yyval.nameconstr) = SYNTAX_GNAME_ONE_OR_MORE;}
#line 1589 "syntax_parser.c"
    break;

  case 58: /* namelist: IDENT COMMA IDENT  */
#line 183 "syntax_parser.y"
                                     {(yyval.nameconstr) = SYNTAX_GNAME_TWO;}
#line 1595 "syntax_parser.c"
    break;

  case 59: /* namelist: IDENT COMMA IDENT COMMA IDENT  */
#line 184 "syntax_parser.y"
                                                 {(yyval.nameconstr) = SYNTAX_GNAME_THREE;}
#line 1601 "syntax_parser.c"
    break;

  case 60: /* arglist: KW_STRING  */
#line 187 "syntax_parser.y"
                    { (yyval.arg)=my_calloc(sizeof(libsynt_argument),1); (yyval.arg)->type = SYNTAX_ATTRTYPE_STRING;}
#line 1607 "syntax_parser.c"
    break;

  case 61: /* arglist: KW_INTEGER  */
#line 188 "syntax_parser.y"
                     {(yyval.arg)=my_calloc(sizeof(libsynt_argument),1); (yyval.arg)->type = SYNTAX_ATTRTYPE_INT;}
#line 1613 "syntax_parser.c"
    break;

  case 62: /* arglist: KW_FLOAT  */
#line 189 "syntax_parser.y"
                   {(yyval.arg)=my_calloc(sizeof(libsynt_argument),1); (yyval.arg)->type = SYNTAX_ATTRTYPE_FLOAT;}
#line 1619 "syntax_parser.c"
    break;

  case 63: /* arglist: KW_UNK_ARGS  */
#line 190 "syntax_parser.y"
                      {(yyval.arg)=my_calloc(sizeof(libsynt_argument),1); (yyval.arg)->type = SYNTAX_ATTRTYPE_COMPLEX_UNKNOWN;}
#line 1625 "syntax_parser.c"
    break;

  case 64: /* arglist: KW_LIST  */
#line 191 "syntax_parser.y"
                  {(yyval.arg)=my_calloc(sizeof(libsynt_argument),1); (yyval.arg)->type = SYNTAX_ATTRTYPE_COMPLEX_LIST;}
#line 1631 "syntax_parser.c"
    break;

  case 65: /* arglist: arglist COMMA KW_STRING  */
#line 192 "syntax_parser.y"
                                  {libsynt_argument *x= my_calloc(sizeof(libsynt_argument),1),*y; x->type = SYNTAX_ATTRTYPE_STRING; for(y=(yyval.arg);y;y=y->next){if( !y->next){y->next=x;break;}}(yyval.arg)=(yyvsp[-2].arg);}
#line 1637 "syntax_parser.c"
    break;

  case 66: /* arglist: arglist COMMA KW_INTEGER  */
#line 193 "syntax_parser.y"
                                   {libsynt_argument *x= my_calloc(sizeof(libsynt_argument),1),*y; x->type = SYNTAX_ATTRTYPE_INT;for(y=(yyval.arg);y;y=y->next){if( !y->next){y->next=x;break;}}(yyval.arg)=(yyvsp[-2].arg);}
#line 1643 "syntax_parser.c"
    break;

  case 67: /* arglist: arglist COMMA KW_FLOAT  */
#line 194 "syntax_parser.y"
                                 {libsynt_argument *x= my_calloc(sizeof(libsynt_argument),1),*y; x->type = SYNTAX_ATTRTYPE_FLOAT;for(y=(yyval.arg);y;y=y->next){if( !y->next){y->next=x;break;}}(yyval.arg)=(yyvsp[-2].arg);}
#line 1649 "syntax_parser.c"
    break;

  case 68: /* arglist: arglist COMMA KW_LIST  */
#line 195 "syntax_parser.y"
                                {libsynt_argument *x= my_calloc(sizeof(libsynt_argument),1),*y; x->type = SYNTAX_ATTRTYPE_COMPLEX_LIST;for(y=(yyval.arg);y;y=y->next){if( !y->next){y->next=x;break;}}(yyval.arg)=(yyvsp[-2].arg);}
#line 1655 "syntax_parser.c"
    break;

  case 69: /* s_or_i: STRING  */
#line 200 "syntax_parser.y"
                 {(yyval.str) = (yyvsp[0].str);}
#line 1661 "syntax_parser.c"
    break;

  case 70: /* s_or_i: IDENT  */
#line 201 "syntax_parser.y"
                        {(yyval.str)=(yyvsp[0].str);}
#line 1667 "syntax_parser.c"
    break;


#line 1671 "syntax_parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 204 "syntax_parser.y"


void push_group(libsynt_head *h )
{
	si2drObjectIdT toid,noid;
	
	gs[gsindex] = (libsynt_group_info*)my_calloc(sizeof(libsynt_group_info),1);

	toid.v1 = (void*)gs[gsindex];

	gs[gsindex]->lineno = h->lineno;

	gs[gsindex]->type = h->ident;

	gs[gsindex]->name_constraints = h->namecons;

	gs[gsindex]->attr_hash = liberty_hash_create_hash_table(41, 1, 0);

	gs[gsindex]->group_hash = liberty_hash_create_hash_table(41, 1, 0);

	liberty_hash_lookup(libsynt_groups, h->ident, &noid);
	if( noid.v1 == (void*)NULL )
		liberty_hash_enter_oid(libsynt_groups, h->ident, toid);
 
	liberty_hash_lookup(libsynt_allgroups, h->ident, &noid);
	if( noid.v1 == (void*)NULL )
		liberty_hash_enter_oid(libsynt_allgroups, h->ident, toid);
 
	gsindex++;
}

void pop_group(void)
{
	gsindex--;
}

libsynt_attribute_info *make_complex(libsynt_head *h)
{
	si2drObjectIdT toid,noid;
	libsynt_attribute_info *x = my_calloc(sizeof(libsynt_attribute_info),1);
	x->name = h->ident;
	toid.v1 = (void*)x;
	
	if( h->arglist->type == SYNTAX_ATTRTYPE_COMPLEX_UNKNOWN )
		x->type = SYNTAX_ATTRTYPE_COMPLEX_UNKNOWN;
	else if( h->arglist->type == SYNTAX_ATTRTYPE_COMPLEX_LIST )
		x->type = SYNTAX_ATTRTYPE_COMPLEX_LIST;
	else
		x->type = SYNTAX_ATTRTYPE_COMPLEX;
	x->u.args = h->arglist;
	liberty_hash_lookup(libsynt_attrs, h->ident, &noid);
	if( noid.v1 == (void*)NULL )
		liberty_hash_enter_oid(libsynt_attrs, h->ident, toid);
	return x;
}

libsynt_attribute_info *make_simple(char *name, libsynt_attr_type type, void *constraint_ptr)
{
	si2drObjectIdT toid,noid;
	libsynt_attribute_info *x = my_calloc(sizeof(libsynt_attribute_info),1);
	x->name = name;
	x->type = type;
	toid.v1 = (void*)x;
	switch( type )
	{
	case SYNTAX_ATTRTYPE_STRING:
		break;
	case SYNTAX_ATTRTYPE_VIRTUAL:
		break;
	case SYNTAX_ATTRTYPE_ENUM:
		x->u.stringenum = (libsynt_string_enum*)constraint_ptr;
		break;
	case SYNTAX_ATTRTYPE_FLOAT:
		x->u.floatcon = (libsynt_float_constraint*)constraint_ptr;
		break;
	case SYNTAX_ATTRTYPE_INT:
		x->u.intcon = (libsynt_int_constraint*)constraint_ptr;
		break;
	case SYNTAX_ATTRTYPE_BOOLEAN:
		break;
	default:
		break;
	}
	liberty_hash_lookup(libsynt_attrs, x->name, &noid);
	if( noid.v1 == (void*)NULL )
		liberty_hash_enter_oid(libsynt_attrs, x->name, toid);
	return x;
}

int syntax_parser_error(char *);

int yyerror(char *s)
{
	fprintf(stderr,"%s line number %d\n", s, synt_lineno);
	return 0;
}

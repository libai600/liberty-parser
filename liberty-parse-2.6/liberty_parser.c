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
#define yyparse         liberty_parser_parse
#define yylex           liberty_parser_lex
#define yyerror         liberty_parser_error
#define yydebug         liberty_parser_debug
#define yynerrs         liberty_parser_nerrs
#define yylval          liberty_parser_lval
#define yychar          liberty_parser_char

/* First part of user prologue.  */
#line 3 "liberty_parser.y"

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
#ifdef _MSC_VER
#include <malloc.h>
#else
#include <alloca.h>
#endif
#include <stdlib.h>
#include <string.h>
#include "liberty_structs.h"
#include "si2dr_liberty.h"
#include "group_enum.h"
#include "attr_enum.h"
#include "libhash.h"
#include "libstrtab.h"
#ifdef DMALLOC
#include "dmalloc.h"
#endif
#include "mymalloc.h" /* meant to override the my_*alloc calls if dmalloc defined*/

   extern int yylex();
   extern int yyerror(char *s);

   static si2drGroupIdT gs[1000];
   static int gsindex = 0;

   static si2drErrorT   err;
   static si2drAttrTypeT atype;
   static si2drAttrIdT curr_attr;
   static si2drDefineIdT curr_def;
   void push_group(liberty_head *h );
   void pop_group(liberty_head *h);
   si2drValueTypeT convert_vt(char *type);
   int lineno;
   int syntax_errors;
   static char PB[8000]; /* so as not to have a bunch of local buffers */
   extern int tight_colon_ok;
   extern char token_comment_buf[SI2DR_MAX_STRING_LEN]; 
   extern char token_comment_buf2[SI2DR_MAX_STRING_LEN];
   static char token_comment_buft[SI2DR_MAX_STRING_LEN];
   extern int tok_encountered;
   extern char *curr_file;
   extern liberty_strtable *master_string_table;

   struct xnumber
   {
      int type; /* 0=int, 1=float */
      int intnum;
      double floatnum;
   };
   typedef struct xnumber xnumber;

   void make_complex(liberty_head *h);
   void make_simple(char *name, liberty_attribute_value *v);


   

#line 154 "liberty_parser.c"

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

#include "liberty_parser.h"
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
  YYSYMBOL_KW_DEFINE = 10,                 /* KW_DEFINE  */
  YYSYMBOL_KW_DEFINE_GROUP = 11,           /* KW_DEFINE_GROUP  */
  YYSYMBOL_KW_TRUE = 12,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 13,                  /* KW_FALSE  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_MULT = 16,                      /* MULT  */
  YYSYMBOL_DIV = 17,                       /* DIV  */
  YYSYMBOL_EQ = 18,                        /* EQ  */
  YYSYMBOL_UNARY = 19,                     /* UNARY  */
  YYSYMBOL_NUM = 20,                       /* NUM  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_IDENT = 22,                     /* IDENT  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_file = 24,                      /* file  */
  YYSYMBOL_25_1 = 25,                      /* $@1  */
  YYSYMBOL_group = 26,                     /* group  */
  YYSYMBOL_27_2 = 27,                      /* $@2  */
  YYSYMBOL_28_3 = 28,                      /* $@3  */
  YYSYMBOL_statements = 29,                /* statements  */
  YYSYMBOL_statement = 30,                 /* statement  */
  YYSYMBOL_simple_attr = 31,               /* simple_attr  */
  YYSYMBOL_32_4 = 32,                      /* $@4  */
  YYSYMBOL_33_5 = 33,                      /* $@5  */
  YYSYMBOL_complex_attr = 34,              /* complex_attr  */
  YYSYMBOL_head = 35,                      /* head  */
  YYSYMBOL_36_6 = 36,                      /* $@6  */
  YYSYMBOL_param_list = 37,                /* param_list  */
  YYSYMBOL_define = 38,                    /* define  */
  YYSYMBOL_define_group = 39,              /* define_group  */
  YYSYMBOL_s_or_i = 40,                    /* s_or_i  */
  YYSYMBOL_attr_val = 41,                  /* attr_val  */
  YYSYMBOL_attr_val_expr = 42,             /* attr_val_expr  */
  YYSYMBOL_expr = 43                       /* expr  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   88

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  85

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   109,   112,   112,   113,   113,   117,   118,
     122,   123,   124,   125,   126,   129,   129,   130,   131,   131,
     134,   135,   138,   138,   139,   143,   144,   157,   172,   181,
     189,   190,   193,   207,   213,   222,   228,   241,   247,   253,
     259,   335,   343,   351,   359,   367,   375,   383,   391,   409
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
  "LPAR", "RPAR", "LCURLY", "RCURLY", "COLON", "KW_DEFINE",
  "KW_DEFINE_GROUP", "KW_TRUE", "KW_FALSE", "PLUS", "MINUS", "MULT", "DIV",
  "EQ", "UNARY", "NUM", "STRING", "IDENT", "$accept", "file", "$@1",
  "group", "$@2", "$@3", "statements", "statement", "simple_attr", "$@4",
  "$@5", "complex_attr", "head", "$@6", "param_list", "define",
  "define_group", "s_or_i", "attr_val", "attr_val_expr", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-16)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -41,     9,    -2,   -41,    17,   -41,    30,    24,    33,   -41,
      54,    -5,    47,   -41,   -41,   -41,   -41,   -41,    26,    51,
     -41,    56,    63,    35,   -41,    23,   -41,   -41,   -41,     3,
     -41,   -41,   -41,    54,   -41,   -41,    -6,    -6,    -6,    37,
      37,   -41,   -41,   -41,   -41,   -41,    53,    70,    -1,   -41,
     -41,    -1,    -1,   -41,   -41,   -41,    73,    55,   -41,    -6,
      -6,    48,   -41,   -41,    74,    -1,    -1,    -1,    -1,    75,
      77,    76,   -41,   -41,    19,    19,   -41,   -41,   -41,    -6,
      79,    78,   -41,    81,   -41
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,    22,     4,    24,
       0,     0,     0,    35,    36,    32,    30,    31,     0,    33,
      25,     0,     0,     0,    14,     0,     8,    10,    11,    21,
      12,    13,     7,     0,    23,    27,     0,     0,     0,     0,
       0,     5,     9,    20,    26,    34,     0,     0,     0,    38,
      39,     0,     0,    48,    37,    49,    17,    40,    18,     0,
       0,     0,    47,    46,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    16,    41,    42,    43,    44,    19,     0,
       0,     0,    29,     0,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,    84,   -41,   -41,   -41,    62,   -41,   -41,
     -41,   -41,    86,   -41,   -41,   -41,   -41,   -36,   -15,    41,
     -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    24,    11,    12,    25,    26,    27,    64,
      69,    28,    29,    10,    18,    30,    31,    19,    20,    56,
      57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      45,    46,    47,    35,    48,    21,    22,    43,    61,     3,
       8,    62,    63,    51,    52,    16,    17,    23,    44,    53,
       4,    55,     7,    70,    71,    74,    75,    76,    77,    33,
       9,    41,    34,    21,    22,    67,    68,     8,    13,    14,
       7,    -6,    48,    81,    39,    23,    15,    16,    17,    49,
      50,    51,    52,    40,    72,    32,    59,    53,    54,    55,
      36,    37,    65,    66,    67,    68,    13,    14,    38,    65,
      66,    67,    68,    60,    15,    16,    17,   -15,    73,    78,
      79,    58,    80,    82,    83,    84,     5,    42,     6
};

static const yytype_int8 yycheck[] =
{
      36,    37,    38,    18,     5,    10,    11,     4,    48,     0,
       7,    51,    52,    14,    15,    21,    22,    22,    33,    20,
      22,    22,     5,    59,    60,    65,    66,    67,    68,     3,
       6,     8,     6,    10,    11,    16,    17,     7,    12,    13,
       5,     8,     5,    79,     9,    22,    20,    21,    22,    12,
      13,    14,    15,    18,     6,     8,     3,    20,    21,    22,
       9,     5,    14,    15,    16,    17,    12,    13,     5,    14,
      15,    16,    17,     3,    20,    21,    22,     4,     4,     4,
       3,    40,     6,     4,     6,     4,     2,    25,     2
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    25,     0,    22,    26,    35,     5,     7,     6,
      36,    27,    28,    12,    13,    20,    21,    22,    37,    40,
      41,    10,    11,    22,    26,    29,    30,    31,    34,    35,
      38,    39,     8,     3,     6,    41,     9,     5,     5,     9,
      18,     8,    30,     4,    41,    40,    40,    40,     5,    12,
      13,    14,    15,    20,    21,    22,    42,    43,    42,     3,
       3,    43,    43,    43,    32,    14,    15,    16,    17,    33,
      40,    40,     6,     4,    43,    43,    43,    43,     4,     3,
       6,    40,     4,     6,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    25,    24,    27,    26,    28,    26,    29,    29,
      30,    30,    30,    30,    30,    32,    31,    31,    33,    31,
      34,    34,    36,    35,    35,    37,    37,    37,    38,    39,
      40,    40,    41,    41,    41,    41,    41,    42,    42,    42,
      42,    43,    43,    43,    43,    43,    43,    43,    43,    43
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     5,     0,     4,     1,     2,
       1,     1,     1,     1,     1,     0,     5,     3,     0,     5,
       2,     1,     0,     5,     3,     1,     3,     2,     9,     7,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     2,     2,     1,     1
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
  case 2: /* $@1: %empty  */
#line 109 "liberty_parser.y"
          {lineno = 1; syntax_errors= 0;}
#line 1233 "liberty_parser.c"
    break;

  case 3: /* file: $@1 group  */
#line 109 "liberty_parser.y"
                                                {}
#line 1239 "liberty_parser.c"
    break;

  case 4: /* $@2: %empty  */
#line 112 "liberty_parser.y"
                      {push_group((yyvsp[-1].head));}
#line 1245 "liberty_parser.c"
    break;

  case 5: /* group: head LCURLY $@2 statements RCURLY  */
#line 112 "liberty_parser.y"
                                                          {pop_group((yyvsp[-4].head));}
#line 1251 "liberty_parser.c"
    break;

  case 6: /* $@3: %empty  */
#line 113 "liberty_parser.y"
              {push_group((yyvsp[-1].head));}
#line 1257 "liberty_parser.c"
    break;

  case 7: /* group: head LCURLY $@3 RCURLY  */
#line 113 "liberty_parser.y"
                                       {pop_group((yyvsp[-3].head));}
#line 1263 "liberty_parser.c"
    break;

  case 8: /* statements: statement  */
#line 117 "liberty_parser.y"
                            {}
#line 1269 "liberty_parser.c"
    break;

  case 9: /* statements: statements statement  */
#line 118 "liberty_parser.y"
                        {}
#line 1275 "liberty_parser.c"
    break;

  case 10: /* statement: simple_attr  */
#line 122 "liberty_parser.y"
                              {}
#line 1281 "liberty_parser.c"
    break;

  case 11: /* statement: complex_attr  */
#line 123 "liberty_parser.y"
               {}
#line 1287 "liberty_parser.c"
    break;

  case 12: /* statement: define  */
#line 124 "liberty_parser.y"
         {}
#line 1293 "liberty_parser.c"
    break;

  case 13: /* statement: define_group  */
#line 125 "liberty_parser.y"
               {}
#line 1299 "liberty_parser.c"
    break;

  case 14: /* statement: group  */
#line 126 "liberty_parser.y"
         {}
#line 1305 "liberty_parser.c"
    break;

  case 15: /* $@4: %empty  */
#line 129 "liberty_parser.y"
                                            { make_simple((yyvsp[-2].str),(yyvsp[0].val));}
#line 1311 "liberty_parser.c"
    break;

  case 17: /* simple_attr: IDENT COLON attr_val_expr  */
#line 130 "liberty_parser.y"
                            { make_simple((yyvsp[-2].str),(yyvsp[0].val));}
#line 1317 "liberty_parser.c"
    break;

  case 18: /* $@5: %empty  */
#line 131 "liberty_parser.y"
                            { make_simple((yyvsp[-2].str),(yyvsp[0].val));si2drSimpleAttrSetIsVar(curr_attr,&err); }
#line 1323 "liberty_parser.c"
    break;

  case 20: /* complex_attr: head SEMI  */
#line 134 "liberty_parser.y"
                              {make_complex((yyvsp[-1].head));}
#line 1329 "liberty_parser.c"
    break;

  case 21: /* complex_attr: head  */
#line 135 "liberty_parser.y"
        {make_complex((yyvsp[0].head));}
#line 1335 "liberty_parser.c"
    break;

  case 22: /* $@6: %empty  */
#line 138 "liberty_parser.y"
                     {tight_colon_ok =1;}
#line 1341 "liberty_parser.c"
    break;

  case 23: /* head: IDENT LPAR $@6 param_list RPAR  */
#line 138 "liberty_parser.y"
                                                          { (yyval.head) = (liberty_head*)my_calloc(sizeof(liberty_head),1); (yyval.head)->name = (yyvsp[-4].str); (yyval.head)->list = (yyvsp[-1].val); (yyval.head)->lineno = lineno;(yyval.head)->filename = curr_file; tight_colon_ok =0;}
#line 1347 "liberty_parser.c"
    break;

  case 24: /* head: IDENT LPAR RPAR  */
#line 139 "liberty_parser.y"
                             { (yyval.head) = (liberty_head*)my_calloc(sizeof(liberty_head),1); (yyval.head)->name = (yyvsp[-2].str); (yyval.head)->list = 0; (yyval.head)->lineno = lineno;(yyval.head)->filename = curr_file;}
#line 1353 "liberty_parser.c"
    break;

  case 25: /* param_list: attr_val  */
#line 143 "liberty_parser.y"
                       {(yyval.val)=(yyvsp[0].val);}
#line 1359 "liberty_parser.c"
    break;

  case 26: /* param_list: param_list COMMA attr_val  */
#line 145 "liberty_parser.y"
{
   liberty_attribute_value *v;
   for(v=(yyvsp[-2].val); v; v=v->next)
   {
      if(!v->next)
      {
         v->next = (yyvsp[0].val);
         break;
      }
   }
   (yyval.val) = (yyvsp[-2].val);
}
#line 1376 "liberty_parser.c"
    break;

  case 27: /* param_list: param_list attr_val  */
#line 158 "liberty_parser.y"
{
   liberty_attribute_value *v;
   for(v=(yyvsp[-1].val); v; v=v->next)
   {
      if(!v->next)
      {
         v->next = (yyvsp[0].val);
         break;
      }
   }
   (yyval.val) = (yyvsp[-1].val);
}
#line 1393 "liberty_parser.c"
    break;

  case 28: /* define: KW_DEFINE LPAR s_or_i COMMA s_or_i COMMA s_or_i RPAR SEMI  */
#line 173 "liberty_parser.y"
{curr_def = si2drGroupCreateDefine(gs[gsindex-1],(yyvsp[-6].str),(yyvsp[-4].str),convert_vt((yyvsp[-2].str)),&err);si2drObjectSetLineNo(curr_def,lineno,&err);si2drObjectSetFileName(curr_def,curr_file,&err);
   if( token_comment_buf[0] ) { si2drDefineSetComment(curr_def, token_comment_buf,&err); token_comment_buf[0]=0;} 
   if( token_comment_buf2[0] )	{strcpy(token_comment_buf, token_comment_buf2);token_comment_buf2[0] = 0;}
   tok_encountered = 0;
}
#line 1403 "liberty_parser.c"
    break;

  case 29: /* define_group: KW_DEFINE_GROUP LPAR s_or_i COMMA s_or_i RPAR SEMI  */
#line 182 "liberty_parser.y"
{curr_def = si2drGroupCreateDefine(gs[gsindex-1],(yyvsp[-4].str),(yyvsp[-2].str),SI2DR_UNDEFINED_VALUETYPE,&err);si2drObjectSetLineNo(curr_def,lineno,&err);si2drObjectSetFileName(curr_def,curr_file,&err);
   if( token_comment_buf[0] ) { si2drDefineSetComment(curr_def, token_comment_buf,&err); token_comment_buf[0]=0;} 
   if( token_comment_buf2[0] )	{strcpy(token_comment_buf, token_comment_buf2);token_comment_buf2[0] = 0;}
   tok_encountered = 0;
}
#line 1413 "liberty_parser.c"
    break;

  case 30: /* s_or_i: STRING  */
#line 189 "liberty_parser.y"
                 {(yyval.str) = (yyvsp[0].str);}
#line 1419 "liberty_parser.c"
    break;

  case 31: /* s_or_i: IDENT  */
#line 190 "liberty_parser.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1425 "liberty_parser.c"
    break;

  case 32: /* attr_val: NUM  */
#line 193 "liberty_parser.y"
               { (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
              /* I get back a floating point number... not a string, and I have to 
                 tell if it's an integer, without using any math lib funcs? */
              if( (yyvsp[0].num).type == 0 )
              {
                 (yyval.val)->type = LIBERTY__VAL_INT;
                 (yyval.val)->u.int_val = (int) (yyvsp[0].num).intnum;
              }
              else
              {
                 (yyval.val)->type = LIBERTY__VAL_DOUBLE;
                 (yyval.val)->u.double_val = (yyvsp[0].num).floatnum;
              }
           }
#line 1444 "liberty_parser.c"
    break;

  case 33: /* attr_val: s_or_i  */
#line 208 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_STRING;
   (yyval.val)->u.string_val = (yyvsp[0].str);
}
#line 1454 "liberty_parser.c"
    break;

  case 34: /* attr_val: s_or_i COLON s_or_i  */
#line 214 "liberty_parser.y"
{
   char *x;
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_STRING;
   x = (char*)alloca(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 2); /* get a scratchpad */
   sprintf(x, "%s:%s", (yyvsp[-2].str),(yyvsp[0].str));
   (yyval.val)->u.string_val = liberty_strtable_enter_string(master_string_table, x); /* scratchpad goes away after this */
}
#line 1467 "liberty_parser.c"
    break;

  case 35: /* attr_val: KW_TRUE  */
#line 223 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_BOOLEAN;
   (yyval.val)->u.bool_val = 1;
}
#line 1477 "liberty_parser.c"
    break;

  case 36: /* attr_val: KW_FALSE  */
#line 229 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_BOOLEAN;
   (yyval.val)->u.bool_val = 0;
}
#line 1487 "liberty_parser.c"
    break;

  case 37: /* attr_val_expr: STRING  */
#line 242 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_STRING;
   (yyval.val)->u.string_val = (yyvsp[0].str);
}
#line 1497 "liberty_parser.c"
    break;

  case 38: /* attr_val_expr: KW_TRUE  */
#line 248 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_BOOLEAN;
   (yyval.val)->u.bool_val = 1;
}
#line 1507 "liberty_parser.c"
    break;

  case 39: /* attr_val_expr: KW_FALSE  */
#line 254 "liberty_parser.y"
{
   (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
   (yyval.val)->type = LIBERTY__VAL_BOOLEAN;
   (yyval.val)->u.bool_val = 0;
}
#line 1517 "liberty_parser.c"
    break;

  case 40: /* attr_val_expr: expr  */
#line 260 "liberty_parser.y"
{
   /* all the if/else if's are to reduce the total number of exprs to a minimum */
   if( (yyvsp[0].expr)->type == SI2DR_EXPR_VAL && (yyvsp[0].expr)->valuetype == SI2DR_FLOAT64 && !(yyvsp[0].expr)->left && !(yyvsp[0].expr)->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_DOUBLE;
      (yyval.val)->u.double_val = (yyvsp[0].expr)->u.d;
      /* printf("EXPR->double %g \n", $1->u.d); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_VAL && (yyvsp[0].expr)->valuetype == SI2DR_INT32 && !(yyvsp[0].expr)->left && !(yyvsp[0].expr)->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_INT;
      (yyval.val)->u.int_val = (yyvsp[0].expr)->u.i;
      /* printf("EXPR->int - %d \n", $1->u.i); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_OP_SUB && (yyvsp[0].expr)->left && !(yyvsp[0].expr)->right 
         && (yyvsp[0].expr)->left->valuetype == SI2DR_FLOAT64 && !(yyvsp[0].expr)->left->left && !(yyvsp[0].expr)->left->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_DOUBLE;
      (yyval.val)->u.double_val = -(yyvsp[0].expr)->left->u.d;
      /* printf("EXPR->double - %g \n", $1->u.d); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_OP_SUB && (yyvsp[0].expr)->left && !(yyvsp[0].expr)->right 
         && (yyvsp[0].expr)->left->valuetype == SI2DR_INT32 && !(yyvsp[0].expr)->left->left && !(yyvsp[0].expr)->left->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_INT;
      (yyval.val)->u.int_val = -(yyvsp[0].expr)->left->u.i;
      /* printf("EXPR->double - %g \n", $1->u.d); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_OP_ADD && (yyvsp[0].expr)->left && !(yyvsp[0].expr)->right 
         && (yyvsp[0].expr)->left->valuetype == SI2DR_FLOAT64 && !(yyvsp[0].expr)->left->left && !(yyvsp[0].expr)->left->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_DOUBLE;
      (yyval.val)->u.double_val = (yyvsp[0].expr)->left->u.d;
      /* printf("EXPR->double + %g \n", $1->u.d); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_OP_ADD && (yyvsp[0].expr)->left && !(yyvsp[0].expr)->right 
         && (yyvsp[0].expr)->left->valuetype == SI2DR_INT32 && !(yyvsp[0].expr)->left->left && !(yyvsp[0].expr)->left->right )
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_INT;
      (yyval.val)->u.int_val = (yyvsp[0].expr)->left->u.i;
      /* printf("EXPR->double + %g \n", $1->u.d); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else if( (yyvsp[0].expr)->type == SI2DR_EXPR_VAL && (yyvsp[0].expr)->valuetype == SI2DR_STRING && !(yyvsp[0].expr)->left && !(yyvsp[0].expr)->right 
         /* && ( strcmp($1->u.s,"VDD") && strcmp($1->u.s,"VSS")  )  I'm getting complaints about excluding VSS and VDD, so.... they'll not be exprs any more it they are all alone */ )
   {  /* uh, do we need to exclude all but VSS and VDD ? no! */
      /* The only way a string would turned into an expr, is if it were parsed
         as an IDENT -- so no quotes will ever be seen... */
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_STRING;
      (yyval.val)->u.string_val = (yyvsp[0].expr)->u.s;
      /* printf("EXPR->string = %s \n", $1->u.s); */
      si2drExprDestroy((yyvsp[0].expr),&err);
   }
   else
   {
      (yyval.val)= (liberty_attribute_value*)my_calloc(sizeof(liberty_attribute_value),1);
      (yyval.val)->type = LIBERTY__VAL_EXPR;
      (yyval.val)->u.expr_val = (yyvsp[0].expr);
      /* printf("left EXPR alone\n"); */
   }
}
#line 1595 "liberty_parser.c"
    break;

  case 41: /* expr: expr PLUS expr  */
#line 336 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_ADD,&err);
   (yyval.expr)->left = (yyvsp[-2].expr);
   (yyval.expr)->right = (yyvsp[0].expr);
}
#line 1607 "liberty_parser.c"
    break;

  case 42: /* expr: expr MINUS expr  */
#line 344 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_SUB,&err);
   (yyval.expr)->left = (yyvsp[-2].expr);
   (yyval.expr)->right = (yyvsp[0].expr);
}
#line 1619 "liberty_parser.c"
    break;

  case 43: /* expr: expr MULT expr  */
#line 352 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_MUL,&err);
   (yyval.expr)->left = (yyvsp[-2].expr);
   (yyval.expr)->right = (yyvsp[0].expr);
}
#line 1631 "liberty_parser.c"
    break;

  case 44: /* expr: expr DIV expr  */
#line 360 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_DIV,&err);
   (yyval.expr)->left = (yyvsp[-2].expr);
   (yyval.expr)->right = (yyvsp[0].expr);
}
#line 1643 "liberty_parser.c"
    break;

  case 45: /* expr: LPAR expr RPAR  */
#line 368 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_PAREN,&err);
   (yyval.expr)->left = (yyvsp[-1].expr);
   (yyval.expr)->right = 0;
}
#line 1655 "liberty_parser.c"
    break;

  case 46: /* expr: MINUS expr  */
#line 376 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_SUB,&err);
   (yyval.expr)->left = (yyvsp[0].expr);
   (yyval.expr)->right = 0;
}
#line 1667 "liberty_parser.c"
    break;

  case 47: /* expr: PLUS expr  */
#line 384 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_OP_ADD,&err);
   (yyval.expr)->left = (yyvsp[0].expr);
   (yyval.expr)->right = 0;
}
#line 1679 "liberty_parser.c"
    break;

  case 48: /* expr: NUM  */
#line 392 "liberty_parser.y"
{
   si2drErrorT err;
   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_VAL,&err);
   (yyval.expr)->left = 0;
   (yyval.expr)->right = 0;
   if( (yyvsp[0].num).type == 0 )
   {
      (yyval.expr)->valuetype = SI2DR_INT32;
      (yyval.expr)->u.i = (yyvsp[0].num).intnum;
   }
   else
   {
      (yyval.expr)->valuetype = SI2DR_FLOAT64;
      (yyval.expr)->u.d = (yyvsp[0].num).floatnum;
   }

}
#line 1701 "liberty_parser.c"
    break;

  case 49: /* expr: IDENT  */
#line 410 "liberty_parser.y"
{
   si2drErrorT err;

   (yyval.expr) = si2drCreateExpr(SI2DR_EXPR_VAL,&err);
   (yyval.expr)->valuetype = SI2DR_STRING;
   (yyval.expr)->u.s = (yyvsp[0].str);
   (yyval.expr)->left = 0;
   (yyval.expr)->right = 0;
}
#line 1715 "liberty_parser.c"
    break;


#line 1719 "liberty_parser.c"

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

#line 421 "liberty_parser.y"


void push_group(liberty_head *h )
{
   liberty_attribute_value *v,*vn;
   extern group_enum si2drGroupGetID(si2drGroupIdT group, 
         si2drErrorT   *err);
   si2drErrorT err;

   si2drMessageHandlerT MsgPrinter;

   group_enum ge;
   MsgPrinter = si2drPIGetMessageHandler(&err); /* the printer is in another file! */


   if( gsindex == 0 )
   {

      gs[gsindex] = si2drPICreateGroup(0,h->name,&err);
   }

   else
   {
      gs[gsindex] = si2drGroupCreateGroup(gs[gsindex-1],0,h->name,&err);
   }

   if( token_comment_buf[0] )
   {
      si2drGroupSetComment(gs[gsindex], token_comment_buf, &err);  /* heaven help us if there's more than 100K of comment! */
      token_comment_buf[0] = 0;
      tok_encountered = 0;
      if( token_comment_buf2[0] )
         strcpy(token_comment_buf,token_comment_buf2);
      token_comment_buf2[0] = 0;
   }

   ge = si2drGroupGetID(gs[gsindex],&err);

   if( err == SI2DR_OBJECT_ALREADY_EXISTS && ( ge != LIBERTY_GROUPENUM_internal_power ) )
   {
      sprintf(PB,"%s:%d: The group name %s is already being used in this context.",curr_file,lineno,h->name);
      (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
            PB, 
            &err);
   }
   if( err == SI2DR_INVALID_NAME )
   {
      sprintf(PB,"%s:%d: The group name \"%s\" is invalid.",curr_file,lineno,h->name);
      (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
            PB, 
            &err);
   }
   gsindex++;

   si2drObjectSetLineNo(gs[gsindex-1],h->lineno, &err);
   si2drObjectSetFileName(gs[gsindex-1],h->filename, &err);
   for(v=h->list;v;v=vn)
   {
      if( v->type != LIBERTY__VAL_STRING )
      {
         char buf[1000],*buf2;

         if( v->type == LIBERTY__VAL_INT )
         {
            sprintf(buf,"%d",v->u.int_val);
         }
         else
         {
            sprintf(buf,"%.12g",v->u.double_val);
         }
         si2drGroupAddName(gs[gsindex-1],buf,&err);

         if( err == SI2DR_OBJECT_ALREADY_EXISTS && ( ge != LIBERTY_GROUPENUM_internal_power ) && (ge != LIBERTY_GROUPENUM_vector) && (ge != LIBERTY_GROUPENUM_ccs_timing_base_curve))
         {
            sprintf(PB,"%s:%d: The group name %s is already being used in this context.",
                  curr_file,lineno,buf);
            (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
                  PB, 
                  &err);
         }
         else if( err == SI2DR_INVALID_NAME )
         {
            sprintf(PB,"%s:%d: The group name \"%s\" is invalid.",curr_file,lineno,buf);
            (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
                  PB, 
                  &err);
         }
         else  if( err != SI2DR_NO_ERROR) {
             sprintf(PB,"%s:%d: Adding group name \"%s\" failed.",curr_file,lineno,buf);
            (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
                  PB, 
                  &err);
         }
      }
      else
      {
         si2drGroupAddName(gs[gsindex-1],v->u.string_val,&err);

         if( err == SI2DR_OBJECT_ALREADY_EXISTS && ( ge != LIBERTY_GROUPENUM_internal_power ) && (ge != LIBERTY_GROUPENUM_vector) && (ge != LIBERTY_GROUPENUM_library) && (ge != LIBERTY_GROUPENUM_intrinsic_resistance) && 
               (ge != LIBERTY_GROUPENUM_va_compact_ccs_rise) && (ge != LIBERTY_GROUPENUM_va_compact_ccs_fall) &&
               (ge != LIBERTY_GROUPENUM_va_receiver_capacitance1_fall) &&
               (ge != LIBERTY_GROUPENUM_va_receiver_capacitance2_fall) &&
               (ge != LIBERTY_GROUPENUM_va_receiver_capacitance1_rise) &&
               (ge != LIBERTY_GROUPENUM_va_receiver_capacitance2_rise) &&
               (ge != LIBERTY_GROUPENUM_normalized_driver_waveform) &&
               (ge != LIBERTY_GROUPENUM_dc_current) &&
               (ge != LIBERTY_GROUPENUM_va_rise_constraint) && (ge != LIBERTY_GROUPENUM_va_fall_constraint) && (ge != 0) )
         {
            sprintf(PB,"%s:%d: The group name %s is already being used in this context.",
                  curr_file,lineno,v->u.string_val);
            (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
                  PB, 
                  &err);
         }
         if( err == SI2DR_INVALID_NAME )
         {
            sprintf(PB,"%s:%d: The group name \"%s\" is invalid. It will not be added to the database\n",
                  curr_file,lineno,v->u.string_val);
            (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
                  PB, 
                  &err);
         }
      }

      vn = v->next;
      my_free(v);
   }
}

void pop_group(liberty_head *h)
{
   gsindex--;
   my_free(h);
}

void make_complex(liberty_head *h)
{
   liberty_attribute_value *v,*vn;

   curr_attr=si2drGroupCreateAttr(gs[gsindex-1],h->name,SI2DR_COMPLEX,&err);
   if( token_comment_buf[0] ) { si2drAttrSetComment(curr_attr, token_comment_buf,&err); token_comment_buf[0]=0; tok_encountered = 0;}

   si2drObjectSetLineNo(curr_attr,h->lineno, &err);
   si2drObjectSetFileName(curr_attr,h->filename, &err);
   for(v=h->list;v;v=vn)
   {
      if( v->type == LIBERTY__VAL_BOOLEAN )
         si2drComplexAttrAddBooleanValue(curr_attr,v->u.bool_val,&err);
      else if( v->type == LIBERTY__VAL_STRING )
         si2drComplexAttrAddStringValue(curr_attr,v->u.string_val,&err);		
      else if( v->type == LIBERTY__VAL_DOUBLE )
         si2drComplexAttrAddFloat64Value(curr_attr,v->u.double_val,&err);
      else if(v->type ==LIBERTY__VAL_INT)
         si2drComplexAttrAddInt32Value(curr_attr,v->u.int_val,&err);
      else 
         si2drComplexAttrAddStringValue(curr_attr,v->u.string_val,&err);		
      vn = v->next;
      my_free(v);
   }
   my_free (h);
}

void make_simple(char *name, liberty_attribute_value *v)
{
   curr_attr=si2drGroupCreateAttr(gs[gsindex-1],name,SI2DR_SIMPLE,&err);
   if( token_comment_buf[0] ) { si2drAttrSetComment(curr_attr, token_comment_buf,&err); token_comment_buf[0]=0; tok_encountered = 0;}

   si2drObjectSetLineNo(curr_attr,lineno, &err);
   si2drObjectSetFileName(curr_attr,curr_file, &err);
   if( v->type == LIBERTY__VAL_BOOLEAN )
      si2drSimpleAttrSetBooleanValue(curr_attr,v->u.bool_val,&err);
   else if( v->type == LIBERTY__VAL_EXPR )
      si2drSimpleAttrSetExprValue(curr_attr,v->u.expr_val,&err);
   else if( v->type == LIBERTY__VAL_STRING )
      si2drSimpleAttrSetStringValue(curr_attr,v->u.string_val,&err);
   else if( v->type == LIBERTY__VAL_DOUBLE )
      si2drSimpleAttrSetFloat64Value(curr_attr,v->u.double_val,&err);
   else if( v->type == LIBERTY__VAL_INT)
      si2drSimpleAttrSetInt32Value(curr_attr,v->u.int_val,&err);
   else 
      si2drSimpleAttrSetStringValue(curr_attr,v->u.string_val,&err);

   my_free(v);
}



si2drValueTypeT convert_vt(char *type)
{
   if( !strcmp(type,"string") )
      return SI2DR_STRING;
   if( !strcmp(type,"integer") )
      return SI2DR_INT32;
   if( !strcmp(type,"float") )
      return SI2DR_FLOAT64;
   if( !strcmp(type,"boolean") )
      return SI2DR_BOOLEAN;
   return SI2DR_UNDEFINED_VALUETYPE;
}

int yyerror(char *s)
{
   si2drErrorT err;

   si2drMessageHandlerT MsgPrinter;

   MsgPrinter = si2drPIGetMessageHandler(&err); /* the printer is in another file! */

   sprintf(PB,"===\nERROR === %s file: %s, line number %d\nERROR ===", s, curr_file, lineno);
   (*MsgPrinter)(SI2DR_SEVERITY_ERR, SI2DR_SYNTAX_ERROR, 
         PB, 
         &err);

   syntax_errors++;
}

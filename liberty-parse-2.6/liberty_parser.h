/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_LIBERTY_PARSER_LIBERTY_PARSER_H_INCLUDED
# define YY_LIBERTY_PARSER_LIBERTY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int liberty_parser_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    COMMA = 258,                   /* COMMA  */
    SEMI = 259,                    /* SEMI  */
    LPAR = 260,                    /* LPAR  */
    RPAR = 261,                    /* RPAR  */
    LCURLY = 262,                  /* LCURLY  */
    RCURLY = 263,                  /* RCURLY  */
    COLON = 264,                   /* COLON  */
    KW_DEFINE = 265,               /* KW_DEFINE  */
    KW_DEFINE_GROUP = 266,         /* KW_DEFINE_GROUP  */
    KW_TRUE = 267,                 /* KW_TRUE  */
    KW_FALSE = 268,                /* KW_FALSE  */
    PLUS = 269,                    /* PLUS  */
    MINUS = 270,                   /* MINUS  */
    MULT = 271,                    /* MULT  */
    DIV = 272,                     /* DIV  */
    EQ = 273,                      /* EQ  */
    UNARY = 274,                   /* UNARY  */
    NUM = 275,                     /* NUM  */
    STRING = 276,                  /* STRING  */
    IDENT = 277                    /* IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "liberty_parser.y"

      char *str;
      xnumber num;
      liberty_group *group;
      liberty_attribute *attr;
      liberty_attribute_value *val;
      liberty_define *def;
      liberty_head *head;
      si2drExprT *expr;
   

#line 98 "liberty_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE liberty_parser_lval;


int liberty_parser_parse (void);


#endif /* !YY_LIBERTY_PARSER_LIBERTY_PARSER_H_INCLUDED  */

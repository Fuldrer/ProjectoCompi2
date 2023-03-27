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

#ifndef YY_YY_TOKENS_H_INCLUDED
# define YY_YY_TOKENS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "minikotlin.y"

    #include "ast.h"

#line 53 "tokens.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_LOGICAL_AND = 258,          /* TK_LOGICAL_AND  */
    TK_NOT = 259,                  /* TK_NOT  */
    TK_LOGICAL_OR = 260,           /* TK_LOGICAL_OR  */
    TK_GREAT_EQ_THAN = 261,        /* TK_GREAT_EQ_THAN  */
    TK_LESS_EQ_THAN = 262,         /* TK_LESS_EQ_THAN  */
    KW_DO = 263,                   /* KW_DO  */
    KW_ELSE = 264,                 /* KW_ELSE  */
    TK_INCREMENT = 265,            /* TK_INCREMENT  */
    TK_DECREMENT = 266,            /* TK_DECREMENT  */
    TK_EQ = 267,                   /* TK_EQ  */
    TK_DISTINCT = 268,             /* TK_DISTINCT  */
    TK_OP_RANGE = 269,             /* TK_OP_RANGE  */
    KW_IN = 270,                   /* KW_IN  */
    KW_RETURN = 271,               /* KW_RETURN  */
    KW_BREAK = 272,                /* KW_BREAK  */
    KW_FOR = 273,                  /* KW_FOR  */
    KW_IF = 274,                   /* KW_IF  */
    KW_VAR = 275,                  /* KW_VAR  */
    KW_INT = 276,                  /* KW_INT  */
    KW_FLOAT = 277,                /* KW_FLOAT  */
    KW_BOOLEAN = 278,              /* KW_BOOLEAN  */
    KW_STRING = 279,               /* KW_STRING  */
    KW_ARRAY = 280,                /* KW_ARRAY  */
    KW_FUN = 281,                  /* KW_FUN  */
    KW_WHILE = 282,                /* KW_WHILE  */
    TK_LEFTKEY = 283,              /* TK_LEFTKEY  */
    TK_RIGHTKEY = 284,             /* TK_RIGHTKEY  */
    KW_CHAR = 285,                 /* KW_CHAR  */
    KW_PRINTLN = 286,              /* KW_PRINTLN  */
    TK_FLOAT = 287,                /* TK_FLOAT  */
    TK_NUMBER = 288,               /* TK_NUMBER  */
    KW_TRUE = 289,                 /* KW_TRUE  */
    KW_FALSE = 290,                /* KW_FALSE  */
    TK_ID = 291,                   /* TK_ID  */
    TK_LIT_STRING = 292,           /* TK_LIT_STRING  */
    TK_COMMENT_LINE = 293          /* TK_COMMENT_LINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "minikotlin.y"

    Expression * expr_T;
    char * string_T;
    ComplexType * type_t;
    char char_t;
    int int_t;
    float float_t;
    bool bool_t;
    Statement * statement_t;
    list<Expression *> * expr_list_t;
    list<Statement *> * statement_list_t;
    list<Declaration *> * declaration_list_t;

#line 122 "tokens.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TOKENS_H_INCLUDED  */

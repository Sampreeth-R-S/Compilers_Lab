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

#ifndef YY_YY_ASSGN_5_21CS30059_21CS30038_TAB_H_INCLUDED
# define YY_YY_ASSGN_5_21CS30059_21CS30038_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER = 259,                 /* INTEGER  */
    FLOATING_CONSTANT = 260,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 261,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    ENUM = 263,                    /* ENUM  */
    TYPE_SPECIFIER_TOKEN = 264,    /* TYPE_SPECIFIER_TOKEN  */
    STORAGE_CLASS_SPECIFIER = 265, /* STORAGE_CLASS_SPECIFIER  */
    STATIC_TOKEN = 266,            /* STATIC_TOKEN  */
    FUNCTION_SPECIFIER = 267,      /* FUNCTION_SPECIFIER  */
    CASE = 268,                    /* CASE  */
    DEFAULT = 269,                 /* DEFAULT  */
    SIZEOF = 270,                  /* SIZEOF  */
    ELSE = 271,                    /* ELSE  */
    SWITCH = 272,                  /* SWITCH  */
    WHILE = 273,                   /* WHILE  */
    DO = 274,                      /* DO  */
    FOR = 275,                     /* FOR  */
    GOTO = 276,                    /* GOTO  */
    CONTINUE = 277,                /* CONTINUE  */
    BREAK = 278,                   /* BREAK  */
    RETURN = 279,                  /* RETURN  */
    TYPE_QUALIFIER = 280,          /* TYPE_QUALIFIER  */
    FLOAT = 281,                   /* FLOAT  */
    ASSIGNMENT_OPERATOR = 282,     /* ASSIGNMENT_OPERATOR  */
    ENUMERATION_CONST = 283,       /* ENUMERATION_CONST  */
    KEYWORD = 284,                 /* KEYWORD  */
    PUNCTUATOR = 285,              /* PUNCTUATOR  */
    ERROR = 286,                   /* ERROR  */
    VOID = 287,                    /* VOID  */
    CHAR = 288,                    /* CHAR  */
    SHORT = 289,                   /* SHORT  */
    INT = 290,                     /* INT  */
    LONG = 291,                    /* LONG  */
    DOUBLE = 292,                  /* DOUBLE  */
    SIGNED = 293,                  /* SIGNED  */
    UNSIGNED = 294,                /* UNSIGNED  */
    BOOL = 295,                    /* BOOL  */
    COMPLEX = 296,                 /* COMPLEX  */
    IMAGINARY = 297,               /* IMAGINARY  */
    IF = 298,                      /* IF  */
    EQUALS = 299,                  /* EQUALS  */
    INCREMENT = 300,               /* INCREMENT  */
    DECREMENT = 301,               /* DECREMENT  */
    AND = 302,                     /* AND  */
    STAR = 303,                    /* STAR  */
    PLUS = 304,                    /* PLUS  */
    MINUS = 305,                   /* MINUS  */
    TILDE = 306,                   /* TILDE  */
    NOT = 307,                     /* NOT  */
    DIV = 308,                     /* DIV  */
    MOD = 309,                     /* MOD  */
    LEFT_SHIFT = 310,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 311,             /* RIGHT_SHIFT  */
    LESS_THAN = 312,               /* LESS_THAN  */
    GREATER_THAN = 313,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 314,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 315,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 316,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 317,            /* NOT_EQUAL_TO  */
    XOR = 318,                     /* XOR  */
    OR = 319,                      /* OR  */
    AND_AND = 320,                 /* AND_AND  */
    OR_OR = 321,                   /* OR_OR  */
    QUESTION = 322,                /* QUESTION  */
    COLON = 323,                   /* COLON  */
    SEMICOLON = 324,               /* SEMICOLON  */
    COMMA = 325,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 326,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 327,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 328,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 329,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 330,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 331,       /* RIGHT_PARENTHESIS  */
    DOT = 332,                     /* DOT  */
    ELLIPSIS = 333,                /* ELLIPSIS  */
    ARROW = 334,                   /* ARROW  */
    LOWER_THAN_ELSE = 335          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "assgn_5_21CS30059_21CS30038.y"

    int value;
    int instr;
    int intval;
    char unaryOp;
    float floatval;
    char* charval;
    int numParams;
    ttype* ptr;
    expression* exp;
    aarray* Array;
    symbol* pointer;
    statement* stmt;

#line 159 "assgn_5_21CS30059_21CS30038.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASSGN_5_21CS30059_21CS30038_TAB_H_INCLUDED  */

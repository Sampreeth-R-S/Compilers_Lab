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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    ENUM = 258,                    /* ENUM  */
    TYPE_SPECIFIER_TOKEN = 259,    /* TYPE_SPECIFIER_TOKEN  */
    STORAGE_CLASS_SPECIFIER = 260, /* STORAGE_CLASS_SPECIFIER  */
    STATIC_TOKEN = 261,            /* STATIC_TOKEN  */
    FUNCTION_SPECIFIER = 262,      /* FUNCTION_SPECIFIER  */
    CASE = 263,                    /* CASE  */
    DEFAULT = 264,                 /* DEFAULT  */
    SIZEOF = 265,                  /* SIZEOF  */
    OF = 266,                      /* OF  */
    ELSE = 267,                    /* ELSE  */
    SWITCH = 268,                  /* SWITCH  */
    WHILE = 269,                   /* WHILE  */
    DO = 270,                      /* DO  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    CONTINUE = 273,                /* CONTINUE  */
    BREAK = 274,                   /* BREAK  */
    RETURN = 275,                  /* RETURN  */
    TYPE_QUALIFIER = 276,          /* TYPE_QUALIFIER  */
    KEYWORD = 277,                 /* KEYWORD  */
    ENUMERATION_CONST = 278,       /* ENUMERATION_CONST  */
    IDENTIFIER = 279,              /* IDENTIFIER  */
    INTEGER = 280,                 /* INTEGER  */
    FLOAT = 281,                   /* FLOAT  */
    PUNCTUATOR = 282,              /* PUNCTUATOR  */
    CHARACTER_CONSTANT = 283,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 284,          /* STRING_LITERAL  */
    ASSIGNMENT_OPERATOR = 285,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 286,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 287,      /* MULTI_LINE_COMMENT  */
    ERROR = 288,                   /* ERROR  */
    IF = 289,                      /* IF  */
    EQUALS = 290,                  /* EQUALS  */
    INCREMENT = 291,               /* INCREMENT  */
    DECREMENT = 292,               /* DECREMENT  */
    AND = 293,                     /* AND  */
    STAR = 294,                    /* STAR  */
    PLUS = 295,                    /* PLUS  */
    MINUS = 296,                   /* MINUS  */
    TILDE = 297,                   /* TILDE  */
    NOT = 298,                     /* NOT  */
    DIV = 299,                     /* DIV  */
    MOD = 300,                     /* MOD  */
    LEFT_SHIFT = 301,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 302,             /* RIGHT_SHIFT  */
    LESS_THAN = 303,               /* LESS_THAN  */
    GREATER_THAN = 304,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 305,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 306,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 307,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 308,            /* NOT_EQUAL_TO  */
    XOR = 309,                     /* XOR  */
    OR = 310,                      /* OR  */
    AND_AND = 311,                 /* AND_AND  */
    OR_OR = 312,                   /* OR_OR  */
    QUESTION = 313,                /* QUESTION  */
    COLON = 314,                   /* COLON  */
    SEMICOLON = 315,               /* SEMICOLON  */
    COMMA = 316,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 317,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 318,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 319,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 320,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 321,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 322,       /* RIGHT_PARENTHESIS  */
    DOT = 323,                     /* DOT  */
    ELLIPSIS = 324,                /* ELLIPSIS  */
    ARROW = 325,                   /* ARROW  */
    LOWER_THAN_ELSE = 326          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ENUM 258
#define TYPE_SPECIFIER_TOKEN 259
#define STORAGE_CLASS_SPECIFIER 260
#define STATIC_TOKEN 261
#define FUNCTION_SPECIFIER 262
#define CASE 263
#define DEFAULT 264
#define SIZEOF 265
#define OF 266
#define ELSE 267
#define SWITCH 268
#define WHILE 269
#define DO 270
#define FOR 271
#define GOTO 272
#define CONTINUE 273
#define BREAK 274
#define RETURN 275
#define TYPE_QUALIFIER 276
#define KEYWORD 277
#define ENUMERATION_CONST 278
#define IDENTIFIER 279
#define INTEGER 280
#define FLOAT 281
#define PUNCTUATOR 282
#define CHARACTER_CONSTANT 283
#define STRING_LITERAL 284
#define ASSIGNMENT_OPERATOR 285
#define SINGLE_LINE_COMMENT 286
#define MULTI_LINE_COMMENT 287
#define ERROR 288
#define IF 289
#define EQUALS 290
#define INCREMENT 291
#define DECREMENT 292
#define AND 293
#define STAR 294
#define PLUS 295
#define MINUS 296
#define TILDE 297
#define NOT 298
#define DIV 299
#define MOD 300
#define LEFT_SHIFT 301
#define RIGHT_SHIFT 302
#define LESS_THAN 303
#define GREATER_THAN 304
#define LESS_THAN_EQUAL 305
#define GREATER_THAN_EQUAL 306
#define EQUAL_TO 307
#define NOT_EQUAL_TO 308
#define XOR 309
#define OR 310
#define AND_AND 311
#define OR_OR 312
#define QUESTION 313
#define COLON 314
#define SEMICOLON 315
#define COMMA 316
#define LEFT_SQUARE_BRACKET 317
#define RIGHT_SQUARE_BRACKET 318
#define LEFT_CURLY_BRACKET 319
#define RIGHT_CURLY_BRACKET 320
#define LEFT_PARENTHESIS 321
#define RIGHT_PARENTHESIS 322
#define DOT 323
#define ELLIPSIS 324
#define ARROW 325
#define LOWER_THAN_ELSE 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "assgn_4_21CS30059_21CS30038.y"

    int value;

#line 213 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

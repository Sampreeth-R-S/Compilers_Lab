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
    FLOAT = 260,                   /* FLOAT  */
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
    OF = 271,                      /* OF  */
    ELSE = 272,                    /* ELSE  */
    SWITCH = 273,                  /* SWITCH  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    FOR = 276,                     /* FOR  */
    GOTO = 277,                    /* GOTO  */
    CONTINUE = 278,                /* CONTINUE  */
    BREAK = 279,                   /* BREAK  */
    RETURN = 280,                  /* RETURN  */
    TYPE_QUALIFIER = 281,          /* TYPE_QUALIFIER  */
    KEYWORD = 282,                 /* KEYWORD  */
    ENUMERATION_CONST = 283,       /* ENUMERATION_CONST  */
    PUNCTUATOR = 284,              /* PUNCTUATOR  */
    ASSIGNMENT_OPERATOR = 285,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 286,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 287,      /* MULTI_LINE_COMMENT  */
    ERROR = 288,                   /* ERROR  */
    VOID = 289,                    /* VOID  */
    CHAR = 290,                    /* CHAR  */
    SHORT = 291,                   /* SHORT  */
    INT = 292,                     /* INT  */
    LONG = 293,                    /* LONG  */
    DOUBLE = 294,                  /* DOUBLE  */
    SIGNED = 295,                  /* SIGNED  */
    UNSIGNED = 296,                /* UNSIGNED  */
    BOOL = 297,                    /* BOOL  */
    COMPLEX = 298,                 /* COMPLEX  */
    IMAGINARY = 299,               /* IMAGINARY  */
    IF = 300,                      /* IF  */
    EQUALS = 301,                  /* EQUALS  */
    INCREMENT = 302,               /* INCREMENT  */
    DECREMENT = 303,               /* DECREMENT  */
    AND = 304,                     /* AND  */
    STAR = 305,                    /* STAR  */
    PLUS = 306,                    /* PLUS  */
    MINUS = 307,                   /* MINUS  */
    TILDE = 308,                   /* TILDE  */
    NOT = 309,                     /* NOT  */
    DIV = 310,                     /* DIV  */
    MOD = 311,                     /* MOD  */
    LEFT_SHIFT = 312,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 313,             /* RIGHT_SHIFT  */
    LESS_THAN = 314,               /* LESS_THAN  */
    GREATER_THAN = 315,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 316,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 317,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 318,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 319,            /* NOT_EQUAL_TO  */
    XOR = 320,                     /* XOR  */
    OR = 321,                      /* OR  */
    AND_AND = 322,                 /* AND_AND  */
    OR_OR = 323,                   /* OR_OR  */
    QUESTION = 324,                /* QUESTION  */
    COLON = 325,                   /* COLON  */
    SEMICOLON = 326,               /* SEMICOLON  */
    COMMA = 327,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 328,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 329,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 330,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 331,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 332,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 333,       /* RIGHT_PARENTHESIS  */
    DOT = 334,                     /* DOT  */
    ELLIPSIS = 335,                /* ELLIPSIS  */
    ARROW = 336,                   /* ARROW  */
    LOWER_THAN_ELSE = 337          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define INTEGER 259
#define FLOAT 260
#define CHARACTER_CONSTANT 261
#define STRING_LITERAL 262
#define ENUM 263
#define TYPE_SPECIFIER_TOKEN 264
#define STORAGE_CLASS_SPECIFIER 265
#define STATIC_TOKEN 266
#define FUNCTION_SPECIFIER 267
#define CASE 268
#define DEFAULT 269
#define SIZEOF 270
#define OF 271
#define ELSE 272
#define SWITCH 273
#define WHILE 274
#define DO 275
#define FOR 276
#define GOTO 277
#define CONTINUE 278
#define BREAK 279
#define RETURN 280
#define TYPE_QUALIFIER 281
#define KEYWORD 282
#define ENUMERATION_CONST 283
#define PUNCTUATOR 284
#define ASSIGNMENT_OPERATOR 285
#define SINGLE_LINE_COMMENT 286
#define MULTI_LINE_COMMENT 287
#define ERROR 288
#define VOID 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define DOUBLE 294
#define SIGNED 295
#define UNSIGNED 296
#define BOOL 297
#define COMPLEX 298
#define IMAGINARY 299
#define IF 300
#define EQUALS 301
#define INCREMENT 302
#define DECREMENT 303
#define AND 304
#define STAR 305
#define PLUS 306
#define MINUS 307
#define TILDE 308
#define NOT 309
#define DIV 310
#define MOD 311
#define LEFT_SHIFT 312
#define RIGHT_SHIFT 313
#define LESS_THAN 314
#define GREATER_THAN 315
#define LESS_THAN_EQUAL 316
#define GREATER_THAN_EQUAL 317
#define EQUAL_TO 318
#define NOT_EQUAL_TO 319
#define XOR 320
#define OR 321
#define AND_AND 322
#define OR_OR 323
#define QUESTION 324
#define COLON 325
#define SEMICOLON 326
#define COMMA 327
#define LEFT_SQUARE_BRACKET 328
#define RIGHT_SQUARE_BRACKET 329
#define LEFT_CURLY_BRACKET 330
#define RIGHT_CURLY_BRACKET 331
#define LEFT_PARENTHESIS 332
#define RIGHT_PARENTHESIS 333
#define DOT 334
#define ELLIPSIS 335
#define ARROW 336
#define LOWER_THAN_ELSE 337

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "assgn_4_21CS30059_21CS30038.y"

    int value;
    expression* exp;
    int intval;
    float floatval;
    char* charval;
    aarray* Array;
    int numParams;
    char operator;
    symbol* pointer;
    statement stmt;
    ttype* ptr;

#line 245 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

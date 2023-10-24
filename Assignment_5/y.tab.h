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
    FLOAT = 284,                   /* FLOAT  */
    PUNCTUATOR = 285,              /* PUNCTUATOR  */
    ASSIGNMENT_OPERATOR = 286,     /* ASSIGNMENT_OPERATOR  */
    SINGLE_LINE_COMMENT = 287,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 288,      /* MULTI_LINE_COMMENT  */
    ERROR = 289,                   /* ERROR  */
    VOID = 290,                    /* VOID  */
    CHAR = 291,                    /* CHAR  */
    SHORT = 292,                   /* SHORT  */
    INT = 293,                     /* INT  */
    LONG = 294,                    /* LONG  */
    DOUBLE = 295,                  /* DOUBLE  */
    SIGNED = 296,                  /* SIGNED  */
    UNSIGNED = 297,                /* UNSIGNED  */
    BOOL = 298,                    /* BOOL  */
    COMPLEX = 299,                 /* COMPLEX  */
    IMAGINARY = 300,               /* IMAGINARY  */
    IF = 301,                      /* IF  */
    EQUALS = 302,                  /* EQUALS  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    AND = 305,                     /* AND  */
    STAR = 306,                    /* STAR  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    TILDE = 309,                   /* TILDE  */
    NOT = 310,                     /* NOT  */
    DIV = 311,                     /* DIV  */
    MOD = 312,                     /* MOD  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL_TO = 319,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 320,            /* NOT_EQUAL_TO  */
    XOR = 321,                     /* XOR  */
    OR = 322,                      /* OR  */
    AND_AND = 323,                 /* AND_AND  */
    OR_OR = 324,                   /* OR_OR  */
    QUESTION = 325,                /* QUESTION  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    COMMA = 328,                   /* COMMA  */
    LEFT_SQUARE_BRACKET = 329,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 330,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_CURLY_BRACKET = 331,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 332,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESIS = 333,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 334,       /* RIGHT_PARENTHESIS  */
    DOT = 335,                     /* DOT  */
    ELLIPSIS = 336,                /* ELLIPSIS  */
    ARROW = 337,                   /* ARROW  */
    LOWER_THAN_ELSE = 338          /* LOWER_THAN_ELSE  */
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
#define FLOATING_CONSTANT 260
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
#define FLOAT 284
#define PUNCTUATOR 285
#define ASSIGNMENT_OPERATOR 286
#define SINGLE_LINE_COMMENT 287
#define MULTI_LINE_COMMENT 288
#define ERROR 289
#define VOID 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define DOUBLE 295
#define SIGNED 296
#define UNSIGNED 297
#define BOOL 298
#define COMPLEX 299
#define IMAGINARY 300
#define IF 301
#define EQUALS 302
#define INCREMENT 303
#define DECREMENT 304
#define AND 305
#define STAR 306
#define PLUS 307
#define MINUS 308
#define TILDE 309
#define NOT 310
#define DIV 311
#define MOD 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_EQUAL 317
#define GREATER_THAN_EQUAL 318
#define EQUAL_TO 319
#define NOT_EQUAL_TO 320
#define XOR 321
#define OR 322
#define AND_AND 323
#define OR_OR 324
#define QUESTION 325
#define COLON 326
#define SEMICOLON 327
#define COMMA 328
#define LEFT_SQUARE_BRACKET 329
#define RIGHT_SQUARE_BRACKET 330
#define LEFT_CURLY_BRACKET 331
#define RIGHT_CURLY_BRACKET 332
#define LEFT_PARENTHESIS 333
#define RIGHT_PARENTHESIS 334
#define DOT 335
#define ELLIPSIS 336
#define ARROW 337
#define LOWER_THAN_ELSE 338

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "assgn_4_21CS30059_21CS30038.y"

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

#line 248 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

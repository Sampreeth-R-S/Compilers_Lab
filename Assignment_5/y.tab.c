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




/* First part of user prologue.  */
#line 1 "assgn_4_21CS30059_21CS30038.y"

    #include <iostream>
    #include "translator.h"
    using namespace std;
    extern int yylex();
    //extern int yylineno=1;
    extern int lineno;
    extern string vartype;
    extern char* yytext;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, lineno);
        printf("Unable to parse: %s",yytext);
    }

#line 86 "y.tab.c"

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
#line 16 "assgn_4_21CS30059_21CS30038.y"

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

#line 315 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_CHARACTER_CONSTANT = 6,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_ENUM = 8,                       /* ENUM  */
  YYSYMBOL_TYPE_SPECIFIER_TOKEN = 9,       /* TYPE_SPECIFIER_TOKEN  */
  YYSYMBOL_STORAGE_CLASS_SPECIFIER = 10,   /* STORAGE_CLASS_SPECIFIER  */
  YYSYMBOL_STATIC_TOKEN = 11,              /* STATIC_TOKEN  */
  YYSYMBOL_FUNCTION_SPECIFIER = 12,        /* FUNCTION_SPECIFIER  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_SIZEOF = 15,                    /* SIZEOF  */
  YYSYMBOL_OF = 16,                        /* OF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 24,                     /* BREAK  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_TYPE_QUALIFIER = 26,            /* TYPE_QUALIFIER  */
  YYSYMBOL_KEYWORD = 27,                   /* KEYWORD  */
  YYSYMBOL_ENUMERATION_CONST = 28,         /* ENUMERATION_CONST  */
  YYSYMBOL_PUNCTUATOR = 29,                /* PUNCTUATOR  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 30,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_SINGLE_LINE_COMMENT = 31,       /* SINGLE_LINE_COMMENT  */
  YYSYMBOL_MULTI_LINE_COMMENT = 32,        /* MULTI_LINE_COMMENT  */
  YYSYMBOL_ERROR = 33,                     /* ERROR  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 40,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 41,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 43,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 44,                 /* IMAGINARY  */
  YYSYMBOL_IF = 45,                        /* IF  */
  YYSYMBOL_EQUALS = 46,                    /* EQUALS  */
  YYSYMBOL_INCREMENT = 47,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 48,                 /* DECREMENT  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_STAR = 50,                      /* STAR  */
  YYSYMBOL_PLUS = 51,                      /* PLUS  */
  YYSYMBOL_MINUS = 52,                     /* MINUS  */
  YYSYMBOL_TILDE = 53,                     /* TILDE  */
  YYSYMBOL_NOT = 54,                       /* NOT  */
  YYSYMBOL_DIV = 55,                       /* DIV  */
  YYSYMBOL_MOD = 56,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 57,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 58,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 59,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 60,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 61,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 62,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL_TO = 63,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 64,              /* NOT_EQUAL_TO  */
  YYSYMBOL_XOR = 65,                       /* XOR  */
  YYSYMBOL_OR = 66,                        /* OR  */
  YYSYMBOL_AND_AND = 67,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 68,                     /* OR_OR  */
  YYSYMBOL_QUESTION = 69,                  /* QUESTION  */
  YYSYMBOL_COLON = 70,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 71,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 72,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 73,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 74,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 75,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 76,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 77,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 78,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_DOT = 79,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 80,                  /* ELLIPSIS  */
  YYSYMBOL_ARROW = 81,                     /* ARROW  */
  YYSYMBOL_LOWER_THAN_ELSE = 82,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_84_primary_expression = 84,     /* primary-expression  */
  YYSYMBOL_85_postfix_expression = 85,     /* postfix-expression  */
  YYSYMBOL_86_argument_expression_list = 86, /* argument-expression-list  */
  YYSYMBOL_87_argument_expression_listopt = 87, /* argument-expression-listopt  */
  YYSYMBOL_88_unary_expression = 88,       /* unary-expression  */
  YYSYMBOL_89_unary_operator = 89,         /* unary-operator  */
  YYSYMBOL_90_cast_expression = 90,        /* cast-expression  */
  YYSYMBOL_91_multiplicative_expression = 91, /* multiplicative-expression  */
  YYSYMBOL_92_additive_expression = 92,    /* additive-expression  */
  YYSYMBOL_93_shift_expression = 93,       /* shift-expression  */
  YYSYMBOL_94_relational_expression = 94,  /* relational-expression  */
  YYSYMBOL_95_equality_expression = 95,    /* equality-expression  */
  YYSYMBOL_96_AND_expression = 96,         /* AND-expression  */
  YYSYMBOL_97_exclusive_OR_expression = 97, /* exclusive-OR-expression  */
  YYSYMBOL_98_inclusive_OR_expression = 98, /* inclusive-OR-expression  */
  YYSYMBOL_99_logical_AND_expression = 99, /* logical-AND-expression  */
  YYSYMBOL_100_logical_OR_expression = 100, /* logical-OR-expression  */
  YYSYMBOL_101_conditional_expression = 101, /* conditional-expression  */
  YYSYMBOL_M = 102,                        /* M  */
  YYSYMBOL_N = 103,                        /* N  */
  YYSYMBOL_104_assignment_expression = 104, /* assignment-expression  */
  YYSYMBOL_105_assignment_operator = 105,  /* assignment-operator  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_107_constant_expression = 107,  /* constant-expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_109_declaration_specifiers = 109, /* declaration-specifiers  */
  YYSYMBOL_110_type_qualifier = 110,       /* type-qualifier  */
  YYSYMBOL_111_init_declarator_list = 111, /* init-declarator-list  */
  YYSYMBOL_112_init_declarator = 112,      /* init-declarator  */
  YYSYMBOL_113_type_specifier = 113,       /* type-specifier  */
  YYSYMBOL_114_storage_class_specifier = 114, /* storage-class-specifier  */
  YYSYMBOL_115_specifier_qualifier_list = 115, /* specifier-qualifier-list  */
  YYSYMBOL_116_specifier_qualifier_listopt = 116, /* specifier-qualifier-listopt  */
  YYSYMBOL_117_enum_specifier = 117,       /* enum-specifier  */
  YYSYMBOL_identifieropt = 118,            /* identifieropt  */
  YYSYMBOL_119_enumerator_list = 119,      /* enumerator-list  */
  YYSYMBOL_enumerator = 120,               /* enumerator  */
  YYSYMBOL_121_function_specifier = 121,   /* function-specifier  */
  YYSYMBOL_declarator = 122,               /* declarator  */
  YYSYMBOL_123_direct_declarator = 123,    /* direct-declarator  */
  YYSYMBOL_124_type_qualifier_listopt = 124, /* type-qualifier-listopt  */
  YYSYMBOL_pointer = 125,                  /* pointer  */
  YYSYMBOL_126_type_qualifier_list = 126,  /* type-qualifier-list  */
  YYSYMBOL_127_parameter_type_list = 127,  /* parameter-type-list  */
  YYSYMBOL_128_parameter_list = 128,       /* parameter-list  */
  YYSYMBOL_129_parameter_declaration = 129, /* parameter-declaration  */
  YYSYMBOL_130_identifier_list = 130,      /* identifier-list  */
  YYSYMBOL_131_type_name = 131,            /* type-name  */
  YYSYMBOL_initializer = 132,              /* initializer  */
  YYSYMBOL_133_initializer_list = 133,     /* initializer-list  */
  YYSYMBOL_designationopt = 134,           /* designationopt  */
  YYSYMBOL_designation = 135,              /* designation  */
  YYSYMBOL_136_designator_list = 136,      /* designator-list  */
  YYSYMBOL_designator = 137,               /* designator  */
  YYSYMBOL_statement = 138,                /* statement  */
  YYSYMBOL_139_loop_statement = 139,       /* loop-statement  */
  YYSYMBOL_140_labeled_statement = 140,    /* labeled-statement  */
  YYSYMBOL_141_compound_statement = 141,   /* compound-statement  */
  YYSYMBOL_A = 142,                        /* A  */
  YYSYMBOL_143_change_table = 143,         /* change-table  */
  YYSYMBOL_144_block_item_listopt = 144,   /* block-item-listopt  */
  YYSYMBOL_145_block_item_list = 145,      /* block-item-list  */
  YYSYMBOL_146_block_item = 146,           /* block-item  */
  YYSYMBOL_147_expression_statement = 147, /* expression-statement  */
  YYSYMBOL_148_selection_statement = 148,  /* selection-statement  */
  YYSYMBOL_149_iteration_statement = 149,  /* iteration-statement  */
  YYSYMBOL_F = 150,                        /* F  */
  YYSYMBOL_W = 151,                        /* W  */
  YYSYMBOL_D = 152,                        /* D  */
  YYSYMBOL_153_jump_statement = 153,       /* jump-statement  */
  YYSYMBOL_154_translation_unit = 154,     /* translation-unit  */
  YYSYMBOL_155_external_declaration = 155, /* external-declaration  */
  YYSYMBOL_156_function_definition = 156,  /* function-definition  */
  YYSYMBOL_157_declaration_listopt = 157,  /* declaration-listopt  */
  YYSYMBOL_158_declaration_list = 158      /* declaration-list  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1004

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   337


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    66,    71,    76,    81,    87,    90,    96,
     115,   125,   126,   127,   133,   139,   140,   143,   147,   153,
     156,   159,   162,   166,   170,   201,   202,   205,   208,   211,
     214,   217,   220,   225,   228,   234,   250,   262,   274,   284,
     287,   299,   313,   316,   328,   342,   345,   360,   375,   390,
     407,   410,   427,   446,   449,   466,   469,   486,   489,   506,
     509,   523,   526,   540,   543,   562,   567,   575,   578,   597,
     598,   601,   604,   607,   610,   611,   618,   619,   620,   621,
     622,   623,   624,   625,   628,   631,   632,   635,   638,   647,
     650,   653,   656,   659,   662,   665,   668,   671,   674,   677,
     680,   683,   688,   689,   692,   693,   696,   697,   700,   701,
     702,   705,   706,   709,   710,   713,   714,   717,   720,   729,
     732,   736,   739,   742,   745,   776,   796,   797,   798,   799,
     800,   801,   812,   813,   827,   828,   831,   834,   839,   840,
     843,   844,   847,   848,   851,   852,   855,   856,   859,   862,
     865,   866,   869,   870,   873,   874,   877,   880,   881,   884,
     885,   888,   889,   892,   896,   899,   902,   907,   908,   912,
     915,   918,   923,   924,   925,   928,   933,   944,   958,   961,
     966,   969,   975,   978,   983,   986,   991,  1000,  1009,  1012,
    1023,  1033,  1041,  1049,  1060,  1071,  1082,  1094,  1098,  1102,
    1107,  1108,  1111,  1114,  1118,  1124,  1125,  1128,  1129,  1132,
    1139,  1140,  1143,  1144
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INTEGER", "FLOAT", "CHARACTER_CONSTANT", "STRING_LITERAL", "ENUM",
  "TYPE_SPECIFIER_TOKEN", "STORAGE_CLASS_SPECIFIER", "STATIC_TOKEN",
  "FUNCTION_SPECIFIER", "CASE", "DEFAULT", "SIZEOF", "OF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "TYPE_QUALIFIER", "KEYWORD", "ENUMERATION_CONST", "PUNCTUATOR",
  "ASSIGNMENT_OPERATOR", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT",
  "ERROR", "VOID", "CHAR", "SHORT", "INT", "LONG", "DOUBLE", "SIGNED",
  "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "IF", "EQUALS", "INCREMENT",
  "DECREMENT", "AND", "STAR", "PLUS", "MINUS", "TILDE", "NOT", "DIV",
  "MOD", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL_TO", "NOT_EQUAL_TO",
  "XOR", "OR", "AND_AND", "OR_OR", "QUESTION", "COLON", "SEMICOLON",
  "COMMA", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "DOT", "ELLIPSIS", "ARROW", "LOWER_THAN_ELSE",
  "$accept", "primary-expression", "postfix-expression",
  "argument-expression-list", "argument-expression-listopt",
  "unary-expression", "unary-operator", "cast-expression",
  "multiplicative-expression", "additive-expression", "shift-expression",
  "relational-expression", "equality-expression", "AND-expression",
  "exclusive-OR-expression", "inclusive-OR-expression",
  "logical-AND-expression", "logical-OR-expression",
  "conditional-expression", "M", "N", "assignment-expression",
  "assignment-operator", "expression", "constant-expression",
  "declaration", "declaration-specifiers", "type-qualifier",
  "init-declarator-list", "init-declarator", "type-specifier",
  "storage-class-specifier", "specifier-qualifier-list",
  "specifier-qualifier-listopt", "enum-specifier", "identifieropt",
  "enumerator-list", "enumerator", "function-specifier", "declarator",
  "direct-declarator", "type-qualifier-listopt", "pointer",
  "type-qualifier-list", "parameter-type-list", "parameter-list",
  "parameter-declaration", "identifier-list", "type-name", "initializer",
  "initializer-list", "designationopt", "designation", "designator-list",
  "designator", "statement", "loop-statement", "labeled-statement",
  "compound-statement", "A", "change-table", "block-item-listopt",
  "block-item-list", "block-item", "expression-statement",
  "selection-statement", "iteration-statement", "F", "W", "D",
  "jump-statement", "translation-unit", "external-declaration",
  "function-definition", "declaration-listopt", "declaration-list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-331)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-212)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     147,   147,  -331,  -331,  -331,  -331,  -331,    67,   147,   147,
     147,   439,  -331,  -331,  -331,  -331,    -2,  -331,    30,   124,
    -331,   198,   -42,    31,  -331,  -331,  -331,  -331,  -331,  -331,
     -14,    19,   -21,  -331,    30,   542,  -331,    67,  -331,   147,
     215,    79,   -42,  -331,  -331,  -331,  -331,    73,  -331,  -331,
    -331,  -331,  -331,   877,   890,   890,  -331,  -331,  -331,  -331,
    -331,  -331,     2,   350,  -331,   -10,    -4,   908,  -331,    72,
     165,   171,   221,   169,    65,    61,    70,    93,   180,  -331,
    -331,  -331,   109,  -331,   718,   101,  -331,   119,   467,  -331,
      68,   318,   350,  -331,   350,  -331,  -331,   908,   194,   -16,
     542,  -331,   -24,  -331,   940,   197,   960,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,   100,
     960,  -331,  -331,   126,  -331,  -331,   908,   908,   210,   231,
    -331,  -331,   908,  -331,  -331,   908,   908,   908,   908,   908,
     908,   908,   908,   908,   908,   908,   908,   908,   908,   908,
     908,  -331,  -331,   167,   298,   172,   735,  -331,  -331,   908,
     178,  -331,   203,   239,  -331,  -331,    30,   176,   212,  -331,
     220,   228,  -331,   214,  -331,   -32,  -331,  -331,  -331,  -331,
     240,   250,  -331,  -331,  -331,   908,  -331,  -331,   749,    77,
     242,   248,  -331,  -331,  -331,  -331,  -331,  -331,  -331,    72,
      72,   165,   165,   171,   171,   171,   171,   221,   221,   169,
      65,    61,   908,   908,  -331,   261,   908,   262,   256,  -331,
    -331,  -331,   332,   265,   266,   801,   263,  -331,  -331,   168,
    -331,  -331,  -331,  -331,   283,   284,  -331,  -331,  -331,  -331,
    -331,  -331,   264,   267,  -331,  -331,  -331,  -331,  -331,   143,
     286,   286,  -331,  -331,   542,   336,  -331,     2,  -331,  -331,
     908,  -331,    70,    93,   908,   410,   272,   410,   908,   285,
     288,   287,   295,  -331,  -331,  -331,   185,   908,  -331,  -331,
    -331,   298,  -331,  -331,  -331,  -331,  -331,   321,     7,  -331,
      63,  -331,   296,  -331,   410,  -331,   104,  -331,  -331,   635,
    -331,  -331,  -331,   296,   298,  -331,   908,    37,  -331,   -11,
    -331,   300,  -331,   410,  -331,   298,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   293,   301,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,   302,   353,   666,  -331,  -331,   908,   908,  -331,
     297,  -331,  -331,   410,  -331,   107,   360,   908,   814,   814,
    -331,   305,   304,   120,  -331,  -331,   365,  -331,   635,   908,
     312,   908,   908,  -331,   298,  -331,   133,  -331,   296,   296,
     410,   319,   334,   328,   329,  -331,  -331,  -331,  -331,  -331,
     485,   560,   298,  -331,   298,  -331,   333,   335,  -331,  -331
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,   102,   103,   117,    84,   208,     0,    81,    77,
      83,     0,   205,   207,    78,   120,   135,    75,     0,     0,
      85,    87,   119,     0,    80,    76,    82,     1,   206,   138,
     136,   134,     0,    74,     0,     0,   212,     0,   177,   210,
       0,   177,   118,   137,   139,   121,    86,    87,     2,     3,
       4,     5,     6,     0,     0,     0,    27,    28,    29,    30,
      31,    32,   155,     0,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    67,
     149,    88,     0,   213,     0,    28,   125,     0,     0,   146,
       0,     0,     0,    25,     0,    22,    23,     0,     0,     0,
       0,   154,     0,   157,     4,   112,   107,    89,    90,    91,
      92,    93,    95,    96,    97,    98,    99,   100,    71,     0,
     107,   148,   101,     0,    13,    14,     0,    20,     0,     0,
      70,    69,     0,    33,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    65,     0,   179,     0,     0,   130,   124,     0,
      28,   122,     0,     0,   132,   133,   145,     0,   140,   142,
       0,     0,    73,     0,   160,   155,   150,   152,   156,   158,
     109,     0,    94,   106,   105,     0,     7,   104,     0,     0,
      19,     0,    17,    11,    12,    68,    36,    37,    38,    40,
      41,    43,    44,    46,    47,    48,    49,    51,    52,    54,
      56,    58,     0,     0,    65,     2,     0,     0,     0,   198,
     199,   197,     0,     0,     0,     0,     0,   185,   176,     0,
     182,   183,   161,   162,     0,    65,   180,   163,   164,   165,
     166,   127,     0,     0,   129,   123,   147,   144,   131,     0,
      26,     0,   159,   151,     0,     0,    72,   155,    34,     9,
       0,    10,    60,    62,     0,     0,     0,     0,     0,     0,
      65,     0,     0,   201,   202,   204,     0,     0,   177,   184,
     209,     0,   126,   128,   141,   143,   153,   115,     0,   113,
       0,    18,    66,   172,     0,   174,     0,   176,    65,     0,
     176,   200,   203,    66,   179,   181,     0,     0,   108,   155,
      15,     0,   173,     0,   177,   179,    65,   167,   168,   169,
     170,   171,   177,     0,     0,   116,   110,   114,    16,    65,
     188,    65,     0,     0,     0,    65,   175,     0,     0,    65,
       0,    65,    65,     0,    64,     0,     0,     0,     0,     0,
      66,    65,     0,     0,    65,    65,   186,    65,     0,     0,
       0,     0,     0,    65,   179,   189,     0,   191,    66,    66,
       0,     0,     0,     0,     0,   187,   190,   192,    65,    65,
       0,     0,   179,   193,   179,   194,     0,     0,   195,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,  -331,  -331,  -331,   -51,  -331,   -59,   122,   130,
     151,   144,   260,   269,   270,   200,   206,  -331,   -92,  -104,
    -180,    18,  -331,   -62,  -202,     0,     9,  -331,  -331,   376,
    -331,  -331,   -77,   306,  -331,  -331,  -331,   114,  -331,     5,
     399,  -331,   406,   -25,  -331,  -331,   188,  -331,   -20,   -87,
     181,  -168,  -331,  -331,   338,  -240,  -330,  -247,  -331,  -117,
     -35,  -183,  -331,   160,  -233,  -238,  -194,  -331,  -331,  -331,
    -190,  -331,   431,  -331,  -331,  -331
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    64,    65,   190,   191,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   212,
     153,   118,   132,   229,   173,   230,    37,     8,    19,    20,
     120,     9,   121,   184,   122,   181,   288,   289,    10,    47,
      22,    30,    23,    31,   167,   168,   169,    90,   123,    81,
      99,   100,   101,   102,   103,   231,   316,   232,   233,   278,
      82,   234,   235,   236,   237,   238,   239,   271,   269,   270,
     240,    11,    12,    13,    38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   119,    93,    95,    96,   172,    91,   254,   134,     7,
      14,     6,    21,   177,   266,    88,   133,    24,    25,    26,
       7,    36,   178,    32,    29,   293,   130,   295,   365,   183,
     119,    40,   119,    15,    15,    41,    16,   124,   125,    83,
     287,    97,   131,   183,   253,    44,   133,    98,   213,    97,
     383,   385,   317,    80,   312,    98,   175,    45,    87,   156,
     176,   319,    97,   126,   189,   328,   318,   127,    98,   128,
      15,   129,   170,   330,   171,    97,   196,   197,   198,   307,
      16,    98,    89,   308,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     166,   342,   155,   350,   325,   320,   162,    18,    18,   321,
     264,   317,   311,   326,   148,   354,   355,    16,    80,    35,
     319,   324,   135,   323,   172,   318,   149,   136,   137,   258,
     375,   281,   332,   317,   317,   309,   150,   133,    17,   310,
     163,   254,   319,   319,    18,   192,   164,   318,   318,   185,
     195,   259,     1,     2,     3,     4,     1,     2,     3,     4,
     151,   133,   133,   276,   320,   133,   299,   286,   321,     5,
     356,   247,   185,     5,   242,   157,   185,   243,   186,   185,
     314,   371,   313,   322,   154,   351,   320,   320,   373,   374,
     321,   321,   185,   158,   315,    33,    34,   174,   360,   386,
     180,   387,   292,   256,   188,   185,   296,     1,     2,     3,
       4,   372,   333,   193,   172,   303,   138,   139,    48,    49,
      50,    51,    52,   284,     5,   337,    84,   338,   140,   141,
      53,   343,   146,   147,   194,   346,   214,   348,   349,   279,
     185,    29,   246,   304,    35,   344,   241,   358,   152,   -66,
     361,   362,   244,   364,   248,   133,   302,   185,   166,   370,
     199,   200,    54,    55,    56,    85,    58,    59,    60,    61,
     201,   202,    80,  -211,   380,   381,   345,   245,   291,   331,
     142,   143,   144,   145,   249,   353,   133,   334,   252,    86,
     207,   208,    63,   203,   204,   205,   206,   366,   250,   368,
     369,   215,    49,    50,    51,    52,   251,     1,     2,     3,
       4,   216,   217,    53,   260,  -111,   218,   219,   220,   221,
     222,   223,   224,   225,     5,   255,   261,     1,     2,     3,
       4,   265,   267,   268,   341,   272,   273,   274,   282,   287,
     277,   283,   294,   226,     5,    54,    55,    56,    57,    58,
      59,    60,    61,    48,    49,   104,    51,    52,   105,   280,
    -178,   257,   297,   298,   300,    53,   301,   306,   185,   227,
     329,   335,   340,   228,   347,    63,   106,   336,   339,   352,
     357,   359,   363,   367,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   376,   165,    54,    55,    56,
      57,    58,    59,    60,    61,   377,   378,   379,   209,   388,
      46,   389,   262,   215,    49,    50,    51,    52,   210,   263,
     211,   327,    42,   216,   217,    53,   187,    63,   218,   219,
     220,   221,   222,   223,   224,   225,    43,   285,   290,    27,
     179,   305,    28,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     0,     0,   226,     0,    54,    55,    56,
      57,    58,    59,    60,    61,     5,     0,     0,     0,     0,
      48,    49,    50,    51,    52,     0,     0,     0,   159,     0,
       0,   227,    53,     0,     0,   228,     0,    63,   215,    49,
      50,    51,    52,    44,     0,     0,     0,     0,   216,   217,
      53,     0,     0,   218,   219,   220,   221,   222,   223,   224,
     225,     0,     0,     0,    54,    55,    56,   160,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,    54,    55,    56,    57,    58,    59,    60,    61,
       0,   161,     0,     0,    63,    48,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,   227,    53,     0,     0,
     382,     0,    63,   215,    49,    50,    51,    52,     0,     0,
       0,     0,     0,   216,   217,    53,     0,     0,   218,   219,
     220,   221,   222,   223,   224,   225,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   226,     0,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,    62,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,   384,     0,    63,   215,    49,
      50,    51,    52,     0,     0,     0,     0,     0,   216,   217,
      53,     0,     0,   218,   219,   220,   221,   222,   223,   224,
     225,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,    52,     0,     1,     2,     3,     4,     0,
     226,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,    63,    54,    55,    56,    57,    58,    59,    60,
      61,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,   227,    48,    49,
      50,    51,    52,    63,    29,     0,     0,     0,     0,     0,
      53,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,    44,     0,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,    63,    54,    55,    56,    57,
      58,    59,    60,    61,    48,    49,    50,    51,    52,     0,
       0,     0,    63,     0,     0,     0,    53,    48,    49,    50,
      51,    52,     0,     0,   257,     0,    63,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,     0,
       0,     0,   275,     0,     0,     0,     0,     0,    63,     0,
      48,    49,    50,    51,    52,   227,     0,     0,     0,     0,
       0,    63,    53,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,   -94,     0,     0,   -94,     0,
       0,     0,     0,     0,    92,    54,    55,    56,    57,    58,
      59,    60,    61,     0,     0,   182,   -94,    94,   105,     0,
       0,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,    63,   106,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
       0,    63,    53,    54,    55,    97,    41,   175,    67,     0,
       1,    11,     7,   100,   216,    40,    67,     8,     9,    10,
      11,    21,    46,    18,    26,   265,    30,   267,   358,   106,
      92,    73,    94,     3,     3,    77,    50,    47,    48,    39,
       3,    73,    46,   120,    76,    26,    97,    79,   152,    73,
     380,   381,   299,    35,   294,    79,    72,    78,    40,    84,
      76,   299,    73,    73,   126,    76,   299,    77,    79,    79,
       3,    81,    92,   313,    94,    73,   135,   136,   137,    72,
      50,    79,     3,    76,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      91,   334,    84,   343,   306,   299,    88,    77,    77,   299,
     214,   358,   292,    76,    49,   348,   349,    50,   100,    46,
     358,   304,    50,   303,   216,   358,    65,    55,    56,   188,
     370,   235,   315,   380,   381,    72,    66,   188,    71,    76,
      72,   309,   380,   381,    77,   127,    78,   380,   381,    72,
     132,    74,     9,    10,    11,    12,     9,    10,    11,    12,
      67,   212,   213,   225,   358,   216,   270,   254,   358,    26,
     350,   166,    72,    26,   156,    74,    72,   159,    78,    72,
     297,   364,    78,   300,    75,    78,   380,   381,   368,   369,
     380,   381,    72,    74,   298,    71,    72,     3,    78,   382,
       3,   384,   264,   185,    78,    72,   268,     9,    10,    11,
      12,    78,   316,     3,   306,   277,    51,    52,     3,     4,
       5,     6,     7,    80,    26,   329,    11,   331,    57,    58,
      15,   335,    63,    64,     3,   339,    69,   341,   342,    71,
      72,    26,     3,   278,    46,   337,    74,   351,    68,    69,
     354,   355,    74,   357,    78,   306,    71,    72,   249,   363,
     138,   139,    47,    48,    49,    50,    51,    52,    53,    54,
     140,   141,   254,    75,   378,   379,   338,    74,   260,   314,
      59,    60,    61,    62,    72,   347,   337,   322,    74,    74,
     146,   147,    77,   142,   143,   144,   145,   359,    78,   361,
     362,     3,     4,     5,     6,     7,    78,     9,    10,    11,
      12,    13,    14,    15,    72,    75,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    75,    78,     9,    10,    11,
      12,    70,    70,    77,   334,     3,    71,    71,    74,     3,
      77,    74,    70,    45,    26,    47,    48,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,    76,
      76,    75,    77,    75,    77,    15,    71,    46,    72,    71,
      70,    78,    19,    75,    77,    77,    26,    76,    76,    19,
      75,    77,    17,    71,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    76,    78,    47,    48,    49,
      50,    51,    52,    53,    54,    71,    78,    78,   148,    76,
      34,    76,   212,     3,     4,     5,     6,     7,   149,   213,
     150,   307,    23,    13,    14,    15,   120,    77,    18,    19,
      20,    21,    22,    23,    24,    25,    30,   249,   257,     0,
     102,   281,    11,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    26,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      -1,    71,    15,    -1,    -1,    75,    -1,    77,     3,     4,
       5,     6,     7,    26,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    74,    -1,    -1,    77,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    15,    -1,    -1,
      75,    -1,    77,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    75,    -1,    77,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      45,    15,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    77,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    71,     3,     4,
       5,     6,     7,    77,    26,    -1,    -1,    -1,    -1,    -1,
      15,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    15,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    77,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    15,     3,     4,     5,
       6,     7,    -1,    -1,    75,    -1,    77,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    77,    -1,
       3,     4,     5,     6,     7,    71,    -1,    -1,    -1,    -1,
      -1,    77,    15,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,     5,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    77,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,     5,    26,    77,     8,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    77,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    26,   108,   109,   110,   114,
     121,   154,   155,   156,   109,     3,    50,    71,    77,   111,
     112,   122,   123,   125,   109,   109,   109,     0,   155,    26,
     124,   126,   122,    71,    72,    46,   108,   109,   157,   158,
      73,    77,   123,   125,    26,    78,   112,   122,     3,     4,
       5,     6,     7,    15,    47,    48,    49,    50,    51,    52,
      53,    54,    75,    77,    84,    85,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     104,   132,   143,   108,    11,    50,    74,   104,   126,     3,
     130,   143,    77,    88,    77,    88,    88,    73,    79,   133,
     134,   135,   136,   137,     5,     8,    26,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   104,   106,
     113,   115,   117,   131,    47,    48,    73,    77,    79,    81,
      30,    46,   105,    88,    90,    50,    55,    56,    51,    52,
      57,    58,    59,    60,    61,    62,    63,    64,    49,    65,
      66,    67,    68,   103,    75,   104,   126,    74,    74,    11,
      50,    74,   104,    72,    78,    78,   109,   127,   128,   129,
     131,   131,   101,   107,     3,    72,    76,   132,    46,   137,
       3,   118,     5,   115,   116,    72,    78,   116,    78,   106,
      86,    87,   104,     3,     3,   104,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      96,    97,   102,   102,    69,     3,    13,    14,    18,    19,
      20,    21,    22,    23,    24,    25,    45,    71,    75,   106,
     108,   138,   140,   141,   144,   145,   146,   147,   148,   149,
     153,    74,   104,   104,    74,    74,     3,   122,    78,    72,
      78,    78,    74,    76,   134,    75,   104,    75,    90,    74,
      72,    78,    98,    99,   102,    70,   107,    70,    77,   151,
     152,   150,     3,    71,    71,    71,   106,    77,   142,    71,
      76,   102,    74,    74,    80,   129,   132,     3,   119,   120,
     133,   104,   106,   138,    70,   138,   106,    77,    75,   102,
      77,    71,    71,   106,   143,   146,    46,    72,    76,    72,
      76,   103,   138,    78,   142,   102,   139,   140,   147,   148,
     149,   153,   142,   103,   144,   107,    76,   120,    76,    70,
     138,   143,   144,   102,   143,    78,    76,   102,   102,    76,
      19,   108,   147,   102,   101,   106,   102,    77,   102,   102,
     138,    78,    19,   106,   147,   147,   103,    75,   102,    77,
      78,   102,   102,    17,   102,   139,   106,    71,   106,   106,
     102,   144,    78,   103,   103,   138,    76,    71,    78,    78,
     102,   102,    75,   139,    75,   139,   144,   144,    76,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    93,    94,    94,    94,    94,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   103,   104,   104,   105,
     105,   106,   106,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   132,
     132,   132,   133,   133,   134,   134,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   141,   142,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   151,   152,
     153,   153,   153,   153,   153,   154,   154,   155,   155,   156,
     157,   157,   158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       0,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     1,     4,     1,     9,     0,     0,     1,     3,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     2,
       6,     1,     0,     1,     3,     1,     3,     1,     2,     1,
       1,     3,     4,     5,     4,     3,     6,     5,     6,     5,
       4,     5,     4,     4,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     5,     0,     0,     1,     0,
       1,     3,     1,     1,     2,     1,     8,    11,     5,    10,
      12,    10,    12,    14,    14,    16,    16,     0,     0,     0,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     7,
       1,     0,     1,     2
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
  case 2: /* primary-expression: IDENTIFIER  */
#line 61 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc = (yyvsp[0].pointer);
            (yyval.exp)->type = "non_bool";
            }
#line 1879 "y.tab.c"
    break;

  case 3: /* primary-expression: INTEGER  */
#line 66 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("int"),convertInttoString((yyvsp[0].intval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].intval));
        }
#line 1889 "y.tab.c"
    break;

  case 4: /* primary-expression: FLOAT  */
#line 71 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("float"),convertFloattoString((yyvsp[0].floatval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].floatval));
        }
#line 1899 "y.tab.c"
    break;

  case 5: /* primary-expression: CHARACTER_CONSTANT  */
#line 76 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("char"),string((yyvsp[0].charval)));
            emit("=",(yyval.exp)->loc->name,string((yyvsp[0].charval)));
        }
#line 1909 "y.tab.c"
    break;

  case 6: /* primary-expression: STRING_LITERAL  */
#line 81 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("ptr"),string((yyvsp[0].charval)));
            //emit($$->loc->name,$1,"=");
            (yyval.exp)->loc->type->arrtype = new ttype("char");
        }
#line 1920 "y.tab.c"
    break;

  case 7: /* primary-expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 87 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("primary-expression-> (expression)\n");}
#line 1926 "y.tab.c"
    break;

  case 8: /* postfix-expression: primary-expression  */
#line 90 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = (yyvsp[0].exp)->loc;
            (yyval.Array)->Array = (yyval.Array)->loc;
            (yyval.Array)->type = (yyvsp[0].exp)->loc->type;
        }
#line 1937 "y.tab.c"
    break;

  case 9: /* postfix-expression: postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 96 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = symbolTable::gentemp("int");
            (yyval.Array)->type = (yyvsp[-3].Array)->type->arrtype;
            (yyval.Array)->array_type = "arr";
            (yyval.Array)->Array = (yyvsp[-3].Array)->Array;
            if((yyvsp[-3].Array)->array_type=="arr")
            {
                symbol*temp = symbolTable::gentemp("int");
                int size = sizeoftype((yyval.Array)->type);
                emit("*",temp->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
                emit("+",(yyval.Array)->loc->name,(yyvsp[-3].Array)->loc->name,temp->name);
            }
            else
            {
                int size = sizeoftype((yyval.Array)->type);
                emit("*",(yyval.Array)->loc->name,(yyvsp[-1].exp)->loc->name,convertInttoString(size));
            }
        }
#line 1961 "y.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  */
#line 115 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            (yyval.Array) = new aarray();
            //$$->loc = symbolTable::gentemp($1->type);
            //$$->array_type = "func";
            //$$->Array = $1->Array;
            //$$->type = $1->type;
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-3].Array)->type);
            emit("call", (yyval.Array)->Array->name, (yyvsp[-3].Array)->Array->name, convertInttoString((yyvsp[-1].numParams)));
            
        }
#line 1976 "y.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression DOT IDENTIFIER  */
#line 125 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
#line 1982 "y.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression ARROW IDENTIFIER  */
#line 126 "assgn_4_21CS30059_21CS30038.y"
                                               {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
#line 1988 "y.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression INCREMENT  */
#line 127 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name);
            emit("+", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1"); 
        }
#line 1999 "y.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression DECREMENT  */
#line 133 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name); 
            emit("-", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1");
        }
#line 2010 "y.tab.c"
    break;

  case 15: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 139 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                {printf("postfix-expression-> (type-name) {initializer-list}\n");}
#line 2016 "y.tab.c"
    break;

  case 16: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 140 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                      {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
#line 2022 "y.tab.c"
    break;

  case 17: /* argument-expression-list: assignment-expression  */
#line 143 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.numParams) = 1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2031 "y.tab.c"
    break;

  case 18: /* argument-expression-list: argument-expression-list COMMA assignment-expression  */
#line 147 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            (yyval.numParams) = (yyvsp[-2].numParams)+1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 2040 "y.tab.c"
    break;

  case 19: /* argument-expression-listopt: argument-expression-list  */
#line 153 "assgn_4_21CS30059_21CS30038.y"
                                  {
            (yyval.numParams) = (yyvsp[0].numParams);
        }
#line 2048 "y.tab.c"
    break;

  case 20: /* argument-expression-listopt: %empty  */
#line 156 "assgn_4_21CS30059_21CS30038.y"
                  {(yyval.numParams) = 0;}
#line 2054 "y.tab.c"
    break;

  case 21: /* unary-expression: postfix-expression  */
#line 159 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2062 "y.tab.c"
    break;

  case 22: /* unary-expression: INCREMENT unary-expression  */
#line 162 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("+", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1"); 
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2071 "y.tab.c"
    break;

  case 23: /* unary-expression: DECREMENT unary-expression  */
#line 166 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("-", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1");
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2080 "y.tab.c"
    break;

  case 24: /* unary-expression: unary-operator cast-expression  */
#line 170 "assgn_4_21CS30059_21CS30038.y"
                                          {
            (yyval.Array) = new aarray();
            switch((yyvsp[-1].unaryOp)){
                case '&':
                    (yyval.Array)->Array = symbolTable::gentemp(new ttype("ptr"));
                    (yyval.Array)->Array->type->arrtype = (yyvsp[0].Array)->Array->type;
                    emit((yyval.Array)->Array->name,(yyvsp[0].Array)->Array->name,"= &");
                    break;
                case '*':
                    (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                    (yyval.Array)->loc = symbolTable::gentemp((yyvsp[0].Array)->Array->type->arrtype);
                    (yyval.Array)->array_type = "ptr";
                    emit("= *", (yyval.Array)->loc->name, (yyvsp[0].Array)->Array->name);  
                    break;
                case '+':
                    (yyval.Array) = (yyvsp[0].Array);
                    break;
                case '-':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= -", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);   
                    break;
                case '~':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= ~", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
                case '!':
                    (yyval.Array)->Array = symbolTable::gentemp((yyvsp[0].Array)->Array->type->type);
                    emit("= !", (yyval.Array)->Array->name, (yyvsp[0].Array)->Array->name);
                    break;
            }
        }
#line 2116 "y.tab.c"
    break;

  case 25: /* unary-expression: SIZEOF unary-expression  */
#line 201 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("unary-expression-> SIZEOF unary-expression\n");}
#line 2122 "y.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  */
#line 202 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("unary-expression-> SIZEOF (type-name)\n");}
#line 2128 "y.tab.c"
    break;

  case 27: /* unary-operator: AND  */
#line 205 "assgn_4_21CS30059_21CS30038.y"
             {
            (yyval.unaryOp) = '&';
        }
#line 2136 "y.tab.c"
    break;

  case 28: /* unary-operator: STAR  */
#line 208 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '*';
        }
#line 2144 "y.tab.c"
    break;

  case 29: /* unary-operator: PLUS  */
#line 211 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '+';
        }
#line 2152 "y.tab.c"
    break;

  case 30: /* unary-operator: MINUS  */
#line 214 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '-';
        }
#line 2160 "y.tab.c"
    break;

  case 31: /* unary-operator: TILDE  */
#line 217 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '~';
        }
#line 2168 "y.tab.c"
    break;

  case 32: /* unary-operator: NOT  */
#line 220 "assgn_4_21CS30059_21CS30038.y"
               {
            (yyval.unaryOp) = '!';
        }
#line 2176 "y.tab.c"
    break;

  case 33: /* cast-expression: unary-expression  */
#line 225 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 2184 "y.tab.c"
    break;

  case 34: /* cast-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  */
#line 228 "assgn_4_21CS30059_21CS30038.y"
                                                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = convertType((yyvsp[0].Array)->Array, varType);
        }
#line 2193 "y.tab.c"
    break;

  case 35: /* multiplicative-expression: cast-expression  */
#line 234 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.exp) = new expression();
            if((yyvsp[0].Array)->array_type=="arr")
            {
                (yyval.exp)->loc = symbolTable::gentemp((yyvsp[0].Array)->loc->type);
                emit("=[]", (yyval.exp)->loc->name, (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->loc->name);
            }
            else if((yyvsp[0].Array)->array_type=="ptr")
            {
                (yyval.exp)->loc = (yyvsp[0].Array)->loc;
            }
            else
            {
                (yyval.exp)->loc = (yyvsp[0].Array)->Array;
            }
        }
#line 2214 "y.tab.c"
    break;

  case 36: /* multiplicative-expression: multiplicative-expression STAR cast-expression  */
#line 250 "assgn_4_21CS30059_21CS30038.y"
                                                          {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("*", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2231 "y.tab.c"
    break;

  case 37: /* multiplicative-expression: multiplicative-expression DIV cast-expression  */
#line 262 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("/", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2248 "y.tab.c"
    break;

  case 38: /* multiplicative-expression: multiplicative-expression MOD cast-expression  */
#line 274 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("%", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);   
            }
        }
#line 2261 "y.tab.c"
    break;

  case 39: /* additive-expression: multiplicative-expression  */
#line 284 "assgn_4_21CS30059_21CS30038.y"
                                   {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2269 "y.tab.c"
    break;

  case 40: /* additive-expression: additive-expression PLUS multiplicative-expression  */
#line 287 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("+", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);    
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2286 "y.tab.c"
    break;

  case 41: /* additive-expression: additive-expression MINUS multiplicative-expression  */
#line 299 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("-", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);           
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2303 "y.tab.c"
    break;

  case 42: /* shift-expression: additive-expression  */
#line 313 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2311 "y.tab.c"
    break;

  case 43: /* shift-expression: shift-expression LEFT_SHIFT additive-expression  */
#line 316 "assgn_4_21CS30059_21CS30038.y"
                                                           {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("<<", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2328 "y.tab.c"
    break;

  case 44: /* shift-expression: shift-expression RIGHT_SHIFT additive-expression  */
#line 328 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if((yyvsp[0].exp)->loc->type->type=="int")
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit(">>", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type Error, shift expression can only be applied to integer shift values");
            }
        }
#line 2345 "y.tab.c"
    break;

  case 45: /* relational-expression: shift-expression  */
#line 342 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2353 "y.tab.c"
    break;

  case 46: /* relational-expression: relational-expression LESS_THAN shift-expression  */
#line 345 "assgn_4_21CS30059_21CS30038.y"
                                                            {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("<","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2373 "y.tab.c"
    break;

  case 47: /* relational-expression: relational-expression GREATER_THAN shift-expression  */
#line 360 "assgn_4_21CS30059_21CS30038.y"
                                                               {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit(">","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2393 "y.tab.c"
    break;

  case 48: /* relational-expression: relational-expression LESS_THAN_EQUAL shift-expression  */
#line 375 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("<=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2413 "y.tab.c"
    break;

  case 49: /* relational-expression: relational-expression GREATER_THAN_EQUAL shift-expression  */
#line 390 "assgn_4_21CS30059_21CS30038.y"
                                                                     {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit(">=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2433 "y.tab.c"
    break;

  case 50: /* equality-expression: relational-expression  */
#line 407 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2441 "y.tab.c"
    break;

  case 51: /* equality-expression: equality-expression EQUAL_TO relational-expression  */
#line 410 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("==","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2463 "y.tab.c"
    break;

  case 52: /* equality-expression: equality-expression NOT_EQUAL_TO relational-expression  */
#line 427 "assgn_4_21CS30059_21CS30038.y"
                                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                (yyval.exp)->truelist = makelist(nextinstr());
                (yyval.exp)->falselist = makelist(nextinstr()+1);
                emit("!=","",(yyvsp[-2].exp)->loc->name,(yyvsp[0].exp)->loc->name);
                emit("goto","_");
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2485 "y.tab.c"
    break;

  case 53: /* AND-expression: equality-expression  */
#line 446 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2493 "y.tab.c"
    break;

  case 54: /* AND-expression: AND-expression AND equality-expression  */
#line 449 "assgn_4_21CS30059_21CS30038.y"
                                                  {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("&", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);  
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2513 "y.tab.c"
    break;

  case 55: /* exclusive-OR-expression: AND-expression  */
#line 466 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2521 "y.tab.c"
    break;

  case 56: /* exclusive-OR-expression: exclusive-OR-expression XOR AND-expression  */
#line 469 "assgn_4_21CS30059_21CS30038.y"
                                                      {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("^", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2541 "y.tab.c"
    break;

  case 57: /* inclusive-OR-expression: exclusive-OR-expression  */
#line 486 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2549 "y.tab.c"
    break;

  case 58: /* inclusive-OR-expression: inclusive-OR-expression OR exclusive-OR-expression  */
#line 489 "assgn_4_21CS30059_21CS30038.y"
                                                              {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].exp)->loc))
            {
                (yyval.exp) = new expression();
                convertBooltoInt((yyvsp[-2].exp));
                convertBooltoInt((yyvsp[0].exp));
                (yyval.exp)->type = "notbool";
                (yyval.exp)->loc = symbolTable::gentemp(new ttype("int"));
                emit("|", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            }
            else
            {
                yyerror("Type mismatch");
            }
        }
#line 2569 "y.tab.c"
    break;

  case 59: /* logical-AND-expression: inclusive-OR-expression  */
#line 506 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2577 "y.tab.c"
    break;

  case 60: /* logical-AND-expression: logical-AND-expression AND_AND M inclusive-OR-expression  */
#line 509 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertInttoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->truelist,(yyvsp[-1].instr));
                (yyval.exp)->truelist = (yyvsp[0].exp)->truelist;
                (yyval.exp)->falselist = merge((yyvsp[-3].exp)->falselist,(yyvsp[0].exp)->falselist);
            }
        }
#line 2594 "y.tab.c"
    break;

  case 61: /* logical-OR-expression: logical-AND-expression  */
#line 523 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2602 "y.tab.c"
    break;

  case 62: /* logical-OR-expression: logical-OR-expression OR_OR M logical-AND-expression  */
#line 526 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            
            {
                (yyval.exp) = new expression();
                convertInttoBool((yyvsp[-3].exp));
                convertInttoBool((yyvsp[0].exp));
                (yyval.exp)->type = "bool";
                backpatch((yyvsp[-3].exp)->falselist,(yyvsp[-1].instr));
                (yyval.exp)->falselist = (yyvsp[0].exp)->falselist;
                (yyval.exp)->truelist = merge((yyvsp[-3].exp)->truelist,(yyvsp[0].exp)->truelist);
            }
        }
#line 2619 "y.tab.c"
    break;

  case 63: /* conditional-expression: logical-OR-expression  */
#line 540 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2627 "y.tab.c"
    break;

  case 64: /* conditional-expression: logical-OR-expression N QUESTION M expression N COLON M conditional-expression  */
#line 543 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {
            (yyval.exp) = new expression;
            (yyval.exp)->loc = symbolTable::gentemp((yyvsp[-4].exp)->loc->type);
            (yyval.exp)->loc->update((yyvsp[-4].exp)->loc->type);
            emit("=", (yyval.exp)->loc->name, (yyvsp[0].exp)->loc->name); 
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch((yyvsp[-3].stmt)->nextlist,nextinstr());
            emit("=", (yyval.exp)->loc->name, (yyvsp[-4].exp)->loc->name);
            list<int> l2 = makelist(nextinstr());
            l1=merge(l1,l2);
            emit("goto","");
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());               // Backpatching
            convertInttoBool((yyvsp[-8].exp));                               // Convert expression to bool
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].exp)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 2650 "y.tab.c"
    break;

  case 65: /* M: %empty  */
#line 563 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.instr)=nextinstr();
    }
#line 2658 "y.tab.c"
    break;

  case 66: /* N: %empty  */
#line 568 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        emit("goto","");
    }
#line 2668 "y.tab.c"
    break;

  case 67: /* assignment-expression: conditional-expression  */
#line 575 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2676 "y.tab.c"
    break;

  case 68: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 578 "assgn_4_21CS30059_21CS30038.y"
                                                                      {
            if((yyvsp[-2].Array)->array_type=="arr")
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->type->type);
                emit("[]=", (yyvsp[-2].Array)->Array->name, (yyvsp[-2].Array)->loc->name, (yyvsp[0].exp)->loc->name);
            }
            else if((yyvsp[-2].Array)->array_type=="ptr")
            {
                emit("*=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            else
            {
                (yyvsp[0].exp)->loc=convertType((yyvsp[0].exp)->loc,(yyvsp[-2].Array)->Array->type->type);
                emit("=", (yyvsp[-2].Array)->Array->name, (yyvsp[0].exp)->loc->name);
            }
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2698 "y.tab.c"
    break;

  case 69: /* assignment-operator: EQUALS  */
#line 597 "assgn_4_21CS30059_21CS30038.y"
                {printf("assignment-operator-> =\n");}
#line 2704 "y.tab.c"
    break;

  case 70: /* assignment-operator: ASSIGNMENT_OPERATOR  */
#line 598 "assgn_4_21CS30059_21CS30038.y"
                               {printf("assignment-operator-> assignment-operator-token\n");}
#line 2710 "y.tab.c"
    break;

  case 71: /* expression: assignment-expression  */
#line 601 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2718 "y.tab.c"
    break;

  case 72: /* expression: expression COMMA assignment-expression  */
#line 604 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("expression-> expression , assignment-expression\n");}
#line 2724 "y.tab.c"
    break;

  case 73: /* constant-expression: conditional-expression  */
#line 607 "assgn_4_21CS30059_21CS30038.y"
                                {printf("constant-expression-> conditional-expression\n");}
#line 2730 "y.tab.c"
    break;

  case 74: /* declaration: declaration-specifiers init-declarator-list SEMICOLON  */
#line 610 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
#line 2736 "y.tab.c"
    break;

  case 75: /* declaration: declaration-specifiers SEMICOLON  */
#line 611 "assgn_4_21CS30059_21CS30038.y"
                                            {printf("declaration-> declaration-specifiers ;\n");}
#line 2742 "y.tab.c"
    break;

  case 76: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 618 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
#line 2748 "y.tab.c"
    break;

  case 77: /* declaration-specifiers: storage-class-specifier  */
#line 619 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("declaration-specifiers-> storage-class-specifier\n");}
#line 2754 "y.tab.c"
    break;

  case 78: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN declaration-specifiers  */
#line 620 "assgn_4_21CS30059_21CS30038.y"
                                                       {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
#line 2760 "y.tab.c"
    break;

  case 79: /* declaration-specifiers: TYPE_SPECIFIER_TOKEN  */
#line 621 "assgn_4_21CS30059_21CS30038.y"
                                {printf("declaration-specifiers-> type-specifier\n");}
#line 2766 "y.tab.c"
    break;

  case 80: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 622 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
#line 2772 "y.tab.c"
    break;

  case 81: /* declaration-specifiers: type-qualifier  */
#line 623 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-qualifier\n");}
#line 2778 "y.tab.c"
    break;

  case 82: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 624 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
#line 2784 "y.tab.c"
    break;

  case 83: /* declaration-specifiers: function-specifier  */
#line 625 "assgn_4_21CS30059_21CS30038.y"
                              {printf("declaration-specifiers-> function-specifier\n");}
#line 2790 "y.tab.c"
    break;

  case 84: /* type-qualifier: TYPE_QUALIFIER  */
#line 628 "assgn_4_21CS30059_21CS30038.y"
                        {printf("type-qualifier-> type-qualifier-token\n");}
#line 2796 "y.tab.c"
    break;

  case 85: /* init-declarator-list: init-declarator  */
#line 631 "assgn_4_21CS30059_21CS30038.y"
                         {printf("init-declarator-list-> init-declarator\n");}
#line 2802 "y.tab.c"
    break;

  case 86: /* init-declarator-list: init-declarator-list COMMA init-declarator  */
#line 632 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
#line 2808 "y.tab.c"
    break;

  case 87: /* init-declarator: declarator  */
#line 635 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.pointer) = (yyvsp[0].pointer);
        }
#line 2816 "y.tab.c"
    break;

  case 88: /* init-declarator: declarator EQUALS initializer  */
#line 638 "assgn_4_21CS30059_21CS30038.y"
                                         {
            if((yyvsp[0].pointer)->value !="")
            {
                (yyvsp[-2].pointer)->value = (yyvsp[0].pointer)->value;
            }
            emit("=", (yyvsp[-2].pointer)->name, (yyvsp[0].pointer)->name);
        }
#line 2828 "y.tab.c"
    break;

  case 89: /* type-specifier: VOID  */
#line 647 "assgn_4_21CS30059_21CS30038.y"
            {
            vartype = "void";
        }
#line 2836 "y.tab.c"
    break;

  case 90: /* type-specifier: CHAR  */
#line 650 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "char";
        }
#line 2844 "y.tab.c"
    break;

  case 91: /* type-specifier: SHORT  */
#line 653 "assgn_4_21CS30059_21CS30038.y"
               {
            vartype = "short";
        }
#line 2852 "y.tab.c"
    break;

  case 92: /* type-specifier: INT  */
#line 656 "assgn_4_21CS30059_21CS30038.y"
             {
            vartype = "int";
        }
#line 2860 "y.tab.c"
    break;

  case 93: /* type-specifier: LONG  */
#line 659 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "long";
        }
#line 2868 "y.tab.c"
    break;

  case 94: /* type-specifier: FLOAT  */
#line 662 "assgn_4_21CS30059_21CS30038.y"
               {
            vartype = "float";
        }
#line 2876 "y.tab.c"
    break;

  case 95: /* type-specifier: DOUBLE  */
#line 665 "assgn_4_21CS30059_21CS30038.y"
                {
            vartype = "double";
        }
#line 2884 "y.tab.c"
    break;

  case 96: /* type-specifier: SIGNED  */
#line 668 "assgn_4_21CS30059_21CS30038.y"
                {
            vartype = "signed";
        }
#line 2892 "y.tab.c"
    break;

  case 97: /* type-specifier: UNSIGNED  */
#line 671 "assgn_4_21CS30059_21CS30038.y"
                  {
            vartype = "unsigned";
        }
#line 2900 "y.tab.c"
    break;

  case 98: /* type-specifier: BOOL  */
#line 674 "assgn_4_21CS30059_21CS30038.y"
              {
            vartype = "bool";
        }
#line 2908 "y.tab.c"
    break;

  case 99: /* type-specifier: COMPLEX  */
#line 677 "assgn_4_21CS30059_21CS30038.y"
                 {
            vartype = "complex";
        }
#line 2916 "y.tab.c"
    break;

  case 100: /* type-specifier: IMAGINARY  */
#line 680 "assgn_4_21CS30059_21CS30038.y"
                   {
            vartype = "imaginary";
        }
#line 2924 "y.tab.c"
    break;

  case 101: /* type-specifier: enum-specifier  */
#line 683 "assgn_4_21CS30059_21CS30038.y"
                        {
            printf("type-specifier-> enum-specifier\n");
        }
#line 2932 "y.tab.c"
    break;

  case 102: /* storage-class-specifier: STORAGE_CLASS_SPECIFIER  */
#line 688 "assgn_4_21CS30059_21CS30038.y"
                                {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2938 "y.tab.c"
    break;

  case 103: /* storage-class-specifier: STATIC_TOKEN  */
#line 689 "assgn_4_21CS30059_21CS30038.y"
                       {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2944 "y.tab.c"
    break;

  case 104: /* specifier-qualifier-list: type-specifier specifier-qualifier-listopt  */
#line 692 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
#line 2950 "y.tab.c"
    break;

  case 105: /* specifier-qualifier-list: TYPE_QUALIFIER specifier-qualifier-listopt  */
#line 693 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
#line 2956 "y.tab.c"
    break;

  case 106: /* specifier-qualifier-listopt: specifier-qualifier-list  */
#line 696 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
#line 2962 "y.tab.c"
    break;

  case 107: /* specifier-qualifier-listopt: %empty  */
#line 697 "assgn_4_21CS30059_21CS30038.y"
                 {printf("specifier-qualifier-listopt-> \n");}
#line 2968 "y.tab.c"
    break;

  case 108: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET  */
#line 700 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
#line 2974 "y.tab.c"
    break;

  case 109: /* enum-specifier: ENUM IDENTIFIER  */
#line 701 "assgn_4_21CS30059_21CS30038.y"
                          {printf("enum-specifier-> enum IDENTIFIER\n");}
#line 2980 "y.tab.c"
    break;

  case 110: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET  */
#line 702 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
#line 2986 "y.tab.c"
    break;

  case 111: /* identifieropt: IDENTIFIER  */
#line 705 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifieropt-> IDENTIFIER\n");}
#line 2992 "y.tab.c"
    break;

  case 112: /* identifieropt: %empty  */
#line 706 "assgn_4_21CS30059_21CS30038.y"
                 {printf("identifieropt-> \n");}
#line 2998 "y.tab.c"
    break;

  case 113: /* enumerator-list: enumerator  */
#line 709 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-list-> enumerator\n");}
#line 3004 "y.tab.c"
    break;

  case 114: /* enumerator-list: enumerator-list COMMA enumerator  */
#line 710 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("enumerator-list-> enumerator-list , enumerator\n");}
#line 3010 "y.tab.c"
    break;

  case 115: /* enumerator: IDENTIFIER  */
#line 713 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-> enumeration-const\n");}
#line 3016 "y.tab.c"
    break;

  case 116: /* enumerator: IDENTIFIER EQUALS constant-expression  */
#line 714 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("enumerator-> enumeration-const = constant-expression\n");}
#line 3022 "y.tab.c"
    break;

  case 117: /* function-specifier: FUNCTION_SPECIFIER  */
#line 717 "assgn_4_21CS30059_21CS30038.y"
                           {printf("function-specifier-> function-specifier-token\n");}
#line 3028 "y.tab.c"
    break;

  case 118: /* declarator: pointer direct-declarator  */
#line 720 "assgn_4_21CS30059_21CS30038.y"
                                  {
            ttype* t = (yyvsp[-1].ptr);
            while(t->arrtype!=NULL)
            {
                t=t->arrtype;
            }
            t->arrtype = (yyvsp[0].pointer)->type;
            (yyval.pointer) = (yyvsp[0].pointer)->update((yyvsp[-1].ptr));
        }
#line 3042 "y.tab.c"
    break;

  case 119: /* declarator: direct-declarator  */
#line 729 "assgn_4_21CS30059_21CS30038.y"
                            {printf("declarator-> direct-declarator\n");}
#line 3048 "y.tab.c"
    break;

  case 120: /* direct-declarator: IDENTIFIER  */
#line 732 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.pointer) = (yyvsp[0].pointer)->update(new ttype(varType));
            currentSymbol = (yyval.pointer);
        }
#line 3057 "y.tab.c"
    break;

  case 121: /* direct-declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 736 "assgn_4_21CS30059_21CS30038.y"
                                                        {
            (yyval.pointer) = (yyvsp[-1].pointer);
        }
#line 3065 "y.tab.c"
    break;

  case 122: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET  */
#line 739 "assgn_4_21CS30059_21CS30038.y"
                                                                                        {
            printf("direct-declarator-> direct-declarator [type-qualifier-list]\n");
        }
#line 3073 "y.tab.c"
    break;

  case 123: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 742 "assgn_4_21CS30059_21CS30038.y"
                                                                                                              {
            printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n");
        }
#line 3081 "y.tab.c"
    break;

  case 124: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET  */
#line 745 "assgn_4_21CS30059_21CS30038.y"
                                                                                           {
            ttype *t = (yyvsp[-3].pointer)->type;
            ttype* prev = NULL;
            while(t->type == "arr")
            {
                prev = t;
                t = t->arrtype;
            }
            if(prev == NULL)
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",(yyvsp[-3].pointer)->type,temp);
                (yyval.pointer) = (yyvsp[-3].pointer)->update(tp);
            }
            else
            {
                int temp=atoi((yyvsp[-1].exp)->loc->value.c_str());
                if(temp<=0)
                {
                    yyerror("Array size must be greater than 0");
                }
                ttype* tp = new ttype("arr",t,temp);
                prev->arrtype = tp;
                (yyval.pointer) = (yyvsp[-3].pointer)->update((yyvsp[-3].pointer)->type);
            }

        }
#line 3117 "y.tab.c"
    break;

  case 125: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 776 "assgn_4_21CS30059_21CS30038.y"
                                                                    {
            ttype* t=(yyvsp[-2].pointer)->type;
            ttype* prev=NULL;
            while(t->type=="arr")
            {
                prev=t;
                t=t->arrtype;
            }
            if(prev==NULL)
            {
                ttype* tp=new ttype("arr",(yyvsp[-2].pointer)->type,0);
                (yyval.pointer)=(yyvsp[-2].pointer)->update(tp);
            }
            else
            {
                ttype* tp=new ttype("arr",t,0);
                prev->arrtype=tp;
                (yyval.pointer)=(yyvsp[-2].pointer)->update((yyvsp[-2].pointer)->type);
            }
        }
#line 3142 "y.tab.c"
    break;

  case 126: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 796 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
#line 3148 "y.tab.c"
    break;

  case 127: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 797 "assgn_4_21CS30059_21CS30038.y"
                                                                                                        {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3154 "y.tab.c"
    break;

  case 128: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 798 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 3160 "y.tab.c"
    break;

  case 129: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STAR RIGHT_SQUARE_BRACKET  */
#line 799 "assgn_4_21CS30059_21CS30038.y"
                                                                                              {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
#line 3166 "y.tab.c"
    break;

  case 130: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STAR RIGHT_SQUARE_BRACKET  */
#line 800 "assgn_4_21CS30059_21CS30038.y"
                                                                          {printf("direct-declarator-> direct-declarator [*]\n");}
#line 3172 "y.tab.c"
    break;

  case 131: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table parameter-type-list RIGHT_PARENTHESIS  */
#line 801 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            currentST->name = (yyvsp[-4].pointer)->name;
            if((yyvsp[-4].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-4].pointer)->type);
            }
            (yyvsp[-4].pointer)->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3188 "y.tab.c"
    break;

  case 132: /* direct-declarator: direct-declarator LEFT_PARENTHESIS identifier-list RIGHT_PARENTHESIS  */
#line 812 "assgn_4_21CS30059_21CS30038.y"
                                                                               {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
#line 3194 "y.tab.c"
    break;

  case 133: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table RIGHT_PARENTHESIS  */
#line 814 "assgn_4_21CS30059_21CS30038.y"
        {
            currentST->name = (yyvsp[-3].pointer)->name;
            if((yyvsp[-3].pointer)->type->type != "void") {
                symbol* s = currentST->lookup("return");   
                s->update((yyvsp[-3].pointer)->type);
            }
            (yyvsp[-3].pointer)->nested_table = currentST;
            currentST->parent = globalST; 
            switchTable(globalST);        
            currentSymbol = (yyval.pointer);
        }
#line 3210 "y.tab.c"
    break;

  case 134: /* type-qualifier-listopt: type-qualifier-list  */
#line 827 "assgn_4_21CS30059_21CS30038.y"
                            {printf("type-qualifier-listopt-> type-qualifier-list\n");}
#line 3216 "y.tab.c"
    break;

  case 135: /* type-qualifier-listopt: %empty  */
#line 828 "assgn_4_21CS30059_21CS30038.y"
                 {printf("type-qualifier-listopt-> \n");}
#line 3222 "y.tab.c"
    break;

  case 136: /* pointer: STAR type-qualifier-listopt  */
#line 831 "assgn_4_21CS30059_21CS30038.y"
                                    {
            (yyval.ptr) = new ttype("ptr");
        }
#line 3230 "y.tab.c"
    break;

  case 137: /* pointer: STAR type-qualifier-listopt pointer  */
#line 834 "assgn_4_21CS30059_21CS30038.y"
                                              {
            (yyval.ptr) = new ttype("ptr",(yyvsp[0].ptr));
        }
#line 3238 "y.tab.c"
    break;

  case 138: /* type-qualifier-list: TYPE_QUALIFIER  */
#line 839 "assgn_4_21CS30059_21CS30038.y"
                       {printf("type-qualifier-list-> type-qualifier\n");}
#line 3244 "y.tab.c"
    break;

  case 139: /* type-qualifier-list: type-qualifier-list TYPE_QUALIFIER  */
#line 840 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
#line 3250 "y.tab.c"
    break;

  case 140: /* parameter-type-list: parameter-list  */
#line 843 "assgn_4_21CS30059_21CS30038.y"
                       {printf("parameter-type-list-> parameter-list\n");}
#line 3256 "y.tab.c"
    break;

  case 141: /* parameter-type-list: parameter-list COMMA ELLIPSIS  */
#line 844 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("parameter-type-list-> parameter-list , ...\n");}
#line 3262 "y.tab.c"
    break;

  case 142: /* parameter-list: parameter-declaration  */
#line 847 "assgn_4_21CS30059_21CS30038.y"
                              {printf("parameter-list-> parameter-declaration\n");}
#line 3268 "y.tab.c"
    break;

  case 143: /* parameter-list: parameter-list COMMA parameter-declaration  */
#line 848 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("parameter-list-> parameter-list , parameter-declaration\n");}
#line 3274 "y.tab.c"
    break;

  case 144: /* parameter-declaration: declaration-specifiers declarator  */
#line 851 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("parameter-declaration-> declaration-specifiers declarator\n");}
#line 3280 "y.tab.c"
    break;

  case 145: /* parameter-declaration: declaration-specifiers  */
#line 852 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("parameter-declaration-> declaration-specifiers\n");}
#line 3286 "y.tab.c"
    break;

  case 146: /* identifier-list: IDENTIFIER  */
#line 855 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifier-list-> IDENTIFIER\n");}
#line 3292 "y.tab.c"
    break;

  case 147: /* identifier-list: identifier-list COMMA IDENTIFIER  */
#line 856 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
#line 3298 "y.tab.c"
    break;

  case 148: /* type-name: specifier-qualifier-list  */
#line 859 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("type-name-> specifier-qualifier-list\n");}
#line 3304 "y.tab.c"
    break;

  case 149: /* initializer: assignment-expression  */
#line 862 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.pointer) = (yyvsp[0].exp)->loc;
        }
#line 3312 "y.tab.c"
    break;

  case 150: /* initializer: LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 865 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("initializer-> {initializer-list}\n");}
#line 3318 "y.tab.c"
    break;

  case 151: /* initializer: LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 866 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("initializer-> {initializer-list,}\n");}
#line 3324 "y.tab.c"
    break;

  case 152: /* initializer-list: designationopt initializer  */
#line 869 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("initializer-list-> designationopt initializer\n");}
#line 3330 "y.tab.c"
    break;

  case 153: /* initializer-list: initializer-list COMMA designationopt initializer  */
#line 870 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("initializer-list-> initializer-list , designationopt initializer\n");}
#line 3336 "y.tab.c"
    break;

  case 154: /* designationopt: designation  */
#line 873 "assgn_4_21CS30059_21CS30038.y"
                    {printf("designationopt-> designation\n");}
#line 3342 "y.tab.c"
    break;

  case 155: /* designationopt: %empty  */
#line 874 "assgn_4_21CS30059_21CS30038.y"
                 {printf("designationopt-> \n");}
#line 3348 "y.tab.c"
    break;

  case 156: /* designation: designator-list EQUALS  */
#line 877 "assgn_4_21CS30059_21CS30038.y"
                               {printf("designation-> designator-list =\n");}
#line 3354 "y.tab.c"
    break;

  case 157: /* designator-list: designator  */
#line 880 "assgn_4_21CS30059_21CS30038.y"
                   {printf("designator-list-> designator\n");}
#line 3360 "y.tab.c"
    break;

  case 158: /* designator-list: designator-list designator  */
#line 881 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("designator-list-> designation-list designator\n");}
#line 3366 "y.tab.c"
    break;

  case 159: /* designator: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET  */
#line 884 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("designator-> [constant-expression]\n");}
#line 3372 "y.tab.c"
    break;

  case 160: /* designator: DOT IDENTIFIER  */
#line 885 "assgn_4_21CS30059_21CS30038.y"
                         {printf("designator-> . IDENTIFIER\n");}
#line 3378 "y.tab.c"
    break;

  case 161: /* statement: labeled-statement  */
#line 888 "assgn_4_21CS30059_21CS30038.y"
                          {printf("statement-> labeled-statement\n");}
#line 3384 "y.tab.c"
    break;

  case 162: /* statement: compound-statement  */
#line 889 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3392 "y.tab.c"
    break;

  case 163: /* statement: expression-statement  */
#line 892 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3401 "y.tab.c"
    break;

  case 164: /* statement: selection-statement  */
#line 896 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3409 "y.tab.c"
    break;

  case 165: /* statement: iteration-statement  */
#line 899 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3417 "y.tab.c"
    break;

  case 166: /* statement: jump-statement  */
#line 902 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3425 "y.tab.c"
    break;

  case 167: /* loop-statement: labeled-statement  */
#line 907 "assgn_4_21CS30059_21CS30038.y"
                          {printf("loop-statement-> labeled-statement\n");}
#line 3431 "y.tab.c"
    break;

  case 168: /* loop-statement: expression-statement  */
#line 908 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3440 "y.tab.c"
    break;

  case 169: /* loop-statement: selection-statement  */
#line 912 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3448 "y.tab.c"
    break;

  case 170: /* loop-statement: iteration-statement  */
#line 915 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3456 "y.tab.c"
    break;

  case 171: /* loop-statement: jump-statement  */
#line 918 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3464 "y.tab.c"
    break;

  case 172: /* labeled-statement: IDENTIFIER COLON statement  */
#line 923 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("labeled-statement-> IDENTIFIER : statement\n");}
#line 3470 "y.tab.c"
    break;

  case 173: /* labeled-statement: CASE constant-expression COLON statement  */
#line 924 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("labeled-statement-> CASE constant-expression : statement\n");}
#line 3476 "y.tab.c"
    break;

  case 174: /* labeled-statement: DEFAULT COLON statement  */
#line 925 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("labeled-statement-> DEFAULT : statement\n");}
#line 3482 "y.tab.c"
    break;

  case 175: /* compound-statement: LEFT_CURLY_BRACKET A change-table block-item-listopt RIGHT_CURLY_BRACKET  */
#line 928 "assgn_4_21CS30059_21CS30038.y"
                                                                                 {
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currentST->parent);
        }
#line 3491 "y.tab.c"
    break;

  case 176: /* A: %empty  */
#line 934 "assgn_4_21CS30059_21CS30038.y"
        {
            string new_ST = currentST->name + "_" + blockName + "_" + to_string(STCount++);
            symbol* sym = currentST->lookup(new_ST);
            sym->nested_table = new symbolTable(new_ST);
            sym->name = new_ST;
            sym->nested_table->parent = currentST;
            sym->type = new ttype("block");
            currentSymbol = sym;
        }
#line 3505 "y.tab.c"
    break;

  case 177: /* change-table: %empty  */
#line 945 "assgn_4_21CS30059_21CS30038.y"
        {
            if(currentSymbol->nested_table != NULL)
            {
                switchTable(currentSymbol->nested_table);
                emit("label",currentST->name);
            }
            else
            {
                switchTable(new symbolTable(""));
            }
        }
#line 3521 "y.tab.c"
    break;

  case 178: /* block-item-listopt: block-item-list  */
#line 958 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3529 "y.tab.c"
    break;

  case 179: /* block-item-listopt: %empty  */
#line 961 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.stmt) = new statement();
        }
#line 3537 "y.tab.c"
    break;

  case 180: /* block-item-list: block-item  */
#line 966 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3545 "y.tab.c"
    break;

  case 181: /* block-item-list: block-item-list M block-item  */
#line 969 "assgn_4_21CS30059_21CS30038.y"
                                       {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 3554 "y.tab.c"
    break;

  case 182: /* block-item: declaration  */
#line 975 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = new statement();
        }
#line 3562 "y.tab.c"
    break;

  case 183: /* block-item: statement  */
#line 978 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3570 "y.tab.c"
    break;

  case 184: /* expression-statement: expression SEMICOLON  */
#line 983 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[-1].exp);
        }
#line 3578 "y.tab.c"
    break;

  case 185: /* expression-statement: SEMICOLON  */
#line 986 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
        }
#line 3586 "y.tab.c"
    break;

  case 186: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N  */
#line 992 "assgn_4_21CS30059_21CS30038.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-5].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-5].exp)->truelist,(yyvsp[-2].instr));
            list<int> l1 = merge((yyvsp[-5].exp)->falselist,(yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3599 "y.tab.c"
    break;

  case 187: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N ELSE M statement  */
#line 1000 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-8].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-8].exp)->truelist,(yyvsp[-5].instr));
            backpatch((yyvsp[-8].exp)->falselist,(yyvsp[-1].instr));
            list<int> l1 = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3613 "y.tab.c"
    break;

  case 188: /* selection-statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 1009 "assgn_4_21CS30059_21CS30038.y"
                                                                         {printf("selection-statement-> SWITCH (expression) statement\n");}
#line 3619 "y.tab.c"
    break;

  case 189: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS M loop-statement  */
#line 1012 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-3].exp));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-4].instr));
            backpatch((yyvsp[-3].exp)->truelist, (yyvsp[-1].instr));
            (yyval.stmt)->nextlist = (yyvsp[-3].exp)->falselist;
            emit("goto", convertInttoString((yyvsp[-4].instr)));
            blockName = "";
            switchTable(currentST->parent);

        }
#line 3635 "y.tab.c"
    break;

  case 190: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1023 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                             {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-5].exp));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-6].instr));
            backpatch((yyvsp[-5].exp)->truelist, (yyvsp[-2].instr));
            (yyval.stmt)->nextlist = (yyvsp[-5].exp)->falselist;
            emit("goto", convertInttoString((yyvsp[-6].instr)));
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3650 "y.tab.c"
    break;

  case 191: /* iteration-statement: DO D M loop-statement M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1033 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-7].instr));
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3663 "y.tab.c"
    break;

  case 192: /* iteration-statement: DO D LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1041 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                           {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-8].instr));
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3676 "y.tab.c"
    break;

  case 193: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1049 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->nextlist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", convertInttoString((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3692 "y.tab.c"
    break;

  case 194: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1060 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                              {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-6].exp));
            backpatch((yyvsp[-6].exp)->truelist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", convertInttoString((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3708 "y.tab.c"
    break;

  case 195: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1071 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-8].exp));
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].instr));
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));
            emit("goto", convertInttoString((yyvsp[-7].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3724 "y.tab.c"
    break;

  case 196: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1082 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                                                                        {
            (yyval.stmt) = new statement();                   
            convertInttoBool((yyvsp[-8].exp));                 
            backpatch((yyvsp[-8].exp)->truelist, (yyvsp[-3].instr));          
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));          
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));          
            emit("goto", convertInttoString((yyvsp[-7].instr))); 
            (yyval.stmt)->nextlist = (yyvsp[-8].exp)->falselist;           
            blockName = "";
            switchTable(currentST->parent);
        }
#line 3740 "y.tab.c"
    break;

  case 197: /* F: %empty  */
#line 1094 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "FOR";
    }
#line 3748 "y.tab.c"
    break;

  case 198: /* W: %empty  */
#line 1098 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "WHILE";
    }
#line 3756 "y.tab.c"
    break;

  case 199: /* D: %empty  */
#line 1102 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "DO_WHILE";
    }
#line 3764 "y.tab.c"
    break;

  case 200: /* jump-statement: GOTO IDENTIFIER SEMICOLON  */
#line 1107 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
#line 3770 "y.tab.c"
    break;

  case 201: /* jump-statement: CONTINUE SEMICOLON  */
#line 1108 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = new statement();
        }
#line 3778 "y.tab.c"
    break;

  case 202: /* jump-statement: BREAK SEMICOLON  */
#line 1111 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.stmt) = new statement();
        }
#line 3786 "y.tab.c"
    break;

  case 203: /* jump-statement: RETURN expression SEMICOLON  */
#line 1114 "assgn_4_21CS30059_21CS30038.y"
                                      {
            (yyval.stmt) = new statement();
            emit("return", (yyvsp[-1].exp)->loc->name);
        }
#line 3795 "y.tab.c"
    break;

  case 204: /* jump-statement: RETURN SEMICOLON  */
#line 1118 "assgn_4_21CS30059_21CS30038.y"
                           {
            (yyval.stmt) = new statement();
            emit("return", "");
        }
#line 3804 "y.tab.c"
    break;

  case 205: /* translation-unit: external-declaration  */
#line 1124 "assgn_4_21CS30059_21CS30038.y"
                             {printf("translation-unit-> external-declaration\n");}
#line 3810 "y.tab.c"
    break;

  case 206: /* translation-unit: translation-unit external-declaration  */
#line 1125 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("translation-unit-> translation-unit external-declaration\n");}
#line 3816 "y.tab.c"
    break;

  case 207: /* external-declaration: function-definition  */
#line 1128 "assgn_4_21CS30059_21CS30038.y"
                            {printf("external-declaration-> function-definition\n");}
#line 3822 "y.tab.c"
    break;

  case 208: /* external-declaration: declaration  */
#line 1129 "assgn_4_21CS30059_21CS30038.y"
                      {printf("external-declaration-> declaration\n");}
#line 3828 "y.tab.c"
    break;

  case 209: /* function-definition: declaration-specifiers declarator declaration-listopt change-table LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1132 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            currentST->parent = globalST;
            STCount=0;
            switchTable(globalST);
        }
#line 3838 "y.tab.c"
    break;

  case 210: /* declaration-listopt: declaration-list  */
#line 1139 "assgn_4_21CS30059_21CS30038.y"
                         {printf("declaration-listopt-> declaration-list\n");}
#line 3844 "y.tab.c"
    break;

  case 211: /* declaration-listopt: %empty  */
#line 1140 "assgn_4_21CS30059_21CS30038.y"
                 {printf("declaration-listopt-> \n");}
#line 3850 "y.tab.c"
    break;

  case 212: /* declaration-list: declaration  */
#line 1143 "assgn_4_21CS30059_21CS30038.y"
                    {printf("declaration-list-> declaration\n");}
#line 3856 "y.tab.c"
    break;

  case 213: /* declaration-list: declaration-list declaration  */
#line 1144 "assgn_4_21CS30059_21CS30038.y"
                                       {printf("declaration-list-> declaration-list declaration\n");}
#line 3862 "y.tab.c"
    break;


#line 3866 "y.tab.c"

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

#line 1146 "assgn_4_21CS30059_21CS30038.y"




int yywrap()
{
    return 1;
}

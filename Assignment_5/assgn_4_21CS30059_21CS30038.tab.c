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
    extern string varType;
    extern char* yytext;
    void yyerror(char *s) {
        printf("error: %s at line %d\n", s, lineno);
        printf("Unable to parse: %s",yytext);
    }
    //int yydebug=1;

#line 87 "assgn_4_21CS30059_21CS30038.tab.c"

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

#include "assgn_4_21CS30059_21CS30038.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_FLOATING_CONSTANT = 5,          /* FLOATING_CONSTANT  */
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
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_GOTO = 21,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_TYPE_QUALIFIER = 25,            /* TYPE_QUALIFIER  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 27,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_ENUMERATION_CONST = 28,         /* ENUMERATION_CONST  */
  YYSYMBOL_KEYWORD = 29,                   /* KEYWORD  */
  YYSYMBOL_PUNCTUATOR = 30,                /* PUNCTUATOR  */
  YYSYMBOL_ERROR = 31,                     /* ERROR  */
  YYSYMBOL_VOID = 32,                      /* VOID  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_SHORT = 34,                     /* SHORT  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_LONG = 36,                      /* LONG  */
  YYSYMBOL_DOUBLE = 37,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 40,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 41,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 42,                 /* IMAGINARY  */
  YYSYMBOL_IF = 43,                        /* IF  */
  YYSYMBOL_EQUALS = 44,                    /* EQUALS  */
  YYSYMBOL_INCREMENT = 45,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 46,                 /* DECREMENT  */
  YYSYMBOL_AND = 47,                       /* AND  */
  YYSYMBOL_STAR = 48,                      /* STAR  */
  YYSYMBOL_PLUS = 49,                      /* PLUS  */
  YYSYMBOL_MINUS = 50,                     /* MINUS  */
  YYSYMBOL_TILDE = 51,                     /* TILDE  */
  YYSYMBOL_NOT = 52,                       /* NOT  */
  YYSYMBOL_DIV = 53,                       /* DIV  */
  YYSYMBOL_MOD = 54,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 55,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 56,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 57,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 58,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 59,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 60,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL_TO = 61,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 62,              /* NOT_EQUAL_TO  */
  YYSYMBOL_XOR = 63,                       /* XOR  */
  YYSYMBOL_OR = 64,                        /* OR  */
  YYSYMBOL_AND_AND = 65,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 66,                     /* OR_OR  */
  YYSYMBOL_QUESTION = 67,                  /* QUESTION  */
  YYSYMBOL_COLON = 68,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 69,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 70,                     /* COMMA  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 71,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 72,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 73,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 74,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 75,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 76,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_DOT = 77,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 78,                  /* ELLIPSIS  */
  YYSYMBOL_ARROW = 79,                     /* ARROW  */
  YYSYMBOL_LOWER_THAN_ELSE = 80,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_82_primary_expression = 82,     /* primary-expression  */
  YYSYMBOL_83_postfix_expression = 83,     /* postfix-expression  */
  YYSYMBOL_84_argument_expression_list = 84, /* argument-expression-list  */
  YYSYMBOL_85_argument_expression_listopt = 85, /* argument-expression-listopt  */
  YYSYMBOL_86_unary_expression = 86,       /* unary-expression  */
  YYSYMBOL_87_unary_operator = 87,         /* unary-operator  */
  YYSYMBOL_88_cast_expression = 88,        /* cast-expression  */
  YYSYMBOL_89_multiplicative_expression = 89, /* multiplicative-expression  */
  YYSYMBOL_90_additive_expression = 90,    /* additive-expression  */
  YYSYMBOL_91_shift_expression = 91,       /* shift-expression  */
  YYSYMBOL_92_relational_expression = 92,  /* relational-expression  */
  YYSYMBOL_93_equality_expression = 93,    /* equality-expression  */
  YYSYMBOL_94_AND_expression = 94,         /* AND-expression  */
  YYSYMBOL_95_exclusive_OR_expression = 95, /* exclusive-OR-expression  */
  YYSYMBOL_96_inclusive_OR_expression = 96, /* inclusive-OR-expression  */
  YYSYMBOL_97_logical_AND_expression = 97, /* logical-AND-expression  */
  YYSYMBOL_98_logical_OR_expression = 98,  /* logical-OR-expression  */
  YYSYMBOL_99_conditional_expression = 99, /* conditional-expression  */
  YYSYMBOL_M = 100,                        /* M  */
  YYSYMBOL_N = 101,                        /* N  */
  YYSYMBOL_102_assignment_expression = 102, /* assignment-expression  */
  YYSYMBOL_103_assignment_operator = 103,  /* assignment-operator  */
  YYSYMBOL_expression = 104,               /* expression  */
  YYSYMBOL_105_constant_expression = 105,  /* constant-expression  */
  YYSYMBOL_declaration = 106,              /* declaration  */
  YYSYMBOL_107_declaration_specifiers = 107, /* declaration-specifiers  */
  YYSYMBOL_108_type_qualifier = 108,       /* type-qualifier  */
  YYSYMBOL_109_init_declarator_list = 109, /* init-declarator-list  */
  YYSYMBOL_110_init_declarator = 110,      /* init-declarator  */
  YYSYMBOL_111_type_specifier = 111,       /* type-specifier  */
  YYSYMBOL_112_storage_class_specifier = 112, /* storage-class-specifier  */
  YYSYMBOL_113_specifier_qualifier_list = 113, /* specifier-qualifier-list  */
  YYSYMBOL_114_specifier_qualifier_listopt = 114, /* specifier-qualifier-listopt  */
  YYSYMBOL_115_enum_specifier = 115,       /* enum-specifier  */
  YYSYMBOL_identifieropt = 116,            /* identifieropt  */
  YYSYMBOL_117_enumerator_list = 117,      /* enumerator-list  */
  YYSYMBOL_enumerator = 118,               /* enumerator  */
  YYSYMBOL_119_function_specifier = 119,   /* function-specifier  */
  YYSYMBOL_declarator = 120,               /* declarator  */
  YYSYMBOL_121_direct_declarator = 121,    /* direct-declarator  */
  YYSYMBOL_122_type_qualifier_listopt = 122, /* type-qualifier-listopt  */
  YYSYMBOL_pointer = 123,                  /* pointer  */
  YYSYMBOL_124_type_qualifier_list = 124,  /* type-qualifier-list  */
  YYSYMBOL_125_parameter_type_list = 125,  /* parameter-type-list  */
  YYSYMBOL_126_parameter_list = 126,       /* parameter-list  */
  YYSYMBOL_127_parameter_declaration = 127, /* parameter-declaration  */
  YYSYMBOL_128_identifier_list = 128,      /* identifier-list  */
  YYSYMBOL_129_type_name = 129,            /* type-name  */
  YYSYMBOL_initializer = 130,              /* initializer  */
  YYSYMBOL_131_initializer_list = 131,     /* initializer-list  */
  YYSYMBOL_designationopt = 132,           /* designationopt  */
  YYSYMBOL_designation = 133,              /* designation  */
  YYSYMBOL_134_designator_list = 134,      /* designator-list  */
  YYSYMBOL_designator = 135,               /* designator  */
  YYSYMBOL_statement = 136,                /* statement  */
  YYSYMBOL_137_loop_statement = 137,       /* loop-statement  */
  YYSYMBOL_138_labeled_statement = 138,    /* labeled-statement  */
  YYSYMBOL_139_compound_statement = 139,   /* compound-statement  */
  YYSYMBOL_A = 140,                        /* A  */
  YYSYMBOL_141_change_table = 141,         /* change-table  */
  YYSYMBOL_142_block_item_listopt = 142,   /* block-item-listopt  */
  YYSYMBOL_143_block_item_list = 143,      /* block-item-list  */
  YYSYMBOL_144_block_item = 144,           /* block-item  */
  YYSYMBOL_145_expression_statement = 145, /* expression-statement  */
  YYSYMBOL_146_selection_statement = 146,  /* selection-statement  */
  YYSYMBOL_147_iteration_statement = 147,  /* iteration-statement  */
  YYSYMBOL_F = 148,                        /* F  */
  YYSYMBOL_W = 149,                        /* W  */
  YYSYMBOL_D = 150,                        /* D  */
  YYSYMBOL_151_jump_statement = 151,       /* jump-statement  */
  YYSYMBOL_152_translation_unit = 152,     /* translation-unit  */
  YYSYMBOL_153_external_declaration = 153, /* external-declaration  */
  YYSYMBOL_154_function_definition = 154,  /* function-definition  */
  YYSYMBOL_155_declaration_listopt = 155,  /* declaration-listopt  */
  YYSYMBOL_156_declaration_list = 156      /* declaration-list  */
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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1068

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  389

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    67,    72,    77,    82,    88,    91,    97,
     116,   126,   127,   128,   134,   140,   141,   144,   148,   154,
     157,   160,   163,   167,   171,   202,   203,   206,   209,   212,
     215,   218,   221,   226,   229,   235,   251,   263,   275,   285,
     288,   300,   314,   317,   329,   343,   346,   361,   376,   391,
     408,   411,   428,   447,   450,   467,   470,   487,   490,   507,
     510,   524,   527,   541,   544,   563,   568,   576,   579,   598,
     599,   602,   605,   608,   611,   612,   619,   620,   621,   622,
     623,   624,   625,   626,   629,   632,   633,   636,   639,   648,
     651,   654,   657,   660,   663,   666,   669,   672,   675,   678,
     681,   684,   689,   690,   693,   694,   697,   698,   701,   702,
     703,   706,   707,   710,   711,   714,   715,   718,   721,   730,
     733,   737,   740,   743,   746,   777,   797,   798,   799,   800,
     801,   802,   813,   814,   828,   829,   832,   835,   840,   841,
     844,   845,   848,   849,   852,   853,   856,   857,   860,   863,
     866,   867,   870,   871,   874,   875,   878,   881,   882,   885,
     886,   889,   890,   893,   897,   900,   903,   908,   909,   913,
     916,   919,   924,   925,   926,   929,   934,   945,   959,   962,
     967,   970,   976,   979,   984,   987,   992,  1001,  1010,  1013,
    1024,  1034,  1042,  1050,  1061,  1072,  1083,  1095,  1099,  1103,
    1108,  1109,  1112,  1115,  1119,  1125,  1126,  1129,  1130,  1133,
    1140,  1141,  1144,  1145
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
  "INTEGER", "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "ENUM", "TYPE_SPECIFIER_TOKEN", "STORAGE_CLASS_SPECIFIER",
  "STATIC_TOKEN", "FUNCTION_SPECIFIER", "CASE", "DEFAULT", "SIZEOF",
  "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "TYPE_QUALIFIER", "FLOAT", "ASSIGNMENT_OPERATOR",
  "ENUMERATION_CONST", "KEYWORD", "PUNCTUATOR", "ERROR", "VOID", "CHAR",
  "SHORT", "INT", "LONG", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL",
  "COMPLEX", "IMAGINARY", "IF", "EQUALS", "INCREMENT", "DECREMENT", "AND",
  "STAR", "PLUS", "MINUS", "TILDE", "NOT", "DIV", "MOD", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL",
  "GREATER_THAN_EQUAL", "EQUAL_TO", "NOT_EQUAL_TO", "XOR", "OR", "AND_AND",
  "OR_OR", "QUESTION", "COLON", "SEMICOLON", "COMMA",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "DOT",
  "ELLIPSIS", "ARROW", "LOWER_THAN_ELSE", "$accept", "primary-expression",
  "postfix-expression", "argument-expression-list",
  "argument-expression-listopt", "unary-expression", "unary-operator",
  "cast-expression", "multiplicative-expression", "additive-expression",
  "shift-expression", "relational-expression", "equality-expression",
  "AND-expression", "exclusive-OR-expression", "inclusive-OR-expression",
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

#define YYPACT_NINF (-330)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-212)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     889,    16,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,   101,
     889,   889,   889,  -330,   889,  1026,  -330,  -330,   -10,    -3,
    -330,    50,  -330,    61,   126,  -330,   983,   -31,    28,  -330,
    -330,  -330,  -330,  -330,  -330,   103,  -330,    90,   123,    74,
    -330,    61,   635,  -330,   101,  -330,   889,   489,   172,   -31,
     118,    91,  -330,  -330,  -330,  -330,  -330,   133,  -330,  -330,
    -330,  -330,  -330,   888,   905,   905,  -330,  -330,  -330,  -330,
    -330,  -330,   -19,   383,  -330,   396,   -12,   955,  -330,   110,
     150,   159,   151,   162,   137,   117,   122,   128,   171,  -330,
    -330,  -330,   115,  -330,   708,   130,  -330,   134,   562,  -330,
      -4,   210,   955,    31,  -330,   383,  -330,   383,  -330,  -330,
     955,   209,   108,   635,  -330,   -28,  -330,   839,  -330,    32,
     839,  -330,   143,  -330,  -330,   955,   955,   223,   238,  -330,
    -330,   955,  -330,  -330,   955,   955,   955,   955,   955,   955,
     955,   955,   955,   955,   955,   955,   955,   955,   955,   955,
    -330,  -330,   189,   277,   186,   725,  -330,  -330,   955,   191,
    -330,   193,   264,  -330,  -330,    61,   201,   236,  -330,  -330,
    -330,  -330,  -330,   217,   231,   249,  -330,   -51,  -330,  -330,
    -330,  -330,  -330,  -330,   955,  -330,  -330,   775,   -25,   260,
     232,  -330,  -330,  -330,  -330,  -330,  -330,  -330,   110,   110,
     150,   150,   159,   159,   159,   159,   151,   151,   162,   137,
     117,   955,   955,  -330,   263,   955,   266,   257,  -330,  -330,
    -330,   338,   276,   279,   788,   274,  -330,  -330,   170,  -330,
    -330,  -330,  -330,   280,   281,  -330,  -330,  -330,  -330,  -330,
    -330,   284,   287,  -330,  -330,  -330,  -330,  -330,   776,   278,
     278,  -330,  -330,   635,  -330,   -19,  -330,  -330,   955,  -330,
     122,   128,   955,   433,   285,   433,   955,   286,   289,   288,
     291,  -330,  -330,  -330,   184,   955,  -330,  -330,  -330,   277,
    -330,  -330,  -330,  -330,  -330,   113,  -330,   305,  -330,   433,
    -330,    45,  -330,  -330,   652,  -330,  -330,  -330,   305,   277,
    -330,    48,  -330,   308,  -330,   433,  -330,   277,  -330,  -330,
    -330,  -330,  -330,  -330,  -330,   309,   318,  -330,  -330,  -330,
    -330,   319,   376,   332,  -330,  -330,   955,   955,  -330,   320,
    -330,  -330,   433,  -330,    67,   378,   955,   838,   838,  -330,
     324,   325,    77,  -330,  -330,   386,  -330,   652,   955,   330,
     955,   955,  -330,   277,  -330,    96,  -330,   305,   305,   433,
     329,   335,   334,   336,  -330,  -330,  -330,  -330,  -330,   506,
     579,   277,  -330,   277,  -330,   331,   337,  -330,  -330
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   112,   102,   103,   117,    84,    94,    89,    90,    91,
      92,    93,    95,    96,    97,    98,    99,   100,   208,     0,
      81,    79,    77,   101,    83,     0,   205,   207,   109,     0,
     120,   135,    75,     0,     0,    85,    87,   119,     0,    80,
      78,    76,    82,     1,   206,     0,   138,   136,   134,     0,
      74,     0,     0,   212,     0,   177,   210,     0,   177,   118,
     115,     0,   113,   137,   139,   121,    86,    87,     2,     3,
       4,     5,     6,     0,     0,     0,    27,    28,    29,    30,
      31,    32,   155,     0,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    67,
     149,    88,     0,   213,     0,    28,   125,     0,     0,   146,
       0,     0,     0,     0,   108,     0,    25,     0,    22,    23,
       0,     0,     0,     0,   154,     0,   157,   107,    71,     0,
     107,   148,     0,    13,    14,     0,    20,     0,     0,    70,
      69,     0,    33,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    65,     0,   179,     0,     0,   130,   124,     0,    28,
     122,     0,     0,   132,   133,   145,     0,   140,   142,    73,
     116,   110,   114,     0,     0,     0,   160,   155,   150,   152,
     156,   158,   106,   105,     0,     7,   104,     0,     0,    19,
       0,    17,    11,    12,    68,    36,    37,    38,    40,    41,
      43,    44,    46,    47,    48,    49,    51,    52,    54,    56,
      58,     0,     0,    65,     2,     0,     0,     0,   198,   199,
     197,     0,     0,     0,     0,     0,   185,   176,     0,   182,
     183,   161,   162,     0,    65,   180,   163,   164,   165,   166,
     127,     0,     0,   129,   123,   147,   144,   131,     0,    26,
       0,   159,   151,     0,    72,   155,    34,     9,     0,    10,
      60,    62,     0,     0,     0,     0,     0,     0,    65,     0,
       0,   201,   202,   204,     0,     0,   177,   184,   209,     0,
     126,   128,   141,   143,   153,     0,    18,    66,   172,     0,
     174,     0,   176,    65,     0,   176,   200,   203,    66,   179,
     181,   155,    15,     0,   173,     0,   177,   179,    65,   167,
     168,   169,   170,   171,   177,     0,     0,    16,    65,   188,
      65,     0,     0,     0,    65,   175,     0,     0,    65,     0,
      65,    65,     0,    64,     0,     0,     0,     0,     0,    66,
      65,     0,     0,    65,    65,   186,    65,     0,     0,     0,
       0,     0,    65,   179,   189,     0,   191,    66,    66,     0,
       0,     0,     0,     0,   187,   190,   192,    65,    65,     0,
       0,   179,   193,   179,   194,     0,     0,   195,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -330,  -330,  -330,  -330,  -330,   -66,  -330,   -77,   114,   124,
      80,   149,   256,   248,   255,   205,   221,  -330,  -109,  -149,
    -151,     3,  -330,   -82,  -107,     0,    17,  -330,  -330,   393,
     142,  -330,   -65,   297,  -330,  -330,  -330,   346,  -330,   -15,
     407,  -330,   402,   -43,  -330,  -330,   202,  -330,   -88,  -118,
     196,  -181,  -330,  -330,   339,  -202,  -329,  -280,  -330,  -188,
     -56,  -287,  -330,   173,  -206,  -256,  -247,  -330,  -330,  -330,
    -245,  -330,   438,  -330,  -330,  -330
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    84,    85,   199,   200,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   221,
     162,   128,   141,   238,   180,   239,    54,    20,    34,    35,
      21,    22,   131,   193,    23,    29,    61,    62,    24,    67,
      37,    47,    38,    48,   176,   177,   178,   110,   132,   101,
     122,   123,   124,   125,   126,   240,   318,   241,   242,   286,
     102,   243,   244,   245,   246,   247,   248,   279,   277,   278,
     249,    25,    26,    27,    55,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   129,   111,   179,    36,   189,   263,   116,   118,   119,
     143,   179,   222,   185,   108,   139,   190,    19,    49,    28,
     120,   142,   326,   262,   319,    18,   121,   183,   364,   184,
     331,    30,   140,   129,    60,   129,    53,    39,    40,    41,
      57,    42,    19,   120,    58,   194,   142,   267,   321,   121,
     382,   384,   120,   198,   142,   100,   103,   322,   121,   323,
     107,   165,   192,  -111,    30,   192,   172,   205,   206,   207,
      45,   298,   173,   300,   272,    46,   370,   319,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   385,   289,   386,   314,   320,   319,
     319,   321,   194,    33,    30,   181,    60,   164,   195,    31,
     322,   171,   323,   329,   316,   194,   179,   324,   274,   120,
     266,   315,   327,   321,   321,   121,   100,   341,   175,   304,
     263,   142,   322,   322,   323,   323,    33,   194,    31,   201,
     349,   353,   354,   350,   204,   294,   313,   194,    64,    31,
      65,   320,   284,   359,   317,   142,   142,   325,   144,   142,
     256,   113,   112,   145,   146,   114,   194,   374,   251,   332,
      32,   252,   371,   320,   320,   109,    33,    52,   187,   336,
     158,   337,   188,   311,   157,   342,   159,   312,   163,   345,
     297,   347,   348,   160,   301,    50,    51,   264,   355,   147,
     148,   357,   166,   308,   360,   361,   167,   363,   151,   152,
     153,   154,   186,   369,   149,   150,   372,   373,     1,   197,
       2,     3,     4,   155,   156,   130,   202,   343,   379,   380,
     309,   212,   213,   214,   215,     5,     6,   161,   -66,   287,
     194,   203,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   307,   194,   344,   223,   130,   250,   130,
     330,   208,   209,   253,   352,   254,   100,   255,   333,   130,
     142,   296,   130,   210,   211,   175,   365,   257,   367,   368,
     224,    69,    70,    71,    72,     1,   174,     2,     3,     4,
     225,   226,    73,   259,   227,   228,   229,   230,   231,   232,
     233,   234,     5,     6,   216,   217,   258,   260,   269,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     235,   261,    74,    75,    76,    77,    78,    79,    80,    81,
     268,   273,   276,   340,   275,    68,    69,    70,    71,    72,
       1,   280,     2,     3,     4,   281,   236,    73,   282,   285,
     237,   265,    83,   299,   288,  -178,   290,     5,     6,   291,
     306,   302,   303,   305,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   194,   328,    74,    75,    76,
      77,    78,    79,    80,    81,   334,    68,    69,    70,    71,
      72,     1,   335,   338,   339,   346,   351,   356,    73,   366,
     358,   236,   362,   375,   376,   387,   219,    83,   127,     6,
     377,   388,   378,   218,   220,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   270,   196,    74,    75,
      76,    77,    78,    79,    80,    81,   224,    69,    70,    71,
      72,   133,   134,   271,    66,    59,   225,   226,    73,    63,
     227,   228,   229,   230,   231,   232,   233,   234,    83,   182,
     293,   295,   310,    44,   191,     0,     0,   135,     0,     0,
       0,   136,     0,   137,     0,   138,   235,     0,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,     0,     0,     0,
     104,     0,   236,     0,    73,     0,   237,     0,    83,   224,
      69,    70,    71,    72,    46,     0,     0,     0,     0,   225,
     226,    73,     0,   227,   228,   229,   230,   231,   232,   233,
     234,     0,     0,     0,    74,    75,    76,   105,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,   235,
       0,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,   106,     0,     0,    83,    68,    69,    70,    71,    72,
       0,     0,     0,   168,     0,   236,     0,    73,     0,   381,
       0,    83,   224,    69,    70,    71,    72,    64,     0,     0,
       0,     0,   225,   226,    73,     0,   227,   228,   229,   230,
     231,   232,   233,   234,     0,     0,     0,    74,    75,    76,
     169,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,   235,     0,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,   170,     0,     0,    83,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,   236,     0,
      73,     0,   383,     0,    83,   224,    69,    70,    71,    72,
       0,     0,     0,     0,     0,   225,   226,    73,     0,   227,
     228,   229,   230,   231,   232,   233,   234,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,   235,     0,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,    82,     0,
      83,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,   236,     0,    73,     0,     0,     0,    83,    68,    69,
      70,    71,    72,    46,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    68,    69,
      70,    71,    72,    83,     1,     0,     2,     3,     4,     0,
      73,    68,    69,    70,    71,    72,     0,     0,     0,     0,
      83,     5,     6,    73,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      74,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    68,    69,    70,    71,    72,     0,     1,   265,     0,
      83,     0,     0,    73,   292,     0,     0,   283,     0,     0,
       0,     0,     0,    83,   127,     6,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    68,    69,    70,    71,    72,     0,     1,     0,     2,
       3,     4,     0,    73,     0,     0,     0,   236,    68,    69,
      70,    71,    72,    83,     5,     6,     0,     0,     0,     0,
      73,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    74,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    68,    69,
      70,    71,    72,   115,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     3,     4,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,     5,     6,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    43,    52,     0,     0,
      83,     0,     0,     0,     1,     0,     2,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,  -211,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17
};

static const yytype_int16 yycheck[] =
{
       0,    83,    58,   112,    19,   123,   187,    73,    74,    75,
      87,   120,   161,   120,    57,    27,    44,     0,    33,     3,
      71,    87,   309,    74,   304,    25,    77,   115,   357,   117,
     317,     3,    44,   115,     3,   117,    36,    20,    21,    22,
      71,    24,    25,    71,    75,    70,   112,    72,   304,    77,
     379,   380,    71,   135,   120,    52,    56,   304,    77,   304,
      57,   104,   127,    73,     3,   130,    70,   144,   145,   146,
      73,   273,    76,   275,   223,    25,   363,   357,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   381,   244,   383,   299,   304,   379,
     380,   357,    70,    75,     3,    74,     3,   104,    76,    48,
     357,   108,   357,   315,   302,    70,   225,   305,   225,    71,
     197,    76,    74,   379,   380,    77,   123,   333,   111,   278,
     311,   197,   379,   380,   379,   380,    75,    70,    48,   136,
     342,   347,   348,    76,   141,   263,   297,    70,    25,    48,
      76,   357,   234,    76,   303,   221,   222,   308,    48,   225,
     175,    70,    44,    53,    54,    74,    70,   369,   165,   318,
      69,   168,    76,   379,   380,     3,    75,    44,    70,   328,
      63,   330,    74,    70,    47,   334,    64,    74,    73,   338,
     272,   340,   341,    65,   276,    69,    70,   194,   349,    49,
      50,   350,    72,   285,   353,   354,    72,   356,    57,    58,
      59,    60,     3,   362,    55,    56,   367,   368,     8,    76,
      10,    11,    12,    61,    62,    83,     3,   336,   377,   378,
     286,   151,   152,   153,   154,    25,    26,    66,    67,    69,
      70,     3,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    69,    70,   337,    67,   115,    72,   117,
     316,   147,   148,    72,   346,    72,   263,     3,   324,   127,
     336,   268,   130,   149,   150,   258,   358,    76,   360,   361,
       3,     4,     5,     6,     7,     8,    76,    10,    11,    12,
      13,    14,    15,    76,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   155,   156,    70,    76,    76,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    72,    45,    46,    47,    48,    49,    50,    51,    52,
      70,    68,    75,   333,    68,     3,     4,     5,     6,     7,
       8,     3,    10,    11,    12,    69,    69,    15,    69,    75,
      73,    73,    75,    68,    74,    74,    72,    25,    26,    72,
      69,    75,    73,    75,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    70,    68,    45,    46,    47,
      48,    49,    50,    51,    52,    76,     3,     4,     5,     6,
       7,     8,    74,    74,    18,    75,    18,    73,    15,    69,
      75,    69,    16,    74,    69,    74,   158,    75,    25,    26,
      76,    74,    76,   157,   159,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   221,   130,    45,    46,
      47,    48,    49,    50,    51,    52,     3,     4,     5,     6,
       7,    45,    46,   222,    51,    38,    13,    14,    15,    47,
      17,    18,    19,    20,    21,    22,    23,    24,    75,   113,
     258,   265,   289,    25,   125,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    77,    -1,    79,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    -1,    69,    -1,    15,    -1,    73,    -1,    75,     3,
       4,     5,     6,     7,    25,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    72,    -1,    -1,    75,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    -1,    69,    -1,    15,    -1,    73,
      -1,    75,     3,     4,     5,     6,     7,    25,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    72,    -1,    -1,    75,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      15,    -1,    73,    -1,    75,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    73,    -1,
      75,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    15,    -1,    -1,    -1,    75,     3,     4,
       5,     6,     7,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,     3,     4,
       5,     6,     7,    75,     8,    -1,    10,    11,    12,    -1,
      15,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      75,    25,    26,    15,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,     3,     4,     5,     6,     7,    -1,     8,    73,    -1,
      75,    -1,    -1,    15,    78,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    75,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,     3,     4,     5,     6,     7,    -1,     8,    -1,    10,
      11,    12,    -1,    15,    -1,    -1,    -1,    69,     3,     4,
       5,     6,     7,    75,    25,    26,    -1,    -1,    -1,    -1,
      15,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,     3,     4,
       5,     6,     7,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    25,    26,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    44,    -1,    -1,
      75,    -1,    -1,    -1,     8,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    73,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    10,    11,    12,    25,    26,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   106,   107,
     108,   111,   112,   115,   119,   152,   153,   154,     3,   116,
       3,    48,    69,    75,   109,   110,   120,   121,   123,   107,
     107,   107,   107,     0,   153,    73,    25,   122,   124,   120,
      69,    70,    44,   106,   107,   155,   156,    71,    75,   121,
       3,   117,   118,   123,    25,    76,   110,   120,     3,     4,
       5,     6,     7,    15,    45,    46,    47,    48,    49,    50,
      51,    52,    73,    75,    82,    83,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     102,   130,   141,   106,    11,    48,    72,   102,   124,     3,
     128,   141,    44,    70,    74,    75,    86,    75,    86,    86,
      71,    77,   131,   132,   133,   134,   135,    25,   102,   104,
     111,   113,   129,    45,    46,    71,    75,    77,    79,    27,
      44,   103,    86,    88,    48,    53,    54,    49,    50,    55,
      56,    57,    58,    59,    60,    61,    62,    47,    63,    64,
      65,    66,   101,    73,   102,   124,    72,    72,    11,    48,
      72,   102,    70,    76,    76,   107,   125,   126,   127,    99,
     105,    74,   118,   129,   129,   105,     3,    70,    74,   130,
      44,   135,   113,   114,    70,    76,   114,    76,   104,    84,
      85,   102,     3,     3,   102,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    92,    92,    93,    94,
      95,   100,   100,    67,     3,    13,    14,    17,    18,    19,
      20,    21,    22,    23,    24,    43,    69,    73,   104,   106,
     136,   138,   139,   142,   143,   144,   145,   146,   147,   151,
      72,   102,   102,    72,    72,     3,   120,    76,    70,    76,
      76,    72,    74,   132,   102,    73,    88,    72,    70,    76,
      96,    97,   100,    68,   105,    68,    75,   149,   150,   148,
       3,    69,    69,    69,   104,    75,   140,    69,    74,   100,
      72,    72,    78,   127,   130,   131,   102,   104,   136,    68,
     136,   104,    75,    73,   100,    75,    69,    69,   104,   141,
     144,    70,    74,   101,   136,    76,   140,   100,   137,   138,
     145,   146,   147,   151,   140,   101,   142,    74,    68,   136,
     141,   142,   100,   141,    76,    74,   100,   100,    74,    18,
     106,   145,   100,    99,   104,   100,    75,   100,   100,   136,
      76,    18,   104,   145,   145,   101,    73,   100,    75,    76,
     100,   100,    16,   100,   137,   104,    69,   104,   104,   100,
     142,    76,   101,   101,   136,    74,    69,    76,    76,   100,
     100,    73,   137,    73,   137,   142,   142,    74,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   102,   102,   103,
     103,   104,   104,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   130,
     130,   130,   131,   131,   132,   132,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   138,   138,   138,   139,   140,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   147,
     147,   147,   147,   147,   147,   147,   147,   148,   149,   150,
     151,   151,   151,   151,   151,   152,   152,   153,   153,   154,
     155,   155,   156,   156
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
#line 62 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc = (yyvsp[0].pointer);
            (yyval.exp)->type = "non_bool";
            }
#line 1668 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 3: /* primary-expression: INTEGER  */
#line 67 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("int"),convertInttoString((yyvsp[0].intval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].intval));
        }
#line 1678 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 4: /* primary-expression: FLOATING_CONSTANT  */
#line 72 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("float"),convertFloattoString((yyvsp[0].floatval)));
            emit("=",(yyval.exp)->loc->name,(yyvsp[0].floatval));
        }
#line 1688 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 5: /* primary-expression: CHARACTER_CONSTANT  */
#line 77 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("char"),string((yyvsp[0].charval)));
            emit("=",(yyval.exp)->loc->name,string((yyvsp[0].charval)));
        }
#line 1698 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 6: /* primary-expression: STRING_LITERAL  */
#line 82 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.exp) = new expression();
            (yyval.exp)->loc=symbolTable::gentemp(new ttype("ptr"),string((yyvsp[0].charval)));
            //emit($$->loc->name,$1,"=");
            (yyval.exp)->loc->type->arrtype = new ttype("char");
        }
#line 1709 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 7: /* primary-expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 88 "assgn_4_21CS30059_21CS30038.y"
                                                         {printf("primary-expression-> (expression)\n");}
#line 1715 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 8: /* postfix-expression: primary-expression  */
#line 91 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = new aarray();
            (yyval.Array)->loc = (yyvsp[0].exp)->loc;
            (yyval.Array)->Array = (yyval.Array)->loc;
            (yyval.Array)->type = (yyvsp[0].exp)->loc->type;
        }
#line 1726 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 9: /* postfix-expression: postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 97 "assgn_4_21CS30059_21CS30038.y"
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
#line 1750 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression LEFT_PARENTHESIS argument-expression-listopt RIGHT_PARENTHESIS  */
#line 116 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            (yyval.Array) = new aarray();
            //$$->loc = symbolTable::gentemp($1->type);
            //$$->array_type = "func";
            //$$->Array = $1->Array;
            //$$->type = $1->type;
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-3].Array)->type);
            emit("call", (yyval.Array)->Array->name, (yyvsp[-3].Array)->Array->name, convertInttoString((yyvsp[-1].numParams)));
            
        }
#line 1765 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression DOT IDENTIFIER  */
#line 126 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("postfix-expression-> postfix-expression . IDENTIFIER\n");}
#line 1771 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression ARROW IDENTIFIER  */
#line 127 "assgn_4_21CS30059_21CS30038.y"
                                               {printf("postfix-expression-> postfix-expression -> IDENTIFIER\n");}
#line 1777 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression INCREMENT  */
#line 128 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name);
            emit("+", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1"); 
        }
#line 1788 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression DECREMENT  */
#line 134 "assgn_4_21CS30059_21CS30038.y"
                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = symbolTable::gentemp((yyvsp[-1].Array)->Array->type);
            emit("=", (yyval.Array)->Array->name, (yyvsp[-1].Array)->Array->name); 
            emit("-", (yyvsp[-1].Array)->Array->name, (yyvsp[-1].Array)->Array->name, "1");
        }
#line 1799 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 15: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 140 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                {printf("postfix-expression-> (type-name) {initializer-list}\n");}
#line 1805 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 16: /* postfix-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 141 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                      {printf("postfix-expression-> (type-name) {initializer-list,}\n");}
#line 1811 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 17: /* argument-expression-list: assignment-expression  */
#line 144 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.numParams) = 1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 1820 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 18: /* argument-expression-list: argument-expression-list COMMA assignment-expression  */
#line 148 "assgn_4_21CS30059_21CS30038.y"
                                                                {
            (yyval.numParams) = (yyvsp[-2].numParams)+1;
            emit("param",(yyvsp[0].exp)->loc->name);
        }
#line 1829 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 19: /* argument-expression-listopt: argument-expression-list  */
#line 154 "assgn_4_21CS30059_21CS30038.y"
                                  {
            (yyval.numParams) = (yyvsp[0].numParams);
        }
#line 1837 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 20: /* argument-expression-listopt: %empty  */
#line 157 "assgn_4_21CS30059_21CS30038.y"
                  {(yyval.numParams) = 0;}
#line 1843 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 21: /* unary-expression: postfix-expression  */
#line 160 "assgn_4_21CS30059_21CS30038.y"
                            {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 1851 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 22: /* unary-expression: INCREMENT unary-expression  */
#line 163 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("+", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1"); 
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 1860 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 23: /* unary-expression: DECREMENT unary-expression  */
#line 167 "assgn_4_21CS30059_21CS30038.y"
                                      {
            emit("-", (yyvsp[0].Array)->Array->name, (yyvsp[0].Array)->Array->name, "1");
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 1869 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 24: /* unary-expression: unary-operator cast-expression  */
#line 171 "assgn_4_21CS30059_21CS30038.y"
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
#line 1905 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 25: /* unary-expression: SIZEOF unary-expression  */
#line 202 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("unary-expression-> SIZEOF unary-expression\n");}
#line 1911 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS  */
#line 203 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("unary-expression-> SIZEOF (type-name)\n");}
#line 1917 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 27: /* unary-operator: AND  */
#line 206 "assgn_4_21CS30059_21CS30038.y"
             {
            (yyval.unaryOp) = '&';
        }
#line 1925 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 28: /* unary-operator: STAR  */
#line 209 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '*';
        }
#line 1933 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 29: /* unary-operator: PLUS  */
#line 212 "assgn_4_21CS30059_21CS30038.y"
                {
            (yyval.unaryOp) = '+';
        }
#line 1941 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 30: /* unary-operator: MINUS  */
#line 215 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '-';
        }
#line 1949 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 31: /* unary-operator: TILDE  */
#line 218 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.unaryOp) = '~';
        }
#line 1957 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 32: /* unary-operator: NOT  */
#line 221 "assgn_4_21CS30059_21CS30038.y"
               {
            (yyval.unaryOp) = '!';
        }
#line 1965 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 33: /* cast-expression: unary-expression  */
#line 226 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.Array) = (yyvsp[0].Array);
        }
#line 1973 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 34: /* cast-expression: LEFT_PARENTHESIS type-name RIGHT_PARENTHESIS cast-expression  */
#line 229 "assgn_4_21CS30059_21CS30038.y"
                                                                        {
            (yyval.Array) = new aarray();
            (yyval.Array)->Array = convertType((yyvsp[0].Array)->Array, varType);
        }
#line 1982 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 35: /* multiplicative-expression: cast-expression  */
#line 235 "assgn_4_21CS30059_21CS30038.y"
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
#line 2003 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 36: /* multiplicative-expression: multiplicative-expression STAR cast-expression  */
#line 251 "assgn_4_21CS30059_21CS30038.y"
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
#line 2020 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 37: /* multiplicative-expression: multiplicative-expression DIV cast-expression  */
#line 263 "assgn_4_21CS30059_21CS30038.y"
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
#line 2037 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 38: /* multiplicative-expression: multiplicative-expression MOD cast-expression  */
#line 275 "assgn_4_21CS30059_21CS30038.y"
                                                         {
            if(typecheck((yyvsp[-2].exp)->loc,(yyvsp[0].Array)->Array))
            {
                (yyval.exp) = new expression();
                (yyval.exp)->loc = symbolTable::gentemp(new ttype((yyvsp[-2].exp)->loc->type->type));
                emit("%", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].Array)->Array->name);   
            }
        }
#line 2050 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 39: /* additive-expression: multiplicative-expression  */
#line 285 "assgn_4_21CS30059_21CS30038.y"
                                   {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2058 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 40: /* additive-expression: additive-expression PLUS multiplicative-expression  */
#line 288 "assgn_4_21CS30059_21CS30038.y"
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
#line 2075 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 41: /* additive-expression: additive-expression MINUS multiplicative-expression  */
#line 300 "assgn_4_21CS30059_21CS30038.y"
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
#line 2092 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 42: /* shift-expression: additive-expression  */
#line 314 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2100 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 43: /* shift-expression: shift-expression LEFT_SHIFT additive-expression  */
#line 317 "assgn_4_21CS30059_21CS30038.y"
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
#line 2117 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 44: /* shift-expression: shift-expression RIGHT_SHIFT additive-expression  */
#line 329 "assgn_4_21CS30059_21CS30038.y"
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
#line 2134 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 45: /* relational-expression: shift-expression  */
#line 343 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2142 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 46: /* relational-expression: relational-expression LESS_THAN shift-expression  */
#line 346 "assgn_4_21CS30059_21CS30038.y"
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
#line 2162 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 47: /* relational-expression: relational-expression GREATER_THAN shift-expression  */
#line 361 "assgn_4_21CS30059_21CS30038.y"
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
#line 2182 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 48: /* relational-expression: relational-expression LESS_THAN_EQUAL shift-expression  */
#line 376 "assgn_4_21CS30059_21CS30038.y"
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
#line 2202 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 49: /* relational-expression: relational-expression GREATER_THAN_EQUAL shift-expression  */
#line 391 "assgn_4_21CS30059_21CS30038.y"
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
#line 2222 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 50: /* equality-expression: relational-expression  */
#line 408 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2230 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 51: /* equality-expression: equality-expression EQUAL_TO relational-expression  */
#line 411 "assgn_4_21CS30059_21CS30038.y"
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
#line 2252 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 52: /* equality-expression: equality-expression NOT_EQUAL_TO relational-expression  */
#line 428 "assgn_4_21CS30059_21CS30038.y"
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
#line 2274 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 53: /* AND-expression: equality-expression  */
#line 447 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2282 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 54: /* AND-expression: AND-expression AND equality-expression  */
#line 450 "assgn_4_21CS30059_21CS30038.y"
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
#line 2302 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 55: /* exclusive-OR-expression: AND-expression  */
#line 467 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2310 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 56: /* exclusive-OR-expression: exclusive-OR-expression XOR AND-expression  */
#line 470 "assgn_4_21CS30059_21CS30038.y"
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
#line 2330 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 57: /* inclusive-OR-expression: exclusive-OR-expression  */
#line 487 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2338 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 58: /* inclusive-OR-expression: inclusive-OR-expression OR exclusive-OR-expression  */
#line 490 "assgn_4_21CS30059_21CS30038.y"
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
#line 2358 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 59: /* logical-AND-expression: inclusive-OR-expression  */
#line 507 "assgn_4_21CS30059_21CS30038.y"
                                 {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2366 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 60: /* logical-AND-expression: logical-AND-expression AND_AND M inclusive-OR-expression  */
#line 510 "assgn_4_21CS30059_21CS30038.y"
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
#line 2383 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 61: /* logical-OR-expression: logical-AND-expression  */
#line 524 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2391 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 62: /* logical-OR-expression: logical-OR-expression OR_OR M logical-AND-expression  */
#line 527 "assgn_4_21CS30059_21CS30038.y"
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
#line 2408 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 63: /* conditional-expression: logical-OR-expression  */
#line 541 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2416 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 64: /* conditional-expression: logical-OR-expression N QUESTION M expression N COLON M conditional-expression  */
#line 544 "assgn_4_21CS30059_21CS30038.y"
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
#line 2439 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 65: /* M: %empty  */
#line 564 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.instr)=nextinstr();
    }
#line 2447 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 66: /* N: %empty  */
#line 569 "assgn_4_21CS30059_21CS30038.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        emit("goto","");
    }
#line 2457 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 67: /* assignment-expression: conditional-expression  */
#line 576 "assgn_4_21CS30059_21CS30038.y"
                                {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2465 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 68: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 579 "assgn_4_21CS30059_21CS30038.y"
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
#line 2487 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 69: /* assignment-operator: EQUALS  */
#line 598 "assgn_4_21CS30059_21CS30038.y"
                {printf("assignment-operator-> =\n");}
#line 2493 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 70: /* assignment-operator: ASSIGNMENT_OPERATOR  */
#line 599 "assgn_4_21CS30059_21CS30038.y"
                               {printf("assignment-operator-> assignment-operator-token\n");}
#line 2499 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 71: /* expression: assignment-expression  */
#line 602 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.exp) = (yyvsp[0].exp);
        }
#line 2507 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 72: /* expression: expression COMMA assignment-expression  */
#line 605 "assgn_4_21CS30059_21CS30038.y"
                                                  {printf("expression-> expression , assignment-expression\n");}
#line 2513 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 73: /* constant-expression: conditional-expression  */
#line 608 "assgn_4_21CS30059_21CS30038.y"
                                {printf("constant-expression-> conditional-expression\n");}
#line 2519 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 74: /* declaration: declaration-specifiers init-declarator-list SEMICOLON  */
#line 611 "assgn_4_21CS30059_21CS30038.y"
                                                               {printf("declaration-> declaration-specifiers init-declarator-listopt ;\n");}
#line 2525 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 75: /* declaration: declaration-specifiers SEMICOLON  */
#line 612 "assgn_4_21CS30059_21CS30038.y"
                                            {printf("declaration-> declaration-specifiers ;\n");}
#line 2531 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 76: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 619 "assgn_4_21CS30059_21CS30038.y"
                                                        {printf("declaration-specifiers-> storage-class-specifier declaration-specifiers\n");}
#line 2537 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 77: /* declaration-specifiers: storage-class-specifier  */
#line 620 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("declaration-specifiers-> storage-class-specifier\n");}
#line 2543 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 78: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 621 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-specifier declaration-specifiers\n");}
#line 2549 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 79: /* declaration-specifiers: type-specifier  */
#line 622 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-specifier\n");}
#line 2555 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 80: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 623 "assgn_4_21CS30059_21CS30038.y"
                                                 {printf("declaration-specifiers-> type-qualifier declaration-specifiers\n");}
#line 2561 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 81: /* declaration-specifiers: type-qualifier  */
#line 624 "assgn_4_21CS30059_21CS30038.y"
                          {printf("declaration-specifiers-> type-qualifier\n");}
#line 2567 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 82: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 625 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("declaration-specifiers-> function-specifier declaration-specifiers\n");}
#line 2573 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 83: /* declaration-specifiers: function-specifier  */
#line 626 "assgn_4_21CS30059_21CS30038.y"
                              {printf("declaration-specifiers-> function-specifier\n");}
#line 2579 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 84: /* type-qualifier: TYPE_QUALIFIER  */
#line 629 "assgn_4_21CS30059_21CS30038.y"
                        {printf("type-qualifier-> type-qualifier-token\n");}
#line 2585 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 85: /* init-declarator-list: init-declarator  */
#line 632 "assgn_4_21CS30059_21CS30038.y"
                         {printf("init-declarator-list-> init-declarator\n");}
#line 2591 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 86: /* init-declarator-list: init-declarator-list COMMA init-declarator  */
#line 633 "assgn_4_21CS30059_21CS30038.y"
                                                      {printf("init-declarator-list-> init-declarator-list , init-declarator\n");}
#line 2597 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 87: /* init-declarator: declarator  */
#line 636 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.pointer) = (yyvsp[0].pointer);
        }
#line 2605 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 88: /* init-declarator: declarator EQUALS initializer  */
#line 639 "assgn_4_21CS30059_21CS30038.y"
                                         {
            if((yyvsp[0].pointer)->value !="")
            {
                (yyvsp[-2].pointer)->value = (yyvsp[0].pointer)->value;
            }
            emit("=", (yyvsp[-2].pointer)->name, (yyvsp[0].pointer)->name);
        }
#line 2617 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 89: /* type-specifier: VOID  */
#line 648 "assgn_4_21CS30059_21CS30038.y"
            {
            varType = "void";
        }
#line 2625 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 90: /* type-specifier: CHAR  */
#line 651 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "char";
        }
#line 2633 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 91: /* type-specifier: SHORT  */
#line 654 "assgn_4_21CS30059_21CS30038.y"
               {
            varType = "short";
        }
#line 2641 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 92: /* type-specifier: INT  */
#line 657 "assgn_4_21CS30059_21CS30038.y"
             {
            varType = "int";
        }
#line 2649 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 93: /* type-specifier: LONG  */
#line 660 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "long";
        }
#line 2657 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 94: /* type-specifier: FLOAT  */
#line 663 "assgn_4_21CS30059_21CS30038.y"
               {
            varType = "float";
        }
#line 2665 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 95: /* type-specifier: DOUBLE  */
#line 666 "assgn_4_21CS30059_21CS30038.y"
                {
            varType = "double";
        }
#line 2673 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 96: /* type-specifier: SIGNED  */
#line 669 "assgn_4_21CS30059_21CS30038.y"
                {
            varType = "signed";
        }
#line 2681 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 97: /* type-specifier: UNSIGNED  */
#line 672 "assgn_4_21CS30059_21CS30038.y"
                  {
            varType = "unsigned";
        }
#line 2689 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 98: /* type-specifier: BOOL  */
#line 675 "assgn_4_21CS30059_21CS30038.y"
              {
            varType = "bool";
        }
#line 2697 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 99: /* type-specifier: COMPLEX  */
#line 678 "assgn_4_21CS30059_21CS30038.y"
                 {
            varType = "complex";
        }
#line 2705 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 100: /* type-specifier: IMAGINARY  */
#line 681 "assgn_4_21CS30059_21CS30038.y"
                   {
            varType = "imaginary";
        }
#line 2713 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 101: /* type-specifier: enum-specifier  */
#line 684 "assgn_4_21CS30059_21CS30038.y"
                        {
            printf("type-specifier-> enum-specifier\n");
        }
#line 2721 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 102: /* storage-class-specifier: STORAGE_CLASS_SPECIFIER  */
#line 689 "assgn_4_21CS30059_21CS30038.y"
                                {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2727 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 103: /* storage-class-specifier: STATIC_TOKEN  */
#line 690 "assgn_4_21CS30059_21CS30038.y"
                       {printf("storage-class-specifier-> storage_class_specifier_token\n");}
#line 2733 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 104: /* specifier-qualifier-list: type-specifier specifier-qualifier-listopt  */
#line 693 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("specifier-qualifier-list-> type-specifier specifier-qualifier-listopt\n");}
#line 2739 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 105: /* specifier-qualifier-list: TYPE_QUALIFIER specifier-qualifier-listopt  */
#line 694 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("specifier-qualifier-list-> type-qualifier specifier-qualifier-listopt\n");}
#line 2745 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 106: /* specifier-qualifier-listopt: specifier-qualifier-list  */
#line 697 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("specifier-qualifier-listopt-> specifier-qualifier-list\n");}
#line 2751 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 107: /* specifier-qualifier-listopt: %empty  */
#line 698 "assgn_4_21CS30059_21CS30038.y"
                 {printf("specifier-qualifier-listopt-> \n");}
#line 2757 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 108: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET  */
#line 701 "assgn_4_21CS30059_21CS30038.y"
                                                                                  {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list}\n");}
#line 2763 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 109: /* enum-specifier: ENUM IDENTIFIER  */
#line 702 "assgn_4_21CS30059_21CS30038.y"
                          {printf("enum-specifier-> enum IDENTIFIER\n");}
#line 2769 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 110: /* enum-specifier: ENUM identifieropt LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET  */
#line 703 "assgn_4_21CS30059_21CS30038.y"
                                                                                          {printf("enum-specifier-> enum IDENTIFIERopt {enumerator-list,}\n");}
#line 2775 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 111: /* identifieropt: IDENTIFIER  */
#line 706 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifieropt-> IDENTIFIER\n");}
#line 2781 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 112: /* identifieropt: %empty  */
#line 707 "assgn_4_21CS30059_21CS30038.y"
                 {printf("identifieropt-> \n");}
#line 2787 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 113: /* enumerator-list: enumerator  */
#line 710 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-list-> enumerator\n");}
#line 2793 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 114: /* enumerator-list: enumerator-list COMMA enumerator  */
#line 711 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("enumerator-list-> enumerator-list , enumerator\n");}
#line 2799 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 115: /* enumerator: IDENTIFIER  */
#line 714 "assgn_4_21CS30059_21CS30038.y"
                   {printf("enumerator-> enumeration-const\n");}
#line 2805 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 116: /* enumerator: IDENTIFIER EQUALS constant-expression  */
#line 715 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("enumerator-> enumeration-const = constant-expression\n");}
#line 2811 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 117: /* function-specifier: FUNCTION_SPECIFIER  */
#line 718 "assgn_4_21CS30059_21CS30038.y"
                           {printf("function-specifier-> function-specifier-token\n");}
#line 2817 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 118: /* declarator: pointer direct-declarator  */
#line 721 "assgn_4_21CS30059_21CS30038.y"
                                  {
            ttype* t = (yyvsp[-1].ptr);
            while(t->arrtype!=NULL)
            {
                t=t->arrtype;
            }
            t->arrtype = (yyvsp[0].pointer)->type;
            (yyval.pointer) = (yyvsp[0].pointer)->update((yyvsp[-1].ptr));
        }
#line 2831 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 119: /* declarator: direct-declarator  */
#line 730 "assgn_4_21CS30059_21CS30038.y"
                            {printf("declarator-> direct-declarator\n");}
#line 2837 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 120: /* direct-declarator: IDENTIFIER  */
#line 733 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.pointer) = (yyvsp[0].pointer)->update(new ttype(varType));
            currentSymbol = (yyval.pointer);
        }
#line 2846 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 121: /* direct-declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 737 "assgn_4_21CS30059_21CS30038.y"
                                                        {
            (yyval.pointer) = (yyvsp[-1].pointer);
        }
#line 2854 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 122: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list RIGHT_SQUARE_BRACKET  */
#line 740 "assgn_4_21CS30059_21CS30038.y"
                                                                                        {
            printf("direct-declarator-> direct-declarator [type-qualifier-list]\n");
        }
#line 2862 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 123: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 743 "assgn_4_21CS30059_21CS30038.y"
                                                                                                              {
            printf("direct-declarator-> direct-declarator [type-qualifier-list assignment-expression]\n");
        }
#line 2870 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 124: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET  */
#line 746 "assgn_4_21CS30059_21CS30038.y"
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
#line 2906 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 125: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 777 "assgn_4_21CS30059_21CS30038.y"
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
#line 2931 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 126: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN type-qualifier-list assignment-expression RIGHT_SQUARE_BRACKET  */
#line 797 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [STATIC type-qualifier-listopt assignment-expression]\n");}
#line 2937 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 127: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 798 "assgn_4_21CS30059_21CS30038.y"
                                                                                                        {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 2943 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 128: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STATIC_TOKEN assignment-expression RIGHT_SQUARE_BRACKET  */
#line 799 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                            {printf("direct-declarator-> direct-declarator [type-qualifier-list STATIC assignment-expression]\n");}
#line 2949 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 129: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET type-qualifier-list STAR RIGHT_SQUARE_BRACKET  */
#line 800 "assgn_4_21CS30059_21CS30038.y"
                                                                                              {printf("direct-declarator-> direct-declarator [type-qualifier-listopt *]\n");}
#line 2955 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 130: /* direct-declarator: direct-declarator LEFT_SQUARE_BRACKET STAR RIGHT_SQUARE_BRACKET  */
#line 801 "assgn_4_21CS30059_21CS30038.y"
                                                                          {printf("direct-declarator-> direct-declarator [*]\n");}
#line 2961 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 131: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table parameter-type-list RIGHT_PARENTHESIS  */
#line 802 "assgn_4_21CS30059_21CS30038.y"
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
#line 2977 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 132: /* direct-declarator: direct-declarator LEFT_PARENTHESIS identifier-list RIGHT_PARENTHESIS  */
#line 813 "assgn_4_21CS30059_21CS30038.y"
                                                                               {printf("direct-declarator-> direct-declarator (identifier-listopt)\n");}
#line 2983 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 133: /* direct-declarator: direct-declarator LEFT_PARENTHESIS change-table RIGHT_PARENTHESIS  */
#line 815 "assgn_4_21CS30059_21CS30038.y"
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
#line 2999 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 134: /* type-qualifier-listopt: type-qualifier-list  */
#line 828 "assgn_4_21CS30059_21CS30038.y"
                            {printf("type-qualifier-listopt-> type-qualifier-list\n");}
#line 3005 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 135: /* type-qualifier-listopt: %empty  */
#line 829 "assgn_4_21CS30059_21CS30038.y"
                 {printf("type-qualifier-listopt-> \n");}
#line 3011 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 136: /* pointer: STAR type-qualifier-listopt  */
#line 832 "assgn_4_21CS30059_21CS30038.y"
                                    {
            (yyval.ptr) = new ttype("ptr");
        }
#line 3019 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 137: /* pointer: STAR type-qualifier-listopt pointer  */
#line 835 "assgn_4_21CS30059_21CS30038.y"
                                              {
            (yyval.ptr) = new ttype("ptr",(yyvsp[0].ptr));
        }
#line 3027 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 138: /* type-qualifier-list: TYPE_QUALIFIER  */
#line 840 "assgn_4_21CS30059_21CS30038.y"
                       {printf("type-qualifier-list-> type-qualifier\n");}
#line 3033 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 139: /* type-qualifier-list: type-qualifier-list TYPE_QUALIFIER  */
#line 841 "assgn_4_21CS30059_21CS30038.y"
                                             {printf("type-qualifier-list-> type-qualifier-list type-qualifier\n");}
#line 3039 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 140: /* parameter-type-list: parameter-list  */
#line 844 "assgn_4_21CS30059_21CS30038.y"
                       {printf("parameter-type-list-> parameter-list\n");}
#line 3045 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 141: /* parameter-type-list: parameter-list COMMA ELLIPSIS  */
#line 845 "assgn_4_21CS30059_21CS30038.y"
                                        {printf("parameter-type-list-> parameter-list , ...\n");}
#line 3051 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 142: /* parameter-list: parameter-declaration  */
#line 848 "assgn_4_21CS30059_21CS30038.y"
                              {printf("parameter-list-> parameter-declaration\n");}
#line 3057 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 143: /* parameter-list: parameter-list COMMA parameter-declaration  */
#line 849 "assgn_4_21CS30059_21CS30038.y"
                                                     {printf("parameter-list-> parameter-list , parameter-declaration\n");}
#line 3063 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 144: /* parameter-declaration: declaration-specifiers declarator  */
#line 852 "assgn_4_21CS30059_21CS30038.y"
                                          {printf("parameter-declaration-> declaration-specifiers declarator\n");}
#line 3069 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 145: /* parameter-declaration: declaration-specifiers  */
#line 853 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("parameter-declaration-> declaration-specifiers\n");}
#line 3075 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 146: /* identifier-list: IDENTIFIER  */
#line 856 "assgn_4_21CS30059_21CS30038.y"
                   {printf("identifier-list-> IDENTIFIER\n");}
#line 3081 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 147: /* identifier-list: identifier-list COMMA IDENTIFIER  */
#line 857 "assgn_4_21CS30059_21CS30038.y"
                                           {printf("identifier-list-> identifier-list , IDENTIFIER\n");}
#line 3087 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 148: /* type-name: specifier-qualifier-list  */
#line 860 "assgn_4_21CS30059_21CS30038.y"
                                 {printf("type-name-> specifier-qualifier-list\n");}
#line 3093 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 149: /* initializer: assignment-expression  */
#line 863 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.pointer) = (yyvsp[0].exp)->loc;
        }
#line 3101 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 150: /* initializer: LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  */
#line 866 "assgn_4_21CS30059_21CS30038.y"
                                                                  {printf("initializer-> {initializer-list}\n");}
#line 3107 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 151: /* initializer: LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  */
#line 867 "assgn_4_21CS30059_21CS30038.y"
                                                                        {printf("initializer-> {initializer-list,}\n");}
#line 3113 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 152: /* initializer-list: designationopt initializer  */
#line 870 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("initializer-list-> designationopt initializer\n");}
#line 3119 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 153: /* initializer-list: initializer-list COMMA designationopt initializer  */
#line 871 "assgn_4_21CS30059_21CS30038.y"
                                                            {printf("initializer-list-> initializer-list , designationopt initializer\n");}
#line 3125 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 154: /* designationopt: designation  */
#line 874 "assgn_4_21CS30059_21CS30038.y"
                    {printf("designationopt-> designation\n");}
#line 3131 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 155: /* designationopt: %empty  */
#line 875 "assgn_4_21CS30059_21CS30038.y"
                 {printf("designationopt-> \n");}
#line 3137 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 156: /* designation: designator-list EQUALS  */
#line 878 "assgn_4_21CS30059_21CS30038.y"
                               {printf("designation-> designator-list =\n");}
#line 3143 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 157: /* designator-list: designator  */
#line 881 "assgn_4_21CS30059_21CS30038.y"
                   {printf("designator-list-> designator\n");}
#line 3149 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 158: /* designator-list: designator-list designator  */
#line 882 "assgn_4_21CS30059_21CS30038.y"
                                     {printf("designator-list-> designation-list designator\n");}
#line 3155 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 159: /* designator: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET  */
#line 885 "assgn_4_21CS30059_21CS30038.y"
                                                                     {printf("designator-> [constant-expression]\n");}
#line 3161 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 160: /* designator: DOT IDENTIFIER  */
#line 886 "assgn_4_21CS30059_21CS30038.y"
                         {printf("designator-> . IDENTIFIER\n");}
#line 3167 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 161: /* statement: labeled-statement  */
#line 889 "assgn_4_21CS30059_21CS30038.y"
                          {printf("statement-> labeled-statement\n");}
#line 3173 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 162: /* statement: compound-statement  */
#line 890 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3181 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 163: /* statement: expression-statement  */
#line 893 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3190 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 164: /* statement: selection-statement  */
#line 897 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3198 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 165: /* statement: iteration-statement  */
#line 900 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3206 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 166: /* statement: jump-statement  */
#line 903 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3214 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 167: /* loop-statement: labeled-statement  */
#line 908 "assgn_4_21CS30059_21CS30038.y"
                          {printf("loop-statement-> labeled-statement\n");}
#line 3220 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 168: /* loop-statement: expression-statement  */
#line 909 "assgn_4_21CS30059_21CS30038.y"
                               {
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = (yyvsp[0].exp)->nextlist;
        }
#line 3229 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 169: /* loop-statement: selection-statement  */
#line 913 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3237 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 170: /* loop-statement: iteration-statement  */
#line 916 "assgn_4_21CS30059_21CS30038.y"
                              {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3245 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 171: /* loop-statement: jump-statement  */
#line 919 "assgn_4_21CS30059_21CS30038.y"
                         {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3253 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 172: /* labeled-statement: IDENTIFIER COLON statement  */
#line 924 "assgn_4_21CS30059_21CS30038.y"
                                   {printf("labeled-statement-> IDENTIFIER : statement\n");}
#line 3259 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 173: /* labeled-statement: CASE constant-expression COLON statement  */
#line 925 "assgn_4_21CS30059_21CS30038.y"
                                                   {printf("labeled-statement-> CASE constant-expression : statement\n");}
#line 3265 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 174: /* labeled-statement: DEFAULT COLON statement  */
#line 926 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("labeled-statement-> DEFAULT : statement\n");}
#line 3271 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 175: /* compound-statement: LEFT_CURLY_BRACKET A change-table block-item-listopt RIGHT_CURLY_BRACKET  */
#line 929 "assgn_4_21CS30059_21CS30038.y"
                                                                                 {
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currentST->parent);
        }
#line 3280 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 176: /* A: %empty  */
#line 935 "assgn_4_21CS30059_21CS30038.y"
        {
            string new_ST = currentST->name + "_" + blockName + "_" + to_string(STCount++);
            symbol* sym = currentST->lookup(new_ST);
            sym->nested_table = new symbolTable(new_ST);
            sym->name = new_ST;
            sym->nested_table->parent = currentST;
            sym->type = new ttype("block");
            currentSymbol = sym;
        }
#line 3294 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 177: /* change-table: %empty  */
#line 946 "assgn_4_21CS30059_21CS30038.y"
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
#line 3310 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 178: /* block-item-listopt: block-item-list  */
#line 959 "assgn_4_21CS30059_21CS30038.y"
                        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3318 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 179: /* block-item-listopt: %empty  */
#line 962 "assgn_4_21CS30059_21CS30038.y"
                 {
            (yyval.stmt) = new statement();
        }
#line 3326 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 180: /* block-item-list: block-item  */
#line 967 "assgn_4_21CS30059_21CS30038.y"
                   {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3334 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 181: /* block-item-list: block-item-list M block-item  */
#line 970 "assgn_4_21CS30059_21CS30038.y"
                                       {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 3343 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 182: /* block-item: declaration  */
#line 976 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = new statement();
        }
#line 3351 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 183: /* block-item: statement  */
#line 979 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3359 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 184: /* expression-statement: expression SEMICOLON  */
#line 984 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.exp) = (yyvsp[-1].exp);
        }
#line 3367 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 185: /* expression-statement: SEMICOLON  */
#line 987 "assgn_4_21CS30059_21CS30038.y"
                    {
            (yyval.exp) = new expression();
        }
#line 3375 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 186: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N  */
#line 993 "assgn_4_21CS30059_21CS30038.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-5].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-5].exp)->truelist,(yyvsp[-2].instr));
            list<int> l1 = merge((yyvsp[-5].exp)->falselist,(yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3388 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 187: /* selection-statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N ELSE M statement  */
#line 1001 "assgn_4_21CS30059_21CS30038.y"
                                                                                             {
            backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());
            convertInttoBool((yyvsp[-8].exp));
            (yyval.stmt) = new statement();
            backpatch((yyvsp[-8].exp)->truelist,(yyvsp[-5].instr));
            backpatch((yyvsp[-8].exp)->falselist,(yyvsp[-1].instr));
            list<int> l1 = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge(l1,(yyvsp[0].stmt)->nextlist);
        }
#line 3402 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 188: /* selection-statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 1010 "assgn_4_21CS30059_21CS30038.y"
                                                                         {printf("selection-statement-> SWITCH (expression) statement\n");}
#line 3408 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 189: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS M loop-statement  */
#line 1013 "assgn_4_21CS30059_21CS30038.y"
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
#line 3424 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 190: /* iteration-statement: WHILE W LEFT_PARENTHESIS A change-table M expression RIGHT_PARENTHESIS LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1024 "assgn_4_21CS30059_21CS30038.y"
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
#line 3439 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 191: /* iteration-statement: DO D M loop-statement M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1034 "assgn_4_21CS30059_21CS30038.y"
                                                                                                {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-7].instr));
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3452 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 192: /* iteration-statement: DO D LEFT_CURLY_BRACKET M block-item-listopt RIGHT_CURLY_BRACKET M WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON  */
#line 1042 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                           {
            (yyval.stmt) = new statement();
            convertInttoBool((yyvsp[-2].exp));
            backpatch((yyvsp[-2].exp)->truelist, (yyvsp[-8].instr));
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].instr));
            (yyval.stmt)->nextlist = (yyvsp[-2].exp)->falselist;
            blockName = "";
        }
#line 3465 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 193: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1050 "assgn_4_21CS30059_21CS30038.y"
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
#line 3481 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 194: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M loop-statement  */
#line 1061 "assgn_4_21CS30059_21CS30038.y"
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
#line 3497 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 195: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table declaration M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1072 "assgn_4_21CS30059_21CS30038.y"
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
#line 3513 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 196: /* iteration-statement: FOR F LEFT_PARENTHESIS A change-table expression-statement M expression-statement M expression N RIGHT_PARENTHESIS M LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1083 "assgn_4_21CS30059_21CS30038.y"
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
#line 3529 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 197: /* F: %empty  */
#line 1095 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "FOR";
    }
#line 3537 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 198: /* W: %empty  */
#line 1099 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "WHILE";
    }
#line 3545 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 199: /* D: %empty  */
#line 1103 "assgn_4_21CS30059_21CS30038.y"
         {
        blockName = "DO_WHILE";
    }
#line 3553 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 200: /* jump-statement: GOTO IDENTIFIER SEMICOLON  */
#line 1108 "assgn_4_21CS30059_21CS30038.y"
                                  {printf("jump-statement-> GOTO IDENTIFIER ;\n");}
#line 3559 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 201: /* jump-statement: CONTINUE SEMICOLON  */
#line 1109 "assgn_4_21CS30059_21CS30038.y"
                             {
            (yyval.stmt) = new statement();
        }
#line 3567 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 202: /* jump-statement: BREAK SEMICOLON  */
#line 1112 "assgn_4_21CS30059_21CS30038.y"
                          {
            (yyval.stmt) = new statement();
        }
#line 3575 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 203: /* jump-statement: RETURN expression SEMICOLON  */
#line 1115 "assgn_4_21CS30059_21CS30038.y"
                                      {
            (yyval.stmt) = new statement();
            emit("return", (yyvsp[-1].exp)->loc->name);
        }
#line 3584 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 204: /* jump-statement: RETURN SEMICOLON  */
#line 1119 "assgn_4_21CS30059_21CS30038.y"
                           {
            (yyval.stmt) = new statement();
            emit("return", "");
        }
#line 3593 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 205: /* translation-unit: external-declaration  */
#line 1125 "assgn_4_21CS30059_21CS30038.y"
                             {printf("translation-unit-> external-declaration\n");}
#line 3599 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 206: /* translation-unit: translation-unit external-declaration  */
#line 1126 "assgn_4_21CS30059_21CS30038.y"
                                                {printf("translation-unit-> translation-unit external-declaration\n");}
#line 3605 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 207: /* external-declaration: function-definition  */
#line 1129 "assgn_4_21CS30059_21CS30038.y"
                            {printf("external-declaration-> function-definition\n");}
#line 3611 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 208: /* external-declaration: declaration  */
#line 1130 "assgn_4_21CS30059_21CS30038.y"
                      {printf("external-declaration-> declaration\n");}
#line 3617 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 209: /* function-definition: declaration-specifiers declarator declaration-listopt change-table LEFT_CURLY_BRACKET block-item-listopt RIGHT_CURLY_BRACKET  */
#line 1133 "assgn_4_21CS30059_21CS30038.y"
                                                                                                                                     {
            currentST->parent = globalST;
            STCount=0;
            switchTable(globalST);
        }
#line 3627 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 210: /* declaration-listopt: declaration-list  */
#line 1140 "assgn_4_21CS30059_21CS30038.y"
                         {printf("declaration-listopt-> declaration-list\n");}
#line 3633 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 211: /* declaration-listopt: %empty  */
#line 1141 "assgn_4_21CS30059_21CS30038.y"
                 {printf("declaration-listopt-> \n");}
#line 3639 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 212: /* declaration-list: declaration  */
#line 1144 "assgn_4_21CS30059_21CS30038.y"
                    {printf("declaration-list-> declaration\n");}
#line 3645 "assgn_4_21CS30059_21CS30038.tab.c"
    break;

  case 213: /* declaration-list: declaration-list declaration  */
#line 1145 "assgn_4_21CS30059_21CS30038.y"
                                       {printf("declaration-list-> declaration-list declaration\n");}
#line 3651 "assgn_4_21CS30059_21CS30038.tab.c"
    break;


#line 3655 "assgn_4_21CS30059_21CS30038.tab.c"

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

#line 1147 "assgn_4_21CS30059_21CS30038.y"

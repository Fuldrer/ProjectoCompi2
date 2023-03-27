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
#line 5 "minikotlin.y"

    #include <cstdio>

    extern int yylineno;
    int yylex();
    extern int line;
    extern int column;
    void yyerror(const char * message){
        fprintf(stderr, "Error: %s in line: %d and column %d", message, line, column);
    }

#line 83 "minikotlin_parser.cpp"

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

#include "tokens.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_LOGICAL_AND = 3,             /* TK_LOGICAL_AND  */
  YYSYMBOL_TK_NOT = 4,                     /* TK_NOT  */
  YYSYMBOL_TK_LOGICAL_OR = 5,              /* TK_LOGICAL_OR  */
  YYSYMBOL_TK_GREAT_EQ_THAN = 6,           /* TK_GREAT_EQ_THAN  */
  YYSYMBOL_TK_LESS_EQ_THAN = 7,            /* TK_LESS_EQ_THAN  */
  YYSYMBOL_KW_DO = 8,                      /* KW_DO  */
  YYSYMBOL_KW_ELSE = 9,                    /* KW_ELSE  */
  YYSYMBOL_TK_INCREMENT = 10,              /* TK_INCREMENT  */
  YYSYMBOL_TK_DECREMENT = 11,              /* TK_DECREMENT  */
  YYSYMBOL_TK_EQ = 12,                     /* TK_EQ  */
  YYSYMBOL_TK_DISTINCT = 13,               /* TK_DISTINCT  */
  YYSYMBOL_TK_OP_RANGE = 14,               /* TK_OP_RANGE  */
  YYSYMBOL_KW_IN = 15,                     /* KW_IN  */
  YYSYMBOL_KW_RETURN = 16,                 /* KW_RETURN  */
  YYSYMBOL_KW_BREAK = 17,                  /* KW_BREAK  */
  YYSYMBOL_KW_FOR = 18,                    /* KW_FOR  */
  YYSYMBOL_KW_IF = 19,                     /* KW_IF  */
  YYSYMBOL_KW_VAR = 20,                    /* KW_VAR  */
  YYSYMBOL_KW_INT = 21,                    /* KW_INT  */
  YYSYMBOL_KW_FLOAT = 22,                  /* KW_FLOAT  */
  YYSYMBOL_KW_BOOLEAN = 23,                /* KW_BOOLEAN  */
  YYSYMBOL_KW_STRING = 24,                 /* KW_STRING  */
  YYSYMBOL_KW_ARRAY = 25,                  /* KW_ARRAY  */
  YYSYMBOL_KW_FUN = 26,                    /* KW_FUN  */
  YYSYMBOL_KW_WHILE = 27,                  /* KW_WHILE  */
  YYSYMBOL_TK_LEFTKEY = 28,                /* TK_LEFTKEY  */
  YYSYMBOL_TK_RIGHTKEY = 29,               /* TK_RIGHTKEY  */
  YYSYMBOL_KW_CHAR = 30,                   /* KW_CHAR  */
  YYSYMBOL_KW_PRINTLN = 31,                /* KW_PRINTLN  */
  YYSYMBOL_TK_FLOAT = 32,                  /* TK_FLOAT  */
  YYSYMBOL_TK_NUMBER = 33,                 /* TK_NUMBER  */
  YYSYMBOL_KW_TRUE = 34,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 35,                  /* KW_FALSE  */
  YYSYMBOL_TK_ID = 36,                     /* TK_ID  */
  YYSYMBOL_TK_LIT_STRING = 37,             /* TK_LIT_STRING  */
  YYSYMBOL_TK_COMMENT_LINE = 38,           /* TK_COMMENT_LINE  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ':'  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '>'  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_49_ = 49,                       /* '-'  */
  YYSYMBOL_50_ = 50,                       /* '*'  */
  YYSYMBOL_51_ = 51,                       /* '/'  */
  YYSYMBOL_52_ = 52,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_statement_list = 55,            /* statement_list  */
  YYSYMBOL_statement = 56,                 /* statement  */
  YYSYMBOL_assigantion_stmt = 57,          /* assigantion_stmt  */
  YYSYMBOL_param_list = 58,                /* param_list  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_arithmetic_expr = 60,           /* arithmetic_expr  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_unary_expr = 62,                /* unary_expr  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_term = 64                       /* term  */
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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     2,    52,     2,     2,
      39,    40,    50,    48,    45,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
      46,    44,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    51,    51,    54,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    72,    73,    76,
      77,    78,    81,    82,    83,    84,    85,    88,    89,    90,
      91,    94,    95,    96,    97,    98,   101,   102,   105,   106,
     107,   108,   109,   112,   113,   114,   115,   116,   117,   118,
     119,   120
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_LOGICAL_AND",
  "TK_NOT", "TK_LOGICAL_OR", "TK_GREAT_EQ_THAN", "TK_LESS_EQ_THAN",
  "KW_DO", "KW_ELSE", "TK_INCREMENT", "TK_DECREMENT", "TK_EQ",
  "TK_DISTINCT", "TK_OP_RANGE", "KW_IN", "KW_RETURN", "KW_BREAK", "KW_FOR",
  "KW_IF", "KW_VAR", "KW_INT", "KW_FLOAT", "KW_BOOLEAN", "KW_STRING",
  "KW_ARRAY", "KW_FUN", "KW_WHILE", "TK_LEFTKEY", "TK_RIGHTKEY", "KW_CHAR",
  "KW_PRINTLN", "TK_FLOAT", "TK_NUMBER", "KW_TRUE", "KW_FALSE", "TK_ID",
  "TK_LIT_STRING", "TK_COMMENT_LINE", "'('", "')'", "':'", "'['", "']'",
  "'='", "','", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "program", "statement_list", "statement", "assigantion_stmt",
  "param_list", "expression", "arithmetic_expr", "factor", "unary_expr",
  "type", "term", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     317,   150,   -17,   114,   114,   -11,     3,   114,   -13,   -83,
     -83,   -83,   -83,   -30,   -83,   -83,   114,    42,   317,   -83,
     -83,    68,     2,     5,   -83,   -83,     6,   -83,   317,    -1,
      13,    17,     8,    15,   114,   114,   114,   114,    46,   -83,
     -83,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   101,   317,   317,    57,   114,   317,    60,
     -10,    68,    22,    68,   -83,     2,     2,     2,     2,     5,
       5,     5,   -83,   -83,   -83,   -83,    65,    43,   137,   173,
     -83,   -83,   -83,   -83,    -6,   -83,   -83,    45,   209,   -83,
     -83,   114,     0,   -83,   114,   -83,    74,    54,    56,   -83,
      68,   114,    68,    75,   114,    -6,    68,   317,    70,    76,
     245,   -83,   317,   -83,   281,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      46,    49,    50,    47,    48,    43,     0,     0,     2,     4,
       8,    16,    26,    30,    35,    37,    47,    36,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     1,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,    20,     0,    17,    45,    25,    24,    22,    23,    29,
      27,    28,    34,    31,    32,    33,     0,     0,     0,     0,
      38,    39,    41,    42,     0,    40,     7,     0,     0,     5,
      10,     0,    44,    44,     0,    11,    14,     0,     0,    12,
      19,     0,    13,     0,     0,     0,    18,     0,     0,     0,
       0,     6,     0,    15,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -18,   -15,   -83,    27,    -3,    81,    97,   110,
     -82,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,    18,    19,    20,    60,    21,    22,    23,    24,
      86,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      29,    30,    97,    40,    33,    41,    42,    45,    48,    35,
      53,    28,    36,    38,    37,    80,    81,    82,    83,    41,
      42,    41,    42,   109,    85,    31,    34,    54,    41,    42,
      90,    59,    61,    62,    63,    91,    78,    79,    40,    32,
      88,    55,    39,    58,   101,    43,    44,    57,    52,    76,
      46,    47,    41,    42,    61,    49,    50,    51,    56,    43,
      44,    43,    44,    40,    40,    92,    41,    42,    43,    44,
      94,    41,    42,    40,    41,    42,    41,    42,    80,    81,
      82,    83,    84,   103,    87,    98,    64,    85,   100,   110,
      91,   102,    43,    44,   114,    40,   104,   105,   106,    40,
      89,   108,     0,   107,   112,     1,    43,    44,    93,     2,
      27,    43,    44,   111,    43,    44,    43,    44,     1,     3,
       4,     5,    65,    66,    67,    68,     0,     6,     7,     0,
      77,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     1,    69,    70,    71,     2,     9,    10,    11,    12,
      26,    14,    15,    16,     0,     3,     4,     5,    72,    73,
      74,    75,     0,     6,     7,     0,    95,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     1,     0,     0,
       0,     2,     9,    10,    11,    12,    26,    14,    15,    16,
       0,     3,     4,     5,     0,     0,     0,     0,     0,     6,
       7,     0,    96,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     1,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       0,     0,     0,     0,     0,     6,     7,     0,    99,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     1,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     0,     0,     0,     0,
       0,     6,     7,     0,   113,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     1,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     0,     0,     0,     0,     0,     6,     7,     0,
     115,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     1,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16
};

static const yytype_int8 yycheck[] =
{
       3,     4,    84,    18,     7,     6,     7,     5,     3,    39,
      28,    28,    42,    16,    44,    21,    22,    23,    24,     6,
       7,     6,     7,   105,    30,    36,    39,    28,     6,     7,
      40,    34,    35,    36,    37,    45,    54,    55,    53,    36,
      58,    28,     0,    28,    44,    46,    47,    39,    42,    52,
      48,    49,     6,     7,    57,    50,    51,    52,    41,    46,
      47,    46,    47,    78,    79,    43,     6,     7,    46,    47,
      27,     6,     7,    88,     6,     7,     6,     7,    21,    22,
      23,    24,    25,     9,    57,    40,    40,    30,    91,   107,
      45,    94,    46,    47,   112,   110,    42,    41,   101,   114,
      40,   104,    -1,    28,    28,     4,    46,    47,    43,     8,
       1,    46,    47,    43,    46,    47,    46,    47,     4,    18,
      19,    20,    41,    42,    43,    44,    -1,    26,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     4,    45,    46,    47,     8,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    18,    19,    20,    48,    49,
      50,    51,    -1,    26,    27,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     4,    -1,    -1,
      -1,     8,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     8,    18,    19,    20,    26,    27,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    54,    55,    56,
      57,    59,    60,    61,    62,    64,    36,    64,    28,    59,
      59,    36,    36,    59,    39,    39,    42,    44,    59,     0,
      56,     6,     7,    46,    47,     5,    48,    49,     3,    50,
      51,    52,    42,    55,    28,    28,    41,    39,    28,    59,
      58,    59,    59,    59,    40,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    59,    29,    55,    55,
      21,    22,    23,    24,    25,    30,    63,    58,    55,    40,
      40,    45,    43,    43,    27,    29,    29,    63,    40,    29,
      59,    44,    59,     9,    42,    41,    59,    28,    59,    63,
      55,    43,    28,    29,    55,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     8,     4,     1,    10,
       4,     5,     5,     6,     5,     9,     1,     3,     6,     3,
       1,     0,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     1
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
  case 2: /* program: statement_list  */
#line 51 "minikotlin.y"
                        {(yyval.statement_t) = new MainStmt((yyvsp[0].statement_list_t), line, column);}
#line 1254 "minikotlin_parser.cpp"
    break;

  case 3: /* statement_list: statement_list statement  */
#line 54 "minikotlin.y"
                                         { (yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1260 "minikotlin_parser.cpp"
    break;

  case 4: /* statement_list: statement  */
#line 55 "minikotlin.y"
                            { (yyval.statement_list_t) = new list<Statement *>; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1266 "minikotlin_parser.cpp"
    break;

  case 5: /* statement: KW_PRINTLN '(' expression ')'  */
#line 58 "minikotlin.y"
                                         {(yyval.statement_t) = new PrintStmt((yyvsp[-1].expr_T), line, column);}
#line 1272 "minikotlin_parser.cpp"
    break;

  case 6: /* statement: KW_VAR TK_ID ':' KW_ARRAY type '[' expression ']'  */
#line 59 "minikotlin.y"
                                                           {(yyval.statement_t) = new VarDeclarationStatement((yyvsp[-6].string_T), true, (PrimitiveType)(yyvsp[-3].int_t), (yyvsp[-1].expr_T), line, column);}
#line 1278 "minikotlin_parser.cpp"
    break;

  case 7: /* statement: KW_VAR TK_ID ':' type  */
#line 60 "minikotlin.y"
                                {(yyval.statement_t) = new VarDeclarationStatement((yyvsp[-2].string_T), false, (PrimitiveType)(yyvsp[0].int_t), NULL, line, column);}
#line 1284 "minikotlin_parser.cpp"
    break;

  case 8: /* statement: assigantion_stmt  */
#line 61 "minikotlin.y"
                           {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1290 "minikotlin_parser.cpp"
    break;

  case 9: /* statement: KW_FUN TK_ID '(' param_list ')' ':' type TK_LEFTKEY statement_list TK_RIGHTKEY  */
#line 62 "minikotlin.y"
                                                                                         { (yyval.statement_t) = new FunctionDeclarationStatement((yyvsp[-8].string_T), (yyvsp[-6].expr_list_t), (PrimitiveType)(yyvsp[-3].int_t), (yyvsp[-1].statement_list_t), line, column);}
#line 1296 "minikotlin_parser.cpp"
    break;

  case 10: /* statement: TK_ID '(' param_list ')'  */
#line 63 "minikotlin.y"
                                   { (yyval.statement_t) = new ExpressionStatement(new MethodInvocationExpr(new IDExpr((yyvsp[-3].string_T), line, column), (yyvsp[-1].expr_list_t), line, column), line , column); }
#line 1302 "minikotlin_parser.cpp"
    break;

  case 11: /* statement: KW_FOR expression TK_LEFTKEY statement_list TK_RIGHTKEY  */
#line 64 "minikotlin.y"
                                                                     {(yyval.statement_t) = new ForStatement((yyvsp[-3].expr_T), (yyvsp[-1].statement_list_t), line, column);}
#line 1308 "minikotlin_parser.cpp"
    break;

  case 12: /* statement: KW_WHILE expression TK_LEFTKEY statement_list TK_RIGHTKEY  */
#line 65 "minikotlin.y"
                                                                       {(yyval.statement_t) = new WhileStatement((yyvsp[-3].expr_T), (yyvsp[-1].statement_list_t), false , line,column);}
#line 1314 "minikotlin_parser.cpp"
    break;

  case 13: /* statement: KW_DO TK_LEFTKEY statement_list TK_RIGHTKEY KW_WHILE expression  */
#line 66 "minikotlin.y"
                                                                          {(yyval.statement_t) = new WhileStatement((yyvsp[0].expr_T), (yyvsp[-3].statement_list_t), true, line,column);}
#line 1320 "minikotlin_parser.cpp"
    break;

  case 14: /* statement: KW_IF expression TK_LEFTKEY statement_list TK_RIGHTKEY  */
#line 67 "minikotlin.y"
                                                                  {(yyval.statement_t) = new IfStatement((yyvsp[-3].expr_T),(yyvsp[-1].statement_list_t),NULL,line,column);}
#line 1326 "minikotlin_parser.cpp"
    break;

  case 15: /* statement: KW_IF expression TK_LEFTKEY statement_list TK_RIGHTKEY KW_ELSE TK_LEFTKEY statement_list TK_RIGHTKEY  */
#line 68 "minikotlin.y"
                                                                                                               {(yyval.statement_t) = new IfStatement((yyvsp[-7].expr_T),(yyvsp[-5].statement_list_t),(yyvsp[-1].statement_list_t),line,column);}
#line 1332 "minikotlin_parser.cpp"
    break;

  case 16: /* statement: expression  */
#line 69 "minikotlin.y"
                     {(yyval.statement_t) = new ExpressionStatement((yyvsp[0].expr_T),line, column);}
#line 1338 "minikotlin_parser.cpp"
    break;

  case 17: /* assigantion_stmt: TK_ID '=' expression  */
#line 72 "minikotlin.y"
                                       { (yyval.statement_t) = new AssignationStatement((yyvsp[-2].string_T), (yyvsp[0].expr_T), NULL, line, column); }
#line 1344 "minikotlin_parser.cpp"
    break;

  case 18: /* assigantion_stmt: TK_ID '[' expression ']' '=' expression  */
#line 73 "minikotlin.y"
                                                          { (yyval.statement_t) = new AssignationStatement((yyvsp[-5].string_T), (yyvsp[0].expr_T), (yyvsp[-3].expr_T), line, column); }
#line 1350 "minikotlin_parser.cpp"
    break;

  case 19: /* param_list: param_list ',' expression  */
#line 76 "minikotlin.y"
                                      { (yyval.expr_list_t) = (yyvsp[-2].expr_list_t); (yyval.expr_list_t)->push_back((yyvsp[0].expr_T));}
#line 1356 "minikotlin_parser.cpp"
    break;

  case 20: /* param_list: expression  */
#line 77 "minikotlin.y"
                         { (yyval.expr_list_t) = new list<Expression *>; (yyval.expr_list_t)->push_back((yyvsp[0].expr_T));}
#line 1362 "minikotlin_parser.cpp"
    break;

  case 21: /* param_list: %empty  */
#line 78 "minikotlin.y"
              {(yyval.expr_list_t) = new list<Expression *>; }
#line 1368 "minikotlin_parser.cpp"
    break;

  case 22: /* expression: expression '<' arithmetic_expr  */
#line 81 "minikotlin.y"
                                           { (yyval.expr_T) = new LtExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1374 "minikotlin_parser.cpp"
    break;

  case 23: /* expression: expression '>' arithmetic_expr  */
#line 82 "minikotlin.y"
                                            { (yyval.expr_T) = new GtExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1380 "minikotlin_parser.cpp"
    break;

  case 24: /* expression: expression TK_LESS_EQ_THAN arithmetic_expr  */
#line 83 "minikotlin.y"
                                                        { (yyval.expr_T) = new LteExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1386 "minikotlin_parser.cpp"
    break;

  case 25: /* expression: expression TK_GREAT_EQ_THAN arithmetic_expr  */
#line 84 "minikotlin.y"
                                                         { (yyval.expr_T) = new GteExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1392 "minikotlin_parser.cpp"
    break;

  case 26: /* expression: arithmetic_expr  */
#line 85 "minikotlin.y"
                             {(yyval.expr_T) = (yyvsp[0].expr_T);}
#line 1398 "minikotlin_parser.cpp"
    break;

  case 27: /* arithmetic_expr: arithmetic_expr '+' factor  */
#line 88 "minikotlin.y"
                                            { (yyval.expr_T) = new AddExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1404 "minikotlin_parser.cpp"
    break;

  case 28: /* arithmetic_expr: arithmetic_expr '-' factor  */
#line 89 "minikotlin.y"
                                          { (yyval.expr_T) = new SubExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1410 "minikotlin_parser.cpp"
    break;

  case 29: /* arithmetic_expr: arithmetic_expr TK_LOGICAL_OR factor  */
#line 90 "minikotlin.y"
                                                   { (yyval.expr_T) = new OrExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1416 "minikotlin_parser.cpp"
    break;

  case 30: /* arithmetic_expr: factor  */
#line 91 "minikotlin.y"
                     { (yyval.expr_T) = (yyvsp[0].expr_T); }
#line 1422 "minikotlin_parser.cpp"
    break;

  case 31: /* factor: factor '*' unary_expr  */
#line 94 "minikotlin.y"
                              { (yyval.expr_T) = new MultExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1428 "minikotlin_parser.cpp"
    break;

  case 32: /* factor: factor '/' unary_expr  */
#line 95 "minikotlin.y"
                                 { (yyval.expr_T) = new DivExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1434 "minikotlin_parser.cpp"
    break;

  case 33: /* factor: factor '%' unary_expr  */
#line 96 "minikotlin.y"
                                { (yyval.expr_T) = new ModExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1440 "minikotlin_parser.cpp"
    break;

  case 34: /* factor: factor TK_LOGICAL_AND unary_expr  */
#line 97 "minikotlin.y"
                                           { (yyval.expr_T) = new AndExpr((yyvsp[-2].expr_T), (yyvsp[0].expr_T), line, column);}
#line 1446 "minikotlin_parser.cpp"
    break;

  case 35: /* factor: unary_expr  */
#line 98 "minikotlin.y"
                     { (yyval.expr_T) = (yyvsp[0].expr_T); }
#line 1452 "minikotlin_parser.cpp"
    break;

  case 36: /* unary_expr: TK_NOT term  */
#line 101 "minikotlin.y"
                        { (yyval.expr_T) = new UnaryExpr(NOT, (yyvsp[0].expr_T), line, column); }
#line 1458 "minikotlin_parser.cpp"
    break;

  case 37: /* unary_expr: term  */
#line 102 "minikotlin.y"
                  {(yyval.expr_T) = (yyvsp[0].expr_T);}
#line 1464 "minikotlin_parser.cpp"
    break;

  case 38: /* type: KW_INT  */
#line 105 "minikotlin.y"
             { (yyval.int_t) = INTEGER;}
#line 1470 "minikotlin_parser.cpp"
    break;

  case 39: /* type: KW_FLOAT  */
#line 106 "minikotlin.y"
                { (yyval.int_t) = FLOAT; }
#line 1476 "minikotlin_parser.cpp"
    break;

  case 40: /* type: KW_CHAR  */
#line 107 "minikotlin.y"
               { (yyval.int_t) = CHAR; }
#line 1482 "minikotlin_parser.cpp"
    break;

  case 41: /* type: KW_BOOLEAN  */
#line 108 "minikotlin.y"
                  { (yyval.int_t) = BOOLEAN; }
#line 1488 "minikotlin_parser.cpp"
    break;

  case 42: /* type: KW_STRING  */
#line 109 "minikotlin.y"
                 { (yyval.int_t) = STRING; }
#line 1494 "minikotlin_parser.cpp"
    break;

  case 43: /* term: TK_COMMENT_LINE  */
#line 112 "minikotlin.y"
                      {(yyval.expr_T) = new CommentExpr((yyvsp[0].string_T), line, column);}
#line 1500 "minikotlin_parser.cpp"
    break;

  case 44: /* term: TK_ID '[' expression ']'  */
#line 113 "minikotlin.y"
                               {(yyval.expr_T) = new ArrayExpr( new IDExpr((yyvsp[-3].string_T), line, column), (yyvsp[-1].expr_T), line, column); }
#line 1506 "minikotlin_parser.cpp"
    break;

  case 45: /* term: '(' expression ')'  */
#line 114 "minikotlin.y"
                         {(yyval.expr_T) = (yyvsp[-1].expr_T);}
#line 1512 "minikotlin_parser.cpp"
    break;

  case 46: /* term: TK_NUMBER  */
#line 115 "minikotlin.y"
                {(yyval.expr_T) = new IntExpr((yyvsp[0].int_t), line, column);}
#line 1518 "minikotlin_parser.cpp"
    break;

  case 47: /* term: TK_ID  */
#line 116 "minikotlin.y"
            {(yyval.expr_T) = new IDExpr((yyvsp[0].string_T), line, column);}
#line 1524 "minikotlin_parser.cpp"
    break;

  case 48: /* term: TK_LIT_STRING  */
#line 117 "minikotlin.y"
                    {(yyval.expr_T) = new StringExpr((yyvsp[0].string_T),line, column);}
#line 1530 "minikotlin_parser.cpp"
    break;

  case 49: /* term: KW_TRUE  */
#line 118 "minikotlin.y"
              {(yyval.expr_T) = new BoolExpr((yyvsp[0].bool_t), line, column);}
#line 1536 "minikotlin_parser.cpp"
    break;

  case 50: /* term: KW_FALSE  */
#line 119 "minikotlin.y"
               {(yyval.expr_T) = new BoolExpr((yyvsp[0].bool_t), line, column);}
#line 1542 "minikotlin_parser.cpp"
    break;

  case 51: /* term: TK_FLOAT  */
#line 120 "minikotlin.y"
               {(yyval.expr_T) = new FloatExpr((yyvsp[0].float_t), line, column);}
#line 1548 "minikotlin_parser.cpp"
    break;


#line 1552 "minikotlin_parser.cpp"

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

#line 125 "minikotlin.y"

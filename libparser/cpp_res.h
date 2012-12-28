/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf --language=ANSI-C --struct-type --slot-name=name --hash-fn-name=cpp_hash --lookup-fn-name=cpp_lookup  */
/* Computed positions: -k'1,3,5,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


#include "strmake.h"
#define START_VARIABLE	1001
#define START_WORD	2001
#define START_SHARP	3001
#define START_YACC	4001
#define IS_RESERVED_WORD(a)	((a) >= START_WORD)
#define IS_RESERVED_VARIABLE(a)	((a) >= START_VARIABLE && (a) < START_WORD)
#define IS_RESERVED_SHARP(a)	((a) >= START_SHARP && (a) < START_YACC)
#define IS_RESERVED_YACC(a)	((a) >= START_YACC)

#define CPP_WCOLON	2001
#define CPP___P	2002
#define CPP___ATTRIBUTE__	2003
#define CPP___EXTENSION__	2004
#define CPP___THREAD	2005
#define CPP_ASM	2006
#define CPP_CONST	2007
#define CPP_INLINE	2008
#define CPP_SIGNED	2009
#define CPP_VOLATILE	2010
#define CPP_AUTO	2011
#define CPP_BOOL	2012
#define CPP_BREAK	2013
#define CPP_CASE	2014
#define CPP_CATCH	2015
#define CPP_CHAR	2016
#define CPP_CLASS	2017
#define CPP_CONST_CAST	2018
#define CPP_CONTINUE	2019
#define CPP_DEFAULT	2020
#define CPP_DELETE	2021
#define CPP_DO	2022
#define CPP_DOUBLE	2023
#define CPP_DYNAMIC_CAST	2024
#define CPP_ELSE	2025
#define CPP_ENUM	2026
#define CPP_EXPLICIT	2027
#define CPP_EXPORT	2028
#define CPP_EXTERN	2029
#define CPP_FALSE	2030
#define CPP_FLOAT	2031
#define CPP_FOR	2032
#define CPP_FRIEND	2033
#define CPP_GOTO	2034
#define CPP_IF	2035
#define CPP_INT	2036
#define CPP_LONG	2037
#define CPP_MUTABLE	2038
#define CPP_NAMESPACE	2039
#define CPP_NEW	2040
#define CPP_OPERATOR	2041
#define CPP_PRIVATE	2042
#define CPP_PROTECTED	2043
#define CPP_PUBLIC	2044
#define CPP_REGISTER	2045
#define CPP_REINTERPRET_CAST	2046
#define CPP_RETURN	2047
#define CPP_SHORT	2048
#define CPP_SIZEOF	2049
#define CPP_STATIC	2050
#define CPP_STATIC_CAST	2051
#define CPP_STRUCT	2052
#define CPP_SWITCH	2053
#define CPP_TEMPLATE	2054
#define CPP_THIS	2055
#define CPP_THROW	2056
#define CPP_TRUE	2057
#define CPP_TRY	2058
#define CPP_TYPEDEF	2059
#define CPP_TYPENAME	2060
#define CPP_TYPEID	2061
#define CPP_UNION	2062
#define CPP_UNSIGNED	2063
#define CPP_USING	2064
#define CPP_VIRTUAL	2065
#define CPP_VOID	2066
#define CPP_WCHAR_T	2067
#define CPP_WHILE	2068
#define SHARP_SHARP	3001
#define SHARP_ASSERT	3002
#define SHARP_DEFINE	3003
#define SHARP_ELIF	3004
#define SHARP_ELSE	3005
#define SHARP_ENDIF	3006
#define SHARP_ERROR	3007
#define SHARP_IDENT	3008
#define SHARP_IF	3009
#define SHARP_IFDEF	3010
#define SHARP_IFNDEF	3011
#define SHARP_IMPORT	3012
#define SHARP_INCLUDE	3013
#define SHARP_INCLUDE_NEXT	3014
#define SHARP_LINE	3015
#define SHARP_PRAGMA	3016
#define SHARP_SCCS	3017
#define SHARP_UNASSERT	3018
#define SHARP_UNDEF	3019
#define SHARP_WARNING	3020
#define CPP___DEVICE__	2069
#define CPP___GLOBAL__	2070
#define CPP___HOST__	2071
#define CPP___CONSTANT__	2072
#define CPP___SHARED__	2073
#define CPP___ALIGN__	2074
#define CPP___THREAD__	2075
#define CPP___IMPORT__	2076
#define CPP___EXPORT__	2077
#define CPP___LOCATION__	2078
#define CPP_CHAR1	2079
#define CPP_CHAR2	2080
#define CPP_CHAR3	2081
#define CPP_CHAR4	2082
#define CPP_UCHAR1	2083
#define CPP_UCHAR2	2084
#define CPP_UCHAR3	2085
#define CPP_UCHAR4	2086
#define CPP_SHORT1	2087
#define CPP_SHORT2	2088
#define CPP_SHORT3	2089
#define CPP_SHORT4	2090
#define CPP_USHORT1	2091
#define CPP_USHORT2	2092
#define CPP_USHORT3	2093
#define CPP_USHORT4	2094
#define CPP_INT1	2095
#define CPP_INT2	2096
#define CPP_INT3	2097
#define CPP_INT4	2098
#define CPP_UINT1	2099
#define CPP_UINT2	2100
#define CPP_UINT3	2101
#define CPP_UINT4	2102
#define CPP_LONG1	2103
#define CPP_LONG2	2104
#define CPP_LONG3	2105
#define CPP_LONG4	2106
#define CPP_ULONG1	2107
#define CPP_ULONG2	2108
#define CPP_ULONG3	2109
#define CPP_ULONG4	2110
#define CPP_FLOAT1	2111
#define CPP_FLOAT2	2112
#define CPP_FLOAT3	2113
#define CPP_FLOAT4	2114
#define CPP_UFLOAT1	2115
#define CPP_UFLOAT2	2116
#define CPP_UFLOAT3	2117
#define CPP_UFLOAT4	2118
#define CPP_DIM3	2119
#define CPP_TEXTURE	2120
#define CPP_TEXTUREREFERENCE	2121
#define CPP_CUDAERROR_T	2122
#define CPP_CUDADEVICEPROP	2123
#define CPP_CUDAMEMCPYKIND	2124
#define CPP_CUDAARRAY	2125
#define CPP_CUDACHANNELFORMATKIND	2126
#define CPP_CUDACHANNELFORMATDESC	2127
#define CPP_UDATEXTUREADDRESSMODE	2128
struct keyword { char *name; int token; };

#define TOTAL_KEYWORDS 159
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 458
/* maximum key range = 457, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
cpp_hash (register const char *str, register unsigned int len)
{
  static unsigned short asso_values[] =
    {
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459,  25, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 145,
      105,  60,  80, 459, 459, 459, 459, 459,   0, 459,
      459, 459, 459, 459, 459,  10, 459,  15,   0,   0,
      459, 459, 459, 459, 459, 459, 459,   5, 459, 459,
        0, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459,  30, 459,  30,  45,  50,
      105,   0,   5,  40,  95,  10, 459,   0,  15, 105,
        0, 105, 239, 459,  55,   0,   5,  20,  95,   5,
       40,   0,  20, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459, 459, 459, 459, 459,
      459, 459, 459, 459, 459, 459
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct keyword *
cpp_lookup (register const char *str, register unsigned int len)
{
  static struct keyword wordlist[] =
    {
      {""}, {""},
      {"::", CPP_WCOLON},
      {""},
      {"else", CPP_ELSE},
      {""}, {""}, {""},
      {"try", CPP_TRY},
      {""}, {""}, {""}, {""},
      {"new", CPP_NEW},
      {""}, {""}, {""},
      {"if", CPP_IF},
      {""},
      {"this", CPP_THIS},
      {"while", CPP_WHILE},
      {""}, {""},
      {"int", CPP_INT},
      {""},
      {"false", CPP_FALSE},
      {""}, {""}, {""},
      {"true", CPP_TRUE},
      {""},
      {"inline", CPP_INLINE},
      {""},
      {"__P", CPP___P},
      {""},
      {"union", CPP_UNION},
      {"#undef", SHARP_UNDEF},
      {"#assert", SHARP_ASSERT},
      {"#if", SHARP_IF},
      {"#unassert", SHARP_UNASSERT},
      {"#line", SHARP_LINE},
      {"#ifdef", SHARP_IFDEF},
      {"#define", SHARP_DEFINE},
      {""}, {""},
      {"#else", SHARP_ELSE},
      {"#endif", SHARP_ENDIF},
      {""},
      {"#include", SHARP_INCLUDE},
      {""},
      {"break", CPP_BREAK},
      {""},
      {"##", SHARP_SHARP},
      {""},
      {"case", CPP_CASE},
      {"#elif", SHARP_ELIF},
      {"static_cast", CPP_STATIC_CAST},
      {""},
      {"#include_next", SHARP_INCLUDE_NEXT},
      {"long", CPP_LONG},
      {""}, {""}, {""},
      {"__inline", CPP_INLINE},
      {""},
      {"const", CPP_CONST},
      {"extern", CPP_EXTERN},
      {""},
      {"continue", CPP_CONTINUE},
      {""},
      {"const_cast", CPP_CONST_CAST},
      {"udaTextureAddressMode", CPP_UDATEXTUREADDRESSMODE},
      {"texture", CPP_TEXTURE},
      {""}, {""},
      {"throw", CPP_THROW},
      {"__attribute", CPP___ATTRIBUTE__},
      {""},
      {"__extension__", CPP___EXTENSION__},
      {"int3", CPP_INT3},
      {"#sccs", SHARP_SCCS},
      {"textureReference", CPP_TEXTUREREFERENCE},
      {""}, {""}, {""},
      {"class", CPP_CLASS},
      {""}, {""}, {""}, {""}, {""},
      {"reinterpret_cast", CPP_REINTERPRET_CAST},
      {"__const", CPP_CONST},
      {""}, {""},
      {"__inline__", CPP_INLINE},
      {"static", CPP_STATIC},
      {""}, {""},
      {"int4", CPP_INT4},
      {"__shared__", CPP___SHARED__},
      {""}, {""},
      {"#warning", SHARP_WARNING},
      {""}, {""}, {""}, {""},
      {"__attribute__", CPP___ATTRIBUTE__},
      {"__align__", CPP___ALIGN__},
      {"__signed__", CPP_SIGNED},
      {""}, {""}, {""},
      {"namespace", CPP_NAMESPACE},
      {"using", CPP_USING},
      {"struct", CPP_STRUCT},
      {""},
      {"for", CPP_FOR},
      {"__const__", CPP_CONST},
      {"short", CPP_SHORT},
      {"return", CPP_RETURN},
      {"__constant__", CPP___CONSTANT__},
      {"volatile", CPP_VOLATILE},
      {"int2", CPP_INT2},
      {"float", CPP_FLOAT},
      {"friend", CPP_FRIEND},
      {""}, {""},
      {"enum", CPP_ENUM},
      {"__thread__", CPP___THREAD__},
      {"delete", CPP_DELETE},
      {"ufloat3", CPP_UFLOAT3},
      {"template", CPP_TEMPLATE},
      {""}, {""},
      {"sizeof", CPP_SIZEOF},
      {"__location__", CPP___LOCATION__},
      {""},
      {"char", CPP_CHAR},
      {"long3", CPP_LONG3},
      {"#ident", SHARP_IDENT},
      {"default", CPP_DEFAULT},
      {""},
      {"auto", CPP_AUTO},
      {"uint3", CPP_UINT3},
      {"double", CPP_DOUBLE},
      {"#ifndef", SHARP_IFNDEF},
      {""}, {""},
      {"__volatile", CPP_VOLATILE},
      {"signed", CPP_SIGNED},
      {"ufloat4", CPP_UFLOAT4},
      {""},
      {"goto", CPP_GOTO},
      {""}, {""},
      {"#pragma", SHARP_PRAGMA},
      {"register", CPP_REGISTER},
      {""}, {""},
      {"switch", CPP_SWITCH},
      {"mutable", CPP_MUTABLE},
      {"__host__", CPP___HOST__},
      {"int1", CPP_INT1},
      {""}, {""},
      {"wchar_t", CPP_WCHAR_T},
      {""},
      {"bool", CPP_BOOL},
      {""},
      {"cudaError_t", CPP_CUDAERROR_T},
      {""},
      {"unsigned", CPP_UNSIGNED},
      {"cudaArray", CPP_CUDAARRAY},
      {""},
      {"short3", CPP_SHORT3},
      {"ufloat2", CPP_UFLOAT2},
      {""}, {""},
      {"long4", CPP_LONG4},
      {"float3", CPP_FLOAT3},
      {"__volatile__", CPP_VOLATILE},
      {"__signed", CPP_SIGNED},
      {""},
      {"uint4", CPP_UINT4},
      {""}, {""}, {""}, {""}, {""}, {""},
      {"virtual", CPP_VIRTUAL},
      {""}, {""}, {""},
      {"short4", CPP_SHORT4},
      {""},
      {"operator", CPP_OPERATOR},
      {""}, {""},
      {"float4", CPP_FLOAT4},
      {"__asm__", CPP_ASM},
      {"__thread", CPP___THREAD},
      {""},
      {"char3", CPP_CHAR3},
      {""}, {""}, {""}, {""}, {""}, {""},
      {"do", CPP_DO},
      {""},
      {"void", CPP_VOID},
      {"__global__", CPP___GLOBAL__},
      {""},
      {"ufloat1", CPP_UFLOAT1},
      {""}, {""}, {""},
      {"short2", CPP_SHORT2},
      {""}, {""}, {""}, {""},
      {"float2", CPP_FLOAT2},
      {"dynamic_cast", CPP_DYNAMIC_CAST},
      {""}, {""},
      {"long2", CPP_LONG2},
      {"ulong3", CPP_ULONG3},
      {""}, {""}, {""},
      {"uint2", CPP_UINT2},
      {"uchar3", CPP_UCHAR3},
      {"ushort3", CPP_USHORT3},
      {""}, {""}, {""},
      {"cudaChannelFormatDesc", CPP_CUDACHANNELFORMATDESC},
      {""},
      {"asm", CPP_ASM},
      {""},
      {"char4", CPP_CHAR4},
      {"#error", SHARP_ERROR},
      {"#import", SHARP_IMPORT},
      {""}, {""},
      {"catch", CPP_CATCH},
      {"ulong4", CPP_ULONG4},
      {"typename", CPP_TYPENAME},
      {""}, {""}, {""},
      {"uchar4", CPP_UCHAR4},
      {"ushort4", CPP_USHORT4},
      {""}, {""}, {""},
      {"short1", CPP_SHORT1},
      {"explicit", CPP_EXPLICIT},
      {""}, {""}, {""},
      {"float1", CPP_FLOAT1},
      {""}, {""}, {""},
      {"__device__", CPP___DEVICE__},
      {""}, {""}, {""},
      {"dim3", CPP_DIM3},
      {"__asm", CPP_ASM},
      {"ulong2", CPP_ULONG2},
      {""}, {""},
      {"cudaMemcpyKind", CPP_CUDAMEMCPYKIND},
      {""},
      {"uchar2", CPP_UCHAR2},
      {"ushort2", CPP_USHORT2},
      {""}, {""}, {""},
      {"private", CPP_PRIVATE},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {"char2", CPP_CHAR2},
      {"cudaChannelFormatKind", CPP_CUDACHANNELFORMATKIND},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {"export", CPP_EXPORT},
      {""}, {""}, {""},
      {"__export__", CPP___EXPORT__},
      {"long1", CPP_LONG1},
      {""}, {""}, {""}, {""},
      {"uint1", CPP_UINT1},
      {"ulong1", CPP_ULONG1},
      {""}, {""},
      {"__import__", CPP___IMPORT__},
      {""},
      {"uchar1", CPP_UCHAR1},
      {"ushort1", CPP_USHORT1},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {"public", CPP_PUBLIC},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
      {"typedef", CPP_TYPEDEF},
      {""}, {""}, {""},
      {"typeid", CPP_TYPEID},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {"char1", CPP_CHAR1},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
      {"cudaDeviceProp", CPP_CUDADEVICEPROP},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
      {"protected", CPP_PROTECTED}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = cpp_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}

int
cpp_reserved_word(const char *str, int len)
{
	struct keyword *keyword;

	keyword = cpp_lookup(str, len);
	return (keyword && IS_RESERVED_WORD(keyword->token)) ? keyword->token : 0;
}
int
cpp_reserved_sharp(const char *str, int len)
{
	struct keyword *keyword;

	/* Delete blanks. Ex. ' # define ' => '#define' */
	str = strtrim(str, TRIM_ALL, &len);

	keyword = cpp_lookup(str, len);
	return (keyword && IS_RESERVED_SHARP(keyword->token)) ? keyword->token : 0;
}

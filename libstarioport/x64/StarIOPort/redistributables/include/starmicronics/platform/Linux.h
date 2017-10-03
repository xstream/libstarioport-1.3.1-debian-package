#ifndef platform_linux__
#define platform_linux__

#define __BYTEORDER_HAS_U64__

#include <sys/types.h>
#include <limits.h>
#include <float.h>

#define DLL_EXPORT
#define DLL_IMPORT

#define STARMICRONICS_API

#define CALL_CONVENT

#ifndef SM_BOOLEAN
  #define SM_BOOLEAN __uint32_t
#endif
#define SM_TRUE ((__uint32_t) (1 == 1))
#define SM_FALSE ((__uint32_t) (0 > 1))

#define UCHAR  unsigned char
#define MAX_UCHAR ((UCHAR) UCHAR_MAX)

#define UINT8     __uint8_t
#define MAX_UINT8 ((UCHAR) UCHAR_MAX)

#define UINT16 __uint16_t
#define MAX_UINT16 ((UINT16) USHRT_MAX)

#define UINT32 __uint32_t
#define MAX_UINT32 ((UINT32) UINT_MAX)

#define UINT64 __uint64_t
#define MAX_UINT64 ((UINT64) ULONG_LONG_MAX)

#define CHAR   signed char
#define MIN_CHAR ((CHAR) CHAR_MIN)
#define MAX_CHAR ((CHAR) CHAR_MAX)

#define INT8   __int8_t
#define MIN_INT8 ((CHAR) CHAR_MIN)
#define MAX_INT8 ((CHAR) CHAR_MAX)

#define INT16  __int16_t
#define MIN_INT16 ((INT16) SHRT_MIN)
#define MAX_INT16 ((INT16) SHRT_MAX)

#define INT32  __int32_t
#define MIN_INT32 ((INT32) INT_MIN)
#define MAX_INT32 ((INT32) INT_MAX)

#define INT64  __int64_t
#define MIN_INT64 ((INT64) LONG_LONG_MIN)
#define MAX_INT64 ((INT64) LONG_LONG_MAX)

#ifndef FLOAT
  #define FLOAT  float
#endif
#define DIG_FLOAT FLT_MANT_DIG
#define MIN_FLOAT ((FLOAT)FLT_MIN)
#define MAX_FLOAT ((FLOAT)FLT_MAX)

#ifndef DOUBLE
  #define DOUBLE double
#endif
#define DIG_DOUBLE DBL_MANT_DIG
#define MIN_DOUBLE ((DOUBLE)DBL_MIN)
#define MAX_DOUBLE ((DOUBLE)DBL_MAX)

#define PLUGIN LinuxPlugin

#define PATH_SEPERATOR_CHAR '/'
#define PATH_SEPERATOR_STRING "/"

#endif

/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __UX_X86_64_TYPES_H
# define __UX_X86_64_TYPES_H           1

# if !defined(__x86_64__) && !defined(_M_AMD64)
#  error Compilation of this file is only supported on x86-64
# endif

# define __UX_CHAR_BITS                8
# define __UX_SHORT_BITS               16
# define __UX_INT_BITS                 32
# define __UX_LONG_BITS                64
# define __UX_PTR_BITS                 64

# define __UX_INT8_C(i)                (i)
# define __UX_INT8_MIN                 -127
# define __UX_INT8_MAX                 127
# define __UX_UINT8_C(i)               (i)
# define __UX_UINT8_MAX                128
# define __UX_INT16_C(i)               (i)
# define __UX_INT16_MIN                -32767
# define __UX_INT16_MAX                32767
# define __UX_UINT16_C(i)              (i)
# define __UX_UINT16_MAX               65535
# define __UX_INT32_C(i)               (i)
# define __UX_INT32_MIN                -2147483647
# define __UX_INT32_MAX                2147483647
# define __UX_UINT32_C(i)              (i)
# define __UX_UINT32_MAX               4294967295
# define __UX_INT64_C(i)               (i ## LL)
# define __UX_INT64_MIN                -9223372036854775807LL
# define __UX_INT64_MAX                9223372036854775807LL
# define __UX_UINT64_C(i)              (i ## ULL)
# define __UX_UINT64_MAX               18446744073709551615ULL

# define __UX_INT8                     signed char
# define __UX_UINT8                    unsigned char
# define __UX_FAST8                    int
# define __UX_UFAST8                   unsigned int
# define __UX_INT16                    signed short
# define __UX_UINT16                   unsigned short
# define __UX_FAST16                   int
# define __UX_UFAST16                  unsigned int
# define __UX_FAST8_MIN                __UX_INT32_MIN
# define __UX_FAST8_MAX                __UX_INT32_MAX
# define __UX_UFAST8_MAX               __UX_UINT32_MAX
# define __UX_FAST16_MIN               __UX_INT32_MIN
# define __UX_FAST16_MAX               __UX_INT32_MAX
# define __UX_UFAST16_MAX              __UX_UINT32_MAX
# define __UX_INT32                    signed int
# define __UX_UINT32                   unsigned int
# define __UX_FAST32_MIN               __UX_INT32_MIN
# define __UX_FAST32_MAX               __UX_INT32_MAX
# define __UX_FAST32                   int
# define __UX_UFAST32_MAX              __UX_UINT32_MAX
# define __UX_UFAST32                  unsigned int

# ifdef _MSC_VER
#  define __UX_INT64                   __int64
#  define __UX_UINT64                  __uint64
#  define __UX_FAST64                  __int64
#  define __UX_UFAST64                 __uint64
# else
#  define __UX_INT64                   signed long
#  define __UX_UINT64                  unsigned long
#  define __UX_FAST64                  signed long
#  define __UX_UFAST64                 unsigned long
# endif

/* intmax_t */
# ifdef __INTMAX_TYPE__
#  define __UX_INTMAX                  __INTMAX_TYPE__
# else
#  define __UX_INTMAX                  __UX_INT64
# endif
# define __UX_INTMAX_C(i)              (i ## L)
# define __UX_INTMAX_MIN               __UX_INT64_MIN
# define __UX_INTMAX_MAX               __UX_INT64_MAX

/* uintmax_t */
# ifdef __UINTMAX_TYPE__
#  define __UX_UINTMAX                 __UINTMAX_TYPE__
# else
#  define __UX_UINTMAX                 __UX_UINT64
# endif
# define __UX_UINTMAX_C(i)             (i ## UL)
# define __UX_UINTMAX_MAX              __UX_UINT64_MAX

/* intptr_t */
# ifdef __INTPTR_TYPE__
#  define __UX_INTPTR                  __INTPTR_TYPE__
# else
#  define __UX_INTPTR                  __UX_INT64
# endif
# define __UX_INTPTR_MIN               __UX_INT64_MIN
# define __UX_INTPTR_MAX               __UX_INT64_MAX

/* uintptr_t */
# ifdef __UINTPTR_TYPE__
#  define __UX_UINTPTR                 __UINTPTR_TYPE__
# else
#  define __UX_UINTPTR                 __UX_UINT64
# endif
# define __UX_UINTPTR_MAX              __UX_UINT64_MAX

/* ptrdiff_t */
# ifdef __PTRDIFF_TYPE__
#  define __UX_PTRDIFF                 __PTRDIFF_TYPE__
# else
#  define __UX_PTRDIFF                 __UX_INT64
# endif
# define __UX_PTRDIFF_C(i)             (i ## L)
# define __UX_PTRDIFF_MIN              __UX_INT64_MIN
# define __UX_PTRDIFF_MAX              __UX_INT64_MAX

/* wchar_t */
# ifdef __WCHAR_TYPE__
#  define __UX_WCHAR                   __WCHAR_TYPE__
# else
#  define __UX_WCHAR                   int
# endif
# define __UX_WCHAR_C(i)               (i)
# define __UX_WCHAR_MIN                __UX_INT32_MIN
# define __UX_WCHAR_MAX                __UX_INT32_MAX

/* wint_t */
# ifdef __WINT_TYPE__
#  define __UX_WINT                    __WCHAR_TYPE__
# else
#  define __UX_WINT                    int
# endif
# define __UX_WINT_C(i)                (i)
# define __UX_WINT_MIN                 __UX_INT32_MIN
# define __UX_WINT_MAX                 __UX_INT32_MAX

/* size_t */
# ifdef __SIZE_TYPE__
#  define __UX_SIZE                    __SIZE_TYPE__
# else
#  define __UX_SIZE                    __UX_UINT64
# endif
# define __UX_SIZE_MAX                 __UX_UINT64_MAX

/* ssize_t */
# ifdef __SSIZE_TYPE__
#  define __UX_SSIZE                   __SSIZE_TYPE__
# else
#  define __UX_SSIZE                   __UX_INT64
# endif
# define __UX_SSIZE_MIN                __UX_INT64_MIN
# define __UX_SSIZE_MAX                __UX_INT64_MAX

/* sig_atomic_t */
# define __UX_SIG_ATOMIC               int
# define __UX_SIG_ATOMIC_MIN           __UX_INT32_MIN
# define __UX_SIG_ATOMIC_MAX           __UX_INT32_MAX

#endif /*!__UX_X86_64_TYPES_H*/

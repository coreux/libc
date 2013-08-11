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

#ifndef UX_X86_64_TYPES_H_
# define UX_X86_64_TYPES_H_            1

# if !defined(__x86_64__) && !defined(_M_AMD64)
#  error Compilation of this file is only supported on x86-64
# endif

# define UX_CHAR_BITS_                 8
# define UX_SHORT_BITS_                16
# define UX_INT_BITS_                  32
# define UX_LONG_BITS_                 64
# define UX_PTR_BITS_                  64

# define UX_INT8_C_(i)                 (i)
# define UX_INT8_MIN_                  -127
# define UX_INT8_MAX_                  127
# define UX_UINT8_C_(i)                (i)
# define UX_UINT8_MAX_                 128
# define UX_INT16_C_(i)                (i)
# define UX_INT16_MIN_                 -32767
# define UX_INT16_MAX_                 32767
# define UX_UINT16_C_(i)               (i)
# define UX_UINT16_MAX_                65535
# define UX_INT32_C_(i)                (i)
# define UX_INT32_MIN_                 -2147483647
# define UX_INT32_MAX_                 2147483647
# define UX_UINT32_C_(i)               (i)
# define UX_UINT32_MAX_                4294967295
# define UX_INT64_C_(i)                (i ## LL)
# define UX_INT64_MIN_                 -9223372036854775807LL
# define UX_INT64_MAX_                 9223372036854775807LL
# define UX_UINT64_C_(i)               (i ## ULL)
# define UX_UINT64_MAX_                18446744073709551615ULL

# define UX_INT8_                      signed char
# define UX_UINT8_                     unsigned char
# define UX_FAST8_                     int
# define UX_UFAST8_                    unsigned int
# define UX_INT16_                     signed short
# define UX_UINT16_                    unsigned short
# define UX_FAST16_                    int
# define UX_UFAST16_                   unsigned int
# define UX_FAST8_MIN_                 UX_INT32_MIN_
# define UX_FAST8_MAX_                 UX_INT32_MAX_
# define UX_UFAST8_MAX_                UX_UINT32_MAX_
# define UX_FAST16_MIN_                UX_INT32_MIN_
# define UX_FAST16_MAX_                UX_INT32_MAX_
# define UX_UFAST16_MAX_               UX_UINT32_MAX_
# define UX_INT32_                     signed int
# define UX_UINT32_                    unsigned int
# define UX_FAST32_MIN_                UX_INT32_MIN_
# define UX_FAST32_MAX_                UX_INT32_MAX_
# define UX_FAST32_                    int
# define UX_UFAST32_MAX_               UX_UINT32_MAX_
# define UX_UFAST32_                   unsigned int

# ifdef _MSC_VER
#  define UX_INT64_                    __int64
#  define UX_UINT64_                   __uint64
#  define UX_FAST64_                   __int64
#  define UX_UFAST64_                  __uint64
# else
#  define UX_INT64_                    signed long
#  define UX_UINT64_                   unsigned long
#  define UX_FAST64_                   signed long
#  define UX_UFAST64_                  unsigned long
# endif

/* intmax_t */
# ifdef __INTMAX_TYPE__
#  define UX_INTMAX_                   __INTMAX_TYPE__
# else
#  define UX_INTMAX_                   UX_INT64_
# endif
# define UX_INTMAX_C_(i)               (i ## L)
# define UX_INTMAX_MIN_                UX_INT64_MIN_
# define UX_INTMAX_MAX_                UX_INT64_MAX_

/* uintmax_t */
# ifdef __UINTMAX_TYPE__
#  define UX_UINTMAX_                  __UINTMAX_TYPE__
# else
#  define UX_UINTMAX_                  UX_UINT64_
# endif
# define UX_UINTMAX_C_(i)              (i ## UL)
# define UX_UINTMAX_MAX_               UX_UINT64_MAX_

/* intptr_t */
# ifdef __INTPTR_TYPE__
#  define UX_INTPTR_                   __INTPTR_TYPE__
# else
#  define UX_INTPTR_                   UX_INT64_
# endif
# define UX_INTPTR_MIN_                UX_INT64_MIN_
# define UX_INTPTR_MAX_                UX_INT64_MAX_

/* uintptr_t */
# ifdef __UINTPTR_TYPE__
#  define UX_UINTPTR_                  __UINTPTR_TYPE__
# else
#  define UX_UINTPTR_                  UX_UINT64_
# endif
# define UX_UINTPTR_MAX_               UX_UINT64_MAX_

/* ptrdiff_t */
# ifdef __PTRDIFF_TYPE__
#  define UX_PTRDIFF_                  __PTRDIFF_TYPE__
# else
#  define UX_PTRDIFF_                  UX_INT64_
# endif
# define UX_PTRDIFF_C_(i)              (i ## L)
# define UX_PTRDIFF_MIN_               UX_INT64_MIN_
# define UX_PTRDIFF_MAX_               UX_INT64_MAX_

/* wchar_t */
# ifdef __WCHAR_TYPE__
#  define UX_WCHAR_                    __WCHAR_TYPE__
# else
#  define UX_WCHAR_                    int
# endif
# define UX_WCHAR_C_(i)                (i)
# define UX_WCHAR_MIN_                 UX_INT32_MIN_
# define UX_WCHAR_MAX_                 UX_INT32_MAX_

/* wint_t */
# ifdef __WINT_TYPE__
#  define UX_WINT_                     __WCHAR_TYPE__
# else
#  define UX_WINT_                     int
# endif
# define UX_WINT_C_(i)                 (i)
# define UX_WINT_MIN_                  UX_INT32_MIN_
# define UX_WINT_MAX_                  UX_INT32_MAX_

/* size_t */
# ifdef __SIZE_TYPE__
#  define UX_SIZE_                     __SIZE_TYPE__
# else
#  define UX_SIZE_                     UX_UINT64_
# endif
# define UX_SIZE_MAX_                  UX_UINT64_MAX_

/* sig_atomic_t */
# define UX_SIG_ATOMIC_                int
# define UX_SIG_ATOMIC_MIN_            UX_INT32_MIN_
# define UX_SIG_ATOMIC_MAX_            UX_INT32_MAX_

#endif /*!UX_X86_64_TYPES_H_*/

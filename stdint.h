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

/*
http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html
*/

#ifndef __UX_STDINT_H
# define __UX_STDINT_H                 1

# include <ux/machtypes.h>

/* Exact width integer types [u]intN_t */

# define INT8_MIN                      __UX_INT8_MIN
# define INT8_MAX                      __UX_INT8_MAX

typedef __UX_INT8 int8_t;

# define UINT8_MAX                     __UX_UINT8_MAX

typedef __UX_UINT8 uint8_t;

# define INT16_MIN                     __UX_INT16_MIN
# define INT16_MAX                     __UX_INT16_MAX

typedef __UX_INT16 int16_t;

# define UINT16_MAX                    __UX_UINT16_MAX

typedef __UX_UINT16 uint16_t;

# define INT32_MIN                     __UX_INT32_MIN
# define INT32_MAX                     __UX_INT32_MAX

typedef __UX_INT32 int32_t;

# define UINT32_MAX                    __UX_UINT32_MAX

typedef __UX_UINT32 uint32_t;

# ifdef __UX_INT64
#  define INT64_MIN                    __UX_INT64_MIN
#  define INT64_MAX                    __UX_INT64_MAX
typedef __UX_INT64 int64_t;
# endif

# ifdef __UX_UINT64
#  define UINT64_MAX                   __UX_UINT64_MAX
typedef __UX_UINT64 uint64_t;
# endif

/* Minimum-width integer types [u]int_leastN_t */

# define INT_LEAST8_MIN                __UX_INT8_MIN
# define INT_LEAST8_MAX                __UX_INT8_MAX

typedef __UX_INT8 int_least8_t;

# define UINT_LEAST8_MAX               __UX_UINT8_MAX

typedef __UX_UINT8 uint_least8_t;

# define INT_LEAST16_MIN               __UX_INT16_MIN
# define INT_LEAST16_MAX               __UX_INT16_MAX

typedef __UX_INT16 int_least16_t;

# define UINT_LEAST16_MAX              __UX_UINT16_MAX

typedef __UX_UINT16 uint_least16_t;

# define INT_LEAST32_MIN               __UX_INT32_MIN
# define INT_LEAST32_MAX               __UX_INT32_MAX

typedef __UX_INT32 int_least32_t;

# define UINT_LEAST32_MAX              __UX_UINT32_MAX

typedef __UX_UINT32 uint_least32_t;

# ifdef __UX_INT64
# define INT_LEAST64_MIN               __UX_INT64_MIN
# define INT_LEAST64_MAX               __UX_INT64_MAX
typedef __UX_INT64 int_least64_t;
# endif

# ifdef __UX_UINT64
#  define UINT_LEAST64_MAX             __UX_UINT64_MAX
typedef __UX_UINT64 uint_least64_t;
# endif

/* Fastest minium-width integer types [u]int_fastN_t */

# define INT_FAST8_MIN                 __UX_FAST8_MIN
# define INT_FAST8_MAX                 __UX_FAST8_MAX

typedef __UX_FAST8 int_fast8_t;

# define UINT_FAST8_MAX                __UX_UFAST8_MAX

typedef __UX_UFAST8 uint_fast8_t;

# define INT_FAST16_MIN                __UX_FAST16_MIN
# define INT_FAST16_MAX                __UX_FAST16_MAX

typedef __UX_FAST16 int_fast16_t;

# define UINT_FAST16_MAX               __UX_UFAST16_MAX

typedef __UX_UFAST16 uint_fast16_t;

# define INT_FAST32_MIN                __UX_FAST32_MIN
# define INT_FAST32_MAX                __UX_FAST32_MAX

typedef __UX_FAST32 int_fast32_t;

# define UINT_FAST32_MAX               __UX_UFAST32_MAX

typedef __UX_UFAST32 uint_fast32_t;

# ifdef __UX_FAST64
#  define INT_FAST64_MIN               __UX_FAST64_MIN
#  define INT_FAST64_MAX               __UX_FAST64_MAX
typedef __UX_FAST64 int_fast64_t;
# endif

# ifdef __UX_UFAST64
#  define UINT_FAST64_MAX              __UX_UFAST64_MAX
typedef __UX_UFAST64 uint_fast64_t;
# endif

# if _XOPEN_SOURCE >= 600

/* Integer types capable of holding object pointers */

typedef __UX_INTPTR intptr_t;
# define INTPTR_MIN                    __UX_INTPTR_MIN
# define INTPTR_MAX                    __UX_INTPTR_MAX

typedef __UX_UINTPTR uintptr_t;
# define UINTPTR_MAX                   __UX_UINTPTR_MAX

# endif /* _XOPEN_SOURCE >= 600 */

/* Greatest-width integer types */

typedef __UX_INTMAX intmax_t;
# define INTMAX_MIN                    __UX_INTMAX_MIN
# define INTMAX_MAX                    __UX_INTMAX_MAX

typedef __UX_UINTMAX uintmax_t;
# define UINTMAX_MAX                   __UX_INTMAX_MAX

/* Limits of other integer types */

/* ptrdiff_t: Signed integer type of the result of subtracting two pointers */
# define PTRDIFF_MIN                   __UX_PTRDIFF_MIN
# define PTRDIFF_MAX                   __UX_PTRDIFF_MAX

/* sig_atomic_t: Possibly volatile-qualified integer type of an object that
 *   can be accessed as an atomic entity, even in the presence of asynchronous
 *   interrupts.
 */
# define SIG_ATOMIC_MIN                __UX_SIG_ATOMIC_MIN
# define SIG_ATOMIC_MAX                __UX_SIG_ATOMIC_MAX

/* size_t: Unsigned integer type of the result of the sizeof operator */
# define SIZE_MAX                      __UX_SIZE_MAX

/* wchar_t: Integer type whose range of values can represent distinct wide-
 *   character codes for all members of the largest character set specified
 *   among the locales supported by the compilation environment: the null
 *   character has the code value 0 and each member of the portable character
 *   set has a code value equal to its value when used as the lone character
 *   in an integer character constant.
 */
# define WCHAR_MIN                     __UX_WCHAR_MIN
# define WCHAR_MAX                     __UX_WCHAR_MAX

/* wint_t: An integer type capable of storing any valid value of wchar_t or
 *   WEOF.
 */
# define WINT_MIN                      __UX_WINT_MIN
# define WINT_MAX                      __UX_WINT_MAX

/* Macros for integer constant expressions */

/* Macros for minimum-width integer constant expressions */

# define INT8_C(i)                     __UX_INT8_C(i)
# define UINT8_C(i)                    __UX_UINT8_C(i)
# define INT16_C(i)                    __UX_INT16_C(i)
# define UINT16_C(i)                   __UX_UINT16_C(i)
# define INT32_C(i)                    __UX_INT32_C(i)
# define UINT32_C(i)                   __UX_UINT32_C(i)
# ifdef __UX_INT64_C
#  define INT64_C(i)                   __UX_INT64_C(i)
# endif
# ifdef __UX_UINT64_C
#  define UINT64_C(i)                  __UX_UINT64_C(i)
# endif

/* Macros for greatest-width integer constant expressions */

# define INTMAX_C(i)                   __UX_INTMAX_C(i)
# define UINTMAX_C(i)                  __UX_UINTMAX_C(i)

#endif /*!__UX_STDINT_H*/

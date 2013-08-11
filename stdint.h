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

#ifndef UX_STDINT_H_
# define UX_STDINT_H_                  1

# include <ux/machtypes.h>

/* Exact width integer types [u]intN_t */

# define INT8_MIN                      UX_INT8_MIN_
# define INT8_MAX                      UX_INT8_MAX_

typedef UX_INT8_ int8_t;

# define UINT8_MAX                     UX_UINT8_MAX_

typedef UX_UINT8_ uint8_t;

# define INT16_MIN                     UX_INT16_MIN_
# define INT16_MAX                     UX_INT16_MAX_

typedef UX_INT16_ int16_t;

# define UINT16_MAX                    UX_UINT16_MAX_

typedef UX_UINT16_ uint16_t;

# define INT32_MIN                     UX_INT32_MIN_
# define INT32_MAX                     UX_INT32_MAX_

typedef UX_INT32_ int32_t;

# define UINT32_MAX                    UX_UINT32_MAX_

typedef UX_UINT32_ uint32_t;

# ifdef UX_INT64_
#  define INT64_MIN                    UX_INT64_MIN_
#  define INT64_MAX                    UX_INT64_MAX_
typedef UX_INT64_ int64_t;
# endif

# ifdef UX_UINT64_
#  define UINT64_MAX                   UX_UINT64_MAX_
typedef UX_UINT64_ uint64_t;
# endif

/* Minimum-width integer types [u]int_leastN_t */

# define INT_LEAST8_MIN                UX_INT8_MIN_
# define INT_LEAST8_MAX                UX_INT8_MAX_

typedef UX_INT8_ int_least8_t;

# define UINT_LEAST8_MAX               UX_UINT8_MAX_

typedef UX_UINT8_ uint_least8_t;

# define INT_LEAST16_MIN               UX_INT16_MIN_
# define INT_LEAST16_MAX               UX_INT16_MAX_

typedef UX_INT16_ int_least16_t;

# define UINT_LEAST16_MAX              UX_UINT16_MAX_

typedef UX_UINT16_ uint_least16_t;

# define INT_LEAST32_MIN               UX_INT32_MIN_
# define INT_LEAST32_MAX               UX_INT32_MAX_

typedef UX_INT32_ int_least32_t;

# define UINT_LEAST32_MAX              UX_UINT32_MAX_

typedef UX_UINT32_ uint_least32_t;

# ifdef UX_INT64_
# define INT_LEAST64_MIN               UX_INT64_MIN_
# define INT_LEAST64_MAX               UX_INT64_MAX_
typedef UX_INT64_ int_least64_t;
# endif

# ifdef UX_UINT64_
#  define UINT_LEAST64_MAX             UX_UINT64_MAX_
typedef UX_UINT64_ uint_least64_t;
# endif

/* Fastest minium-width integer types [u]int_fastN_t */

# define INT_FAST8_MIN                 UX_FAST8_MIN_
# define INT_FAST8_MAX                 UX_FAST8_MAX_

typedef UX_FAST8_ int_fast8_t;

# define UINT_FAST8_MAX                UX_UFAST8_MAX_

typedef UX_UFAST8_ uint_fast8_t;

# define INT_FAST16_MIN                UX_FAST16_MIN_
# define INT_FAST16_MAX                UX_FAST16_MAX_

typedef UX_FAST16_ int_fast16_t;

# define UINT_FAST16_MAX               UX_UFAST16_MAX_

typedef UX_UFAST16_ uint_fast16_t;

# define INT_FAST32_MIN                UX_FAST32_MIN_
# define INT_FAST32_MAX                UX_FAST32_MAX_

typedef UX_FAST32_ int_fast32_t;

# define UINT_FAST32_MAX               UX_UFAST32_MAX_

typedef UX_UFAST32_ uint_fast32_t;

# ifdef UX_FAST64_
#  define INT_FAST64_MIN               UX_FAST64_MIN_
#  define INT_FAST64_MAX               UX_FAST64_MAX_
typedef UX_FAST64_ int_fast64_t;
# endif

# ifdef UX_UFAST64_
#  define UINT_FAST64_MAX              UX_UFAST64_MAX_
typedef UX_UFAST64_ uint_fast64_t;
# endif

/* Integer types capable of holding object pointers */

# if _XOPEN_SOURCE >= 600

typedef UX_INTPTR_ intptr_t;
# define INTPTR_MIN                    UX_INTPTR_MIN_
# define INTPTR_MAX                    UX_INTPTR_MAX_

typedef UX_UINTPTR_ uintptr_t;
# define UINTPTR_MAX                   UX_UINTPTR_MAX_

# endif /* _XOPEN_SOURCE >= 600 */

/* Greatest-width integer types */

typedef UX_INTMAX_ intmax_t;
# define INTMAX_MIN                    UX_INTMAX_MIN_
# define INTMAX_MAX                    UX_INTMAX_MAX_

typedef UX_UINTMAX_ uintmax_t;
# define UINTMAX_MAX                   UX_INTMAX_MAX_

/* Limits of other integer types */

/* ptrdiff_t: Signed integer type of the result of subtracting two pointers */
# define PTRDIFF_MIN                   UX_PTRDIFF_MIN_
# define PTRDIFF_MAX                   UX_PTRDIFF_MAX_

/* sig_atomic_t: Possibly volatile-qualified integer type of an object that
 *   can be accessed as an atomic entity, even in the presence of asynchronous
 *   interrupts.
 */
# define SIG_ATOMIC_MIN                UX_SIG_ATOMIC_MIN_
# define SIG_ATOMIC_MAX                UX_SIG_ATOMIC_MAX_

/* size_t: Unsigned integer type of the result of the sizeof operator */
# define SIZE_MAX                      UX_SIZE_MAX_

/* wchar_t: Integer type whose range of values can represent distinct wide-
 *   character codes for all members of the largest character set specified
 *   among the locales supported by the compilation environment: the null
 *   character has the code value 0 and each member of the portable character
 *   set has a code value equal to its value when used as the lone character
 *   in an integer character constant.
 */
# define WCHAR_MIN                     UX_WCHAR_MIN_
# define WCHAR_MAX                     UX_WCHAR_MAX_

/* wint_t: An integer type capable of storing any valid value of wchar_t or
 *   WEOF.
 */
# define WINT_MIN                      UX_WINT_MIN_
# define WINT_MAX                      UX_WINT_MAX_

/* Macros for integer constant expressions */

/* Macros for minimum-width integer constant expressions */

# define INT8_C(i)                     UX_INT8_C_(i)
# define UINT8_C(i)                    UX_UINT8_C_(i)
# define INT16_C(i)                    UX_INT16_C_(i)
# define UINT16_C(i)                   UX_UINT16_C_(i)
# define INT32_C(i)                    UX_INT32_C_(i)
# define UINT32_C(i)                   UX_UINT32_C_(i)
# ifdef UX_INT64_C_
#  define INT64_C(i)                   UX_INT64_C_(i)
# endif
# ifdef UX_UINT64_C_
#  define UINT64_C(i)                  UX_UINT64_C_(i)
# endif

/* Macros for greatest-width integer constant expressions */

# define INTMAX_C(i)                   UX_INTMAX_C_(i)
# define UINTMAX_C(i)                  UX_UINTMAX_C_(i)

#endif /*!UX_STDINT_H_*/

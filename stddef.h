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

http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stddef.h.html

*/

#ifndef __UX_STDDEF_H
# define __UX_STDDEF_H                 1

# include <ux/machtypes.h>

/* NULL: The null pointer constant */
# ifndef NULL
#  if defined(__cplusplus)
#   if defined(__GNUG__)
/* For G++, use the builtin __null */
#    define NULL                       __null
#   else
#    define NULL                       (0L)
#   endif
#  else /*__cplusplus*/
#   define NULL                        ((void *) 0)
#  endif
# endif /*NULL*/

/* offsetof(): Integer constant expression of type size_t, the value of
 *   which is the offset in bytes to the structure member from the
 *   from the beginning of its structure (type).
 */
# if defined(__GNUC__) && ((__GNUC__ >= 3) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 5))
#  define offsetof(type, member)       __builtin_offsetof(type, member)
# else
#  define offsetof(type, member)       ((size_t) &((type *)0)->member)
# endif

/* ptrdiff_t: Signed integer type of the result of subtracting two pointers */
typedef __UX_PTRDIFF ptrdiff_t;

/* wchar_t: Integer type whose range of values can represent distinct wide-
 *   character codes for all members of the largest character set specified
 *   amongst the locales supported by the compilation environment: the null
 *   character has the code value 0 and each member of the portable character
 *   set has a code value equal to its value when used as the lone character
 *   in an integer character constant.
 */
typedef __UX_WCHAR wchar_t;

/* size_t: Unsigned integer type of the result of the sizeof operator */
# include <ux/sizedef.h>

#endif /*!__UX_STDDEF_H*/

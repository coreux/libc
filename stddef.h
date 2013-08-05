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

#ifndef UX_STDDEF_H_
# define UX_STDDEF_H_                  1

/* Define NULL */
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

/* Define ptrdiff_t */
typedef long ptrdiff_t;

/* Define wchar_t */
typedef int wchar_t;

/* Define size_t */
typedef unsigned long size_t;

#endif /*!UX_STDDEF_H_*/
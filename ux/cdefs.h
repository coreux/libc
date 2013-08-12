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

#ifndef __UX_CDEFS_H
# define __UX_CDEFS_H                  1

# ifndef _POSIX_C_SOURCE
#  if defined(_XOPEN_SOURCE) && _XOPEN_SOURCE == 600
#   define _POSIX_C_SOURCE             200112L
#  endif
# endif

# if defined(__cplusplus)
#  define __UX_BEGIN_DECLS             extern "C" {
#  define __UX_END_DECLS               }
# else
#  define __UX_BEGIN_DECLS
#  define __UX_END_DECLS
# endif

# define __UX_CONCAT(a, b)             a ## b
# define __UX_STRING(a)                #a

# if defined(__GNUC__)
#  define __UX_WEAK                    __attribute__((weak))
/* Darwin and Win32/Win64 prefix global symbols with an underscore */
#  if defined(__APPLE__) || defined(_WIN32) || defined(_WIN64)
#   define __UX_SUF(name, suffix)      __asm("_" __UX_STRING(name) suffix)
#  else
#   define __UX_SUF(name, suffix)      __asm(__UX_STRING(name) suffix)
#  endif
# else
#  error Unsupported compiler
# endif

# define __UX_SUFFIX_UX03              "$UX$2003"
# define __UX_SUFFIX_PRIVATE           "$UX$private"

# define __UX_SYM03(name)              __UX_SUF(name, __UX_SUFFIX_UX03)
# define __UX_PRIVATE(name)            __UX_SUF(name, __UX_SUFFIX_PRIVATE)

#endif /*!__UX_CDEFS_H*/

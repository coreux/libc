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

#ifndef UX_CDEFS_H_
# define UX_CDEFS_H_                   1

# if defined(__cplusplus)
#  define UX_BEGIN_DECLS_              extern "C" {
#  define UX_END_DECLS_                }
# else
#  define UX_BEGIN_DECLS_
#  define UX_END_DECLS_
# endif

# define UX_CONCAT_(a, b)              a ## b
# define UX_STRING_(a)                 #a

# if defined(__GNUC__)
#  define UX_WEAK_                     __attribute__((weak))
#  if defined(__APPLE__) || defined(_WIN32)
#   define UX_SUF_(name, suffix)       __asm("_" UX_STRING_(name) suffix)
#  else
#   define UX_SUF_(name, suffix)       __asm(UX_STRING_(name) suffix)
#  endif
# else
#  define UX_WEAK_
#  define UX_SUF_(name, suffix)
# endif

# define UX_SUFFIX_UX03_               "$UX$2003"
# define UX_SUFFIX_PRIVATE_            "$UX$private"

# define UX_SYM03_(name)               UX_SUF_(name, UX_SUFFIX_UX03_)
# define UX_PRIVATE_(name)             UX_SUF_(name, UX_SUFFIX_PRIVATE_)

#endif /*!UX_CDEFS_H_*/

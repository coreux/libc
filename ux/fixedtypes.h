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

#ifndef UX_FIXEDTYPES_H_
# define UX_FIXEDTYPES_H_              1

# if defined(__i386__) || defined(__x86_64__) || defined(_M_IX86) || defined(_M_AMD64)

#  define UX_INT8_                     signed char
#  define UX_UINT8_                    unsigned char
#  define UX_INT16_                    signed short
#  define UX_UINT16_                   unsigned short
#  define UX_INT32_                    signed int
#  define UX_UINT32_                   unsigned int
#  define UX_INT64_                    signed long long
#  define UX_UINT64_                   unsigned long long

# else

#  error Unsupported host architecture

# endif

#endif /*!UX_FIXEDTYPES_H_*/

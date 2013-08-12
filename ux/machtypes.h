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

#ifndef __UX_MACHTYPES_H
# define __UX_MACHTYPES_H              1

# if defined(__x86_64__) || defined(_M_AMD64)
#  include <ux/x86-64/types.h>
# elif defined(__i86__) || defined(__i186__) || defined(__i286__) || defined(_M_I86) || defined(_M_I186) || defined(_M_I286)
#  include <ux/i86/types.h>
# elif defined(__i386__) || defined(_M_IX86)
#  include <ux/x86/types.h>
# else
#  error Unsupported host architecture
# endif

#endif /*!__UX_FIXEDTYPES_H*/

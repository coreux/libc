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

#ifndef UX_SIZE_H_
# define UX_SIZE_H_                    1

/* size_t: Unsigned integer type of the result of the sizeof operator */
# ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ size_t;
# else
typedef unsigned long size_t;
# endif

#endif /*!UX_SYS_TYPES_H_*/


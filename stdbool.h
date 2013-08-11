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
http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdbool.h.html
*/

#ifndef UX_STDBOOL_H_
# define UX_STDBOOL_H_                 1

# if __STDC_VERSION__ >= 199901L
#  define bool                         _Bool
# else
#  define bool                         int
# endif

# define false                         0
# define true                          1
# define __bool_true_false_are_defined 1

#endif /*!UX_STDBOOL_H_*/

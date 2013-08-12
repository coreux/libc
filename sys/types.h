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

http://pubs.opengroup.org/onlinepubs/009695399/basedefs/sys/types.h.html

*/

#ifndef __UX_SYS_TYPES_H
# define __UX_SYS_TYPES_H              1

/* Determine architecture-specific types */
# include <ux/machtypes.h>

/* Determine kernel-specific types */
# if defined(__APPLE__)
#  include <ux/darwin/types.h>
# elif defined(__linux__)
#  include <ux/linux/types.h>
# elif defined(__sun__) && defined(__svr4__)
#  include <ux/solaris/types.h>
# elif defined(_MINIX)
#  include <ux/minix/types.h>
# elif defined(__BEOS__) || defined(__HAIKU__)
#  include <ux/beos/types.h>
# elif defined(__FreeBSD__)
#  include <ux/freebsd/types.h>
# elif defined(__OpenBSD__)
#  include <ux/openbsd/types.h>
# elif defined(__NetBSD__)
#  include <ux/netbsd/types.h>
# elif defined(__QNXNTO__)
#  include <ux/neutrino/types.h>
# elif defined(__CYGWIN__)
#  include <ux/cygwin/types.h>
# elif defined(__INTERIX) || defined(__OPENNT)
#  include <ux/interix/types.h>
# elif (defined(__WIN32__) || defined(__WIN64__)|| defined(_WIN32) || defined(_WIN64)) && !defined(_VC_NODEFAULTLIB)
#  include <ux/msvcrt/types.h>
# else
#  error Unsupported host kernel
# endif

/* size_t */
# include <ux/sizedef.h>
/* clock_t, clockid_t, time_t, timer_t */
# include <ux/timedef.h>

/* ssize_t: Used for a count of bytes or error indication */
typedef __UX_SSIZE ssize_t;

#endif /*!__UX_SYS_TYPES_H*/


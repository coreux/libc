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

#ifndef __UX_MINIX_TYPES_H
# define __UX_MINIX_TYPES_H            1

# if !defined(_MINIX)
#  error Compilation of this file is only supported on Minix
# endif

# include <ux/machtypes.h>

/* blkcnt_t: Used for file block counts */
typedef __UX_INT32 blkcnt_t;

/* blksize_t: Used for block sizes */
typedef long blksize_t;

/* dev_t: Used for device IDs */
typedef short dev_t;

/* fsblkcnt_t: Used for filesystem block counts */
typedef __UX_UINT32 fsblkcnt_t;

/* fsfilcnt_t: Used for filesystem file counts */
typedef __UX_UINT32 fsfilcnt_t;

/* gid_t: Used for group IDs */
typedef char gid_t;

/* id_t: Used as a general identifier; can be used to contain at least a
 *   pid_t, uid_t or gid_t. */
typedef int id_t;

/* ino_t: Used for file serial numbers */
typedef unsigned long ino_t;

/* key_t: Used for XSI interprocess communication */
typedef __UX_INT32 key_t;

/* mode_t: Used for some file attributes */
typedef unsigned short mode_t;

/* nlink_t: Used for link counts */
typedef short nlink_t;

/* off_t: Used for file sizes */
typedef long off_t;

/* pid_t: Used for process IDs and process group IDs */
typedef int pid_t;

/* suseconds_t: Used for time in microseconds */
typedef long suseconds_t;

/* uid_t: Used for user IDs */
typedef short uid_t;

/* useconds_t: Used for for time in microseconds */
typedef unsigned long useconds_t;

#endif /*!__UX_MINIX_TYPES_H*/

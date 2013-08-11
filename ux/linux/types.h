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

#ifndef UX_LINUX_TYPES_H_
# define UX_LINUX_TYPES_H_              1

# if !defined(__linux__)
#  error Compilation of this file is only supported on Linux
# endif

# include <ux/machtypes.h>

/* blkcnt_t: Used for file block counts */
typedef UX_INT64_ blkcnt_t;

/* blksize_t: Used for block sizes */
typedef long blksize_t;

/* dev_t: Used for device IDs */
typedef UX_UINT64_ dev_t;

/* fsblkcnt_t: Used for filesystem block counts */
typedef UX_UINT64_ fsblkcnt_t;

/* fsfilcnt_t: Used for filesystem file counts */
typedef UX_UINT64_ fsfilcnt_t;

/* gid_t: Used for group IDs */
typedef UX_UINT32_ gid_t;

/* id_t: Used as a general identifier; can be used to contain at least a
 *   pid_t, uid_t or gid_t. */
typedef UX_INT32_ id_t;

/* ino_t: Used for file serial numbers */
typedef unsigned long ino_t;

/* key_t: Used for XSI interprocess communication */
typedef UX_INT32_ key_t;

/* mode_t: Used for some file attributes */
typedef UX_UINT32_ mode_t;

/* nlink_t: Used for link counts */
typedef int nlink_t;

/* off_t: Used for file sizes */
typedef UX_INT64_ off_t;

/* pid_t: Used for process IDs and process group IDs */
typedef UX_INT32_ pid_t;

/* suseconds_t: Used for time in microseconds */
typedef UX_INT32_ suseconds_t;

/* uid_t: Used for user IDs */
typedef UX_UINT32_ uid_t;

/* useconds_t: Used for for time in microseconds */
typedef UX_UINT32_ useconds_t;

#endif /*!UX_LINUX_TYPES_H_*/

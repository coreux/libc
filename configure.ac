## Copyright 2013 Mo McRoberts.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.

AC_INIT([libc],[master],[https://github.com/coreux/libc/issues],,[https://github.com/coreux/libc])
AC_CONFIG_AUX_DIR([.])
AC_CONFIG_MACRO_DIR([.])
AM_INIT_AUTOMAKE([foreign])
AM_MAINTAINER_MODE
BT_PROG_XCODE
AC_PROG_CC
AC_PROG_CC_C99
BT_PROG_CC_WARN
BT_ENABLE_XSI
AC_CONFIG_HEADER([config.h])
LT_INIT

AC_ARG_WITH([ux],[AS_HELP_STRING([--with-ux=PREFIX],[Specify UX installation prefix])],[ux_prefix="$withval"],[ux_prefix="yes"])
if test x"$ux_prefix" = x"no" ; then
	true
elif test x"$ux_prefix" = x"yes" ; then
	old_prefix="$prefix"
	old_exec_prefix="$exec_prefix"
	if test x"$prefix" = x"NONE" ; then
		prefix="$ac_default_prefix"
	fi
	if test x"$exec_prefix" = x"NONE" ; then
		exec_prefix="$prefix"
	fi
	UX_CPPFLAGS="$UX_CPPFLAGS -I`eval echo $includedir`"
	prefix="$old_prefix"
	exec_prefix="$old_exec_prefix"
else
	UX_CPPFLAGS="$UX_CPPFLAGS -I$ux_prefix/include"
fi
AC_SUBST([UX_CPPFLAGS])
old_CPPFLAGS="$CPPFLAGS"
CPPFLAGS="$UX_CPPFLAGS"
AC_CHECK_HEADER([ux/cdefs.h],,[AC_MSG_ERROR([cannot locate required ux/cdefs.h; ensure the UX include package is installed])],[-])
CPPFLAGS="$old_CPPFLAGS"

# Override docdir
if test x"$docdir" = x'${datarootdir}/doc/${PACKAGE_TARNAME}' ; then
	docdir='${datarootdir}/doc/ux'
fi

AC_CONFIG_SUBDIRS([liberrno])
AC_CONFIG_SUBDIRS([libstring])

AC_CONFIG_FILES([
Makefile
sys/Makefile
t/Makefile
])

AC_OUTPUT

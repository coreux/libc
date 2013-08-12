dnl Copyright 2013 Mo McRoberts.
dnl
dnl  Licensed under the Apache License, Version 2.0 (the "License");
dnl  you may not use this file except in compliance with the License.
dnl  You may obtain a copy of the License at
dnl
dnl      http://www.apache.org/licenses/LICENSE-2.0
dnl
dnl  Unless required by applicable law or agreed to in writing, software
dnl  distributed under the License is distributed on an "AS IS" BASIS,
dnl  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
dnl  See the License for the specific language governing permissions and
dnl  limitations under the License.
dnl
m4_pattern_forbid([^BT_])dnl
m4_pattern_forbid([^_BT_])dnl
AC_DEFUN([BT_PROG_XCODE],[
AC_REQUIRE([AC_CANONICAL_HOST])
case "$build_os" in
	darwin*)
		AC_CHECK_PROG([XCRUN],[xcrun],[xcrun])
		;;
esac
if ! test x"$XCRUN" = x"" ; then
	AC_MSG_CHECKING([for current Xcode developer tools path])
	XCDEVTOOLS=`xcode-select --print-path 2>/dev/null`
	if test x"$XCDEVTOOLS" = x"" ; then
		AC_MSG_RESULT([none])
	else
		AC_MSG_RESULT([$XCDEVTOOLS])
		AC_MSG_CHECKING([which Xcode SDK to use])
		AC_ARG_WITH([sdk],[
			AS_HELP_STRING([--with-sdk=SDKNAME],[specify name or path of Xcode SDK to use])
			],[XCSDK="$withval"],[
			case "$host" in
				arm*-apple-darwin*)
					XCSDK=iphoneos
					;;
				x86_64-apple-darwin*|i?86-apple-darwin*)
					XCSDK=macosx
					;;
			esac])
		if test x"$XCSDK" = x"" || test x"$XCSDK" = x"no" ; then
			XCSDK=""
			AC_MSG_RESULT([none])
		else
			AC_MSG_RESULT([$XCSDK])
		fi
	fi
	if ! test x"$XCSDK" = x"" ; then
		test -z "$CC" && CC="$XCRUN -sdk $XCSDK clang"
		test -z "$CPP" && CPP="$XCRUN -sdk $XCSDK clang -E"
		test -z "$CXX" && CXX="$XCRUN -sdk $XCSDK clang -x c++"
		test -z "$CXXCPP" && CXXCPP="$XCRUN -sdk $XCSDK clang -x c++ -E"
		test -z "$NM" && NM="$XCRUN -sdk $XCSDK nm"
		test -z "$AR" && AR="$XCRUN -sdk $XCSDK ar"
		test -z "$RANLIB" && RANLIB="$XCRUN -sdk $XCSDK ranlib"
		test -z "$AS" && AS="$XCRUN -sdk $XCSDK as"
	fi
fi
])
dnl Copyright 2012-2013 Mo McRoberts.
dnl
dnl  Licensed under the Apache License, Version 2.0 (the "License");
dnl  you may not use this file except in compliance with the License.
dnl  You may obtain a copy of the License at
dnl
dnl      http://www.apache.org/licenses/LICENSE-2.0
dnl
dnl  Unless required by applicable law or agreed to in writing, software
dnl  distributed under the License is distributed on an "AS IS" BASIS,
dnl  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
dnl  See the License for the specific language governing permissions and
dnl  limitations under the License.
dnl
m4_pattern_forbid([^BT_])dnl
m4_pattern_forbid([^_BT_])dnl
AC_DEFUN([BT_PROG_CC_WARN],[
AC_MSG_CHECKING([whether to enable compiler warnings])
if test x"$GCC" = x"yes" ; then
   AC_MSG_RESULT([yes, -W -Wall])
   AM_CPPFLAGS="$AM_CPPFLAGS -W -Wall"
else
   AC_MSG_RESULT([no])
fi
AC_SUBST([AM_CPPFLAGS])
])dnl
dnl Copyright 2013 Mo McRoberts.
dnl
dnl  Licensed under the Apache License, Version 2.0 (the "License");
dnl  you may not use this file except in compliance with the License.
dnl  You may obtain a copy of the License at
dnl
dnl      http://www.apache.org/licenses/LICENSE-2.0
dnl
dnl  Unless required by applicable law or agreed to in writing, software
dnl  distributed under the License is distributed on an "AS IS" BASIS,
dnl  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
dnl  See the License for the specific language governing permissions and
dnl  limitations under the License.
dnl
m4_pattern_forbid([^BT_])dnl
m4_pattern_forbid([^_BT_])dnl
dnl - BT_ENABLE_POSIX([version=200112L])
AC_DEFUN([BT_ENABLE_POSIX],[
AC_DEFINE_UNQUOTED([_POSIX_C_SOURCE],m4_ifval([$1],[$1],[200112L]),[This application requires POSIX facilities])
])
dnl - BT_ENABLE_XSI([version=600])
AC_DEFUN([BT_ENABLE_XSI],[
AC_DEFINE_UNQUOTED([_XOPEN_SOURCE],m4_ifval([$1],[$1],[600]),[This application requires the X/Open System Interfaces POSIX extension])
])
dnl Copyright 2012-2013 Mo McRoberts.
dnl
dnl  Licensed under the Apache License, Version 2.0 (the "License");
dnl  you may not use this file except in compliance with the License.
dnl  You may obtain a copy of the License at
dnl
dnl      http://www.apache.org/licenses/LICENSE-2.0
dnl
dnl  Unless required by applicable law or agreed to in writing, software
dnl  distributed under the License is distributed on an "AS IS" BASIS,
dnl  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
dnl  See the License for the specific language governing permissions and
dnl  limitations under the License.
dnl
m4_pattern_forbid([^BT_])dnl
m4_pattern_forbid([^_BT_])dnl
AC_DEFUN([BT_BUILD_DOCS],[
AC_ARG_ENABLE([docs],[AS_HELP_STRING([--disable-docs],[disable re-building documentation (default=auto)])],[build_docs=$enableval],[build_docs=auto])
XML2MAN=true
XML2HTML=true
if test x"$build_docs" = x"yes" || test x"$build_docs" = x"auto" ; then
   AC_CHECK_PROGS([XSLTPROC],[xsltproc],[false])
   if test x"$XSLTPROC" = x"false" ; then
   	  if test x"$build_docs" = x"yes" ; then
	  	 AC_MSG_ERROR([re-building documentation was requested, but the xsltproc utility cannot be found])
	  fi
	  build_docs=no
   else
      build_docs=yes
	  XML2MAN='${XSLTPROC} -nonet \
		-param man.charmap.use.subset 0 \
		-param make.year.ranges 1 \
		-param make.single.year.ranges 1 \
		-param man.authors.section.enabled 0 \
		-param man.copyright.section.enabled 0 \
		http://docbook.sourceforge.net/release/xsl-ns/current/manpages/docbook.xsl'
	  XML2HTML='${XSLTPROC} -nonet \
	    -param docbook.css.link 0 \
		-param generate.css.header 1 \
		-param funcsynopsis.style ansi \
	    http://docbook.sourceforge.net/release/xsl-ns/current/xhtml5/docbook.xsl'
   fi
else
   build_docs=no
fi
AC_MSG_CHECKING([whether to re-build documentation if needed])
AC_MSG_RESULT([$build_docs])
AC_SUBST([XML2MAN])
AC_SUBST([XML2HTML])
])dnl

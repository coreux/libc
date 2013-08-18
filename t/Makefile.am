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
##

AM_CPPFLAGS = @AM_CPPFLAGS@ @UX_CPPFLAGS@ -I${top_builddir} -I${top_srcdir}
LDADD = libutils.a

noinst_LIBRARIES = libutils.a

libutils_a_SOURCES = utils.h utils.c
libutils_a_CPPFLAGS = @AM_CPPFLAGS@

noinst_PROGRAMS = \
	stdarg-1 \
	stdbool-1 \
	stddef-1 \
	stdint-1 \
	types-1

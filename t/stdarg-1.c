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

#include "../stdarg.h"

#include "utils.h"

static int
count(const char *str)
{
	int c;
	
	for(c = 0; *str; str++, c++);
	return c;
}

static int
stdargtest(int n, ...)
{
	int total;
	va_list ap;
	const char *arg;
	
	va_start(ap, n);
	for(total = 0; n; n--)
	{
		arg = va_arg(ap, const char *);
		total += count(arg);
	}
	return total;
}

int
main(int argc, char **argv)
{
	int len;
	
	(void) argc;
	(void) argv;

	len = stdargtest(4, "abcdef", "12345", "the quick brown fox", "lazy dog");
	if(len != 38)
	{
		putint(len);
		return 1;
	}
	return 0;
}

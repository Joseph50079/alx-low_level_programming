#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	va_start(arg, n);

	for(i = 0; i < n; i++)
	{
		int x = va_arg(arg, int);
		if (separator != NULL)
		{
			printf("%d%s", x, separator);
		}
	}
	putchar('\n');
	va_end(arg);
}

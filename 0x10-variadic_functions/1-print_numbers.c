#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function prints argument of int value
 * @separator: separates the values
 * @n: number of arguments printable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(arg, int);

		if (separator != NULL)
		{
			printf("%d", x);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%d", x);
		}
	}
	putchar('\n');
	va_end(arg);
}

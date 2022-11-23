#include "variadic_functions.h"

/**
 * print_strings - prints arguments of strings value
 * @separator: strings separator
 * @n: number of printable stings arguments
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(arg, char *);

		if (!separator)
		{
			printf("%s", x);
		}
		else
		{
			if (x == NULL)
			{
				x = "(nil)";
			}
			printf("%s", x);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(arg);
	putchar('\n');

}

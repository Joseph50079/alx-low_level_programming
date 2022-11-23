#include "variadic_function.h"




void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n == 0)
	{
		return;
	}
	va_start(arg, n);
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
	_putchar('\n');
	va_end(arg);
}

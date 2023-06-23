#include "variadic_functions.h"

/**
 * print_all - print format to stdout
 * @format: string format
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = strlen(format);
	char *sep = ", ";
	va_list arg;

	va_start(arg, format);

	while (format && format[i])
	{
		if (i == (n - 1))
		{
			sep = "";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(arg, char), sep);
				break;
			case 'i':
				printf("%i%s", va_arg(arg, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(arg, float), sep);
				break;
			case 's':
				char * x = va_arg(arg, char *);
				if (x == NULL)
				{
					x = "(nil)";
				}
				printf("%s%s", va_arg(arg, char*), sep);
				break;
		}
		i++;
	}
	va_end(arg);
	putchar('\n');
}

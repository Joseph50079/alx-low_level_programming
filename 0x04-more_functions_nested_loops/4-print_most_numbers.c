#include "main.h"

/**
 * print_most_numbers - function
 * description - print number 1-9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int n, a, b;

	n = '0';

	for (n = '0'; n <= '9'; n++)
	{
	a = '2';

	b = '4';

	if
		((n != a) && (n != b))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}

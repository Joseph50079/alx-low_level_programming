#include "main.h"

/**
 * more_numbers - function print numbers in line
 * description - print numbers in line
 */

void more_numbers(void)
{
	int l = 0, n;

	for (l = 0; l <= 10; l++)
		{
		n = '0';

		for (n = '0'; n <= 14; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
	
		_putchar(l);
	}

}

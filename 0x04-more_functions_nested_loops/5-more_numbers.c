#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function print numbers in line
 * description - print numbers in line
 */

void more_numbers(void)
{
	int l, n;

	for (l = 0; l < 10; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + n);
			}


			_putchar((n % 10) + '0');
		}
		_putchar('\n');

	}

}

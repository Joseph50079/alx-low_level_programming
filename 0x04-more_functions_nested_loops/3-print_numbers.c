#include "main.h"
#include <stdio.h>

/**
 * print_numbers - funtion prototype print numbers 0 to 9
 * description - print numbers
 */

void print_numbers(void)
{
	long i;

	
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	
	_putchar('\n');
	
}

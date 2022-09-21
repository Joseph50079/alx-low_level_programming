#include "main.h"
#include <stdio.h>


/**
 * print_line - funtion to print line
 * @n: n will print a line
 */
void print_line(int n)
{
	int n;
	int j = '_';

	if (n > 0)

	{
		_putchar((j) * n);
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n')
	}
}

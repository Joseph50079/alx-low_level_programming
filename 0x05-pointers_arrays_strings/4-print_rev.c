#include "main.h"
#include <stdio.h>
/**
 * print_rev - function print in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int c;

	c = '\0';

	while (s[c] != '\0')
	{
		if (s[c] <= '\n')
		{
		putchar(s[c]);
		}
		++c;
	}
	putchar('\n');
}

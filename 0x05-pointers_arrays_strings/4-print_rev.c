#include "main.h"
#include <stdio.h>
/**
 * print_rev - function print in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		for (s[c] < '\0'; --c;)
		{
		putchar(s[c]);
		}	
	}
	putchar('\n');
}

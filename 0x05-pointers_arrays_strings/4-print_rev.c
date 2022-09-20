#include "main.h"
#include <stdio.h>
/**
 * print_rev - function print in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int c, n = 0;


	for (c = 0; s[c] != '\0'; c++)
	{
		n++;
	}
	for (c = n - 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}

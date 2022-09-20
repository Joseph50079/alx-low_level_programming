#include "main.h"

/**
 * _puts - function prints a string and a new line
 * @str: parameter
 */

void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
	putchar(str[c]);
	}
	c++;
}

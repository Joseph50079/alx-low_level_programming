#include <stdio.h>
#include "main.h"

/**
 * *_memset - sets char to a memory
 * @s: source / memory
 * @b: char
 * @n: determines how many space to be taken in the memory
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	s[i] = '\0';

	return (s);
}

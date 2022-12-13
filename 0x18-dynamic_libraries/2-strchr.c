#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function
 * @s: string
 * @c: accepted char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}

	s++;
	}

	return (NULL);
}

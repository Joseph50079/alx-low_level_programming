#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - function cat with src num
 * @dest: oringin string
 * @src: src string
 *
 * @n: integer for src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, num;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	num = n;
	for (num = 0; num != '\0'; num++)
	{
		dest[i] = n;
	}

	dest[i] = '\0';

	return (dest);
}

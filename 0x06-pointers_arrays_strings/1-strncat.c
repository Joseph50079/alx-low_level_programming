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
	int i, j, num = 0;

	for (i = 0; dest[i] != '\0'; i++)

		dest[i] = src[0];

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	for (num = 0; num != '\0'; num++)
	{
		src[n] = num;

	}

	dest[i] = '\0';

	return (dest);
}

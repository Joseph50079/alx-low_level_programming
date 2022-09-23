#include "main.h"
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
	int i, j, n;

	for (i = 0; dest[i] != '\0'; i++);

		dest[i] = src[0];

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	n = strlen(src);

	dest[i] = '\0';

	return (dest);
}

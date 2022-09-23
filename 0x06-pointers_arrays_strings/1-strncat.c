#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - function cat with src num
 * @dest: oringin string
 * @src: src string
 * @n: integer for src
 * description - concatenate with n byte
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}


	dest[i] = '\0';

	return (dest);
}

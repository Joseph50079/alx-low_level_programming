#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strncat - function concatenate with int num
 * @dest: oringin string
 * @src: src string
 * @n: integer for src
 * description - concatenate with n byte
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		dest[i];

	for (j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

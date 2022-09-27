#include <stdio.h>
#include "main.h"


/**
 * *_memcpy - copies src to the dest memory determined by n
 * @dest: destination
 * @src: source
 * @n: number of source to be copied
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}



	return (dest);
}

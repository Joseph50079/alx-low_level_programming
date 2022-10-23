#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function calloc
 * @nmemb: number of memory block
 * @size: size of memory
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void *ptr;

	i = nmemb;
	j = size;

	if (i == 0 || j == 0)
	{
		return (NULL);
	}
	ptr = malloc(i * j);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, i * j);
	return (ptr);
}

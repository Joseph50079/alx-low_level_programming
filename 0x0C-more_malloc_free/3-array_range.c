#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function
 * @min: minimum
 * @max: maximum
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int mi, ma;
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	mi = min;
	ma = max;
	ptr = malloc(sizeof(int) * ma);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ma && mi < ma; i++)
	{
	
		ptr[i] = mi;
	
		mi++;
	}
	return (ptr);
}

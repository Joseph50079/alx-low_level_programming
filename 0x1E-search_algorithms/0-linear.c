#include "search_algos.h"

/**
 * linear_search - performs linear search algoritnm
 * @array: array of value
 * @size: size of array
 * @value: value to search for
 * Return: index or -1 if failed
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || !value)
	{
		return (-1);
	}
	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}

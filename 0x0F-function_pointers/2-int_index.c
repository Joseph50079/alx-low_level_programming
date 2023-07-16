#include "function_pointers.h"

/**
 * int_index - return's index of a compared arrays of integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function that compares
 * Return: index if succesful else -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		n = (*cmp)(array[i]);
		if (n)
		{
			return (i);
		}
	}

	return (-1);
}

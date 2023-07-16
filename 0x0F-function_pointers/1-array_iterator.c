#include "function_pointers.h"

/**
 * array_iterator - iterat's an arrays and execute with function paramter
 * @array: array
 * @size: size of an array
 * @action: function pointer
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

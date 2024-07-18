#include "search_algos.h"

/**
 * binary_search - performaes binary search and returns the index of the target value
 * @array: array of integer values
 * @size: size of array
 * @value: Target value
 * Return: -1 if failed or index value if found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i, *ptr, result;
	int index = (int) size / 2;


	if (!value || !array || size == 0)
		return (-1);

	printf("Searching in array: ");
	i = 0;
	while (i < (int) size)
	{
		printf("%d", array[i]);
		if (i < (int) size - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
	if (array[index] == value)
	{
		return (index);
	}
	else if (value < array[index])
	{
		return advanced_binary(array, index, value);
	}
	else
	{
		ptr = &array[index + 1];
		result = advanced_binary(ptr,  size - index - 1, value);
		if (result != -1)
			return result + index + 1;
	}
	return (-1);
}

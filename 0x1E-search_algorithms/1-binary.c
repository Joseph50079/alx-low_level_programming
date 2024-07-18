#include "search_algos.h"

/**
 * binary_search - performs binary search and returns the index value
 * @array: array of integer values
 * @size: size of array
 * @value: Target value
 * Return: -1 if failed or index value if found
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = (int)size - 1;
	int m;


	if (!value || !array || size == 0)
		return (-1);

	while (left <= right)
	{
		m = (right + left) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i <= right - 1)
			{
				printf(", ");
			}
		}
		putchar('\n');

		if (value == array[m])
			return (m);
		else if (value < array[m])
		{
			right = m - 1;
		}
		else
		{
			left = m + 1;
		}

	}
	return (-1);
}

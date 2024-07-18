#include "search_algos.h"

/**
 * binary_search - performaes binary search and returns the index of the target value
 * @array: array of integer values
 * @size: size of array
 * @value: Target value
 * Return: -1 if failed or index value if found
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int index = 0;
	int len = (int) size - 1;
	int m;


	if (!value || !array || size == 0)
		return (-1);

	while (index <= len)
	{
		m = (len + index) / 2;
		printf("Searching in array: ");

		for (i = index; i <= len; i++)
		{
			printf("%d", i);
			if (i <= len - 1)
			printf(", ");
		}
		putchar('\n');

		if (value == array[m])
			return (m);
		else if (value < array[m])
		{
			len = m - 1;
		}
		else
			index = m + 1;

	}
	return (-1);
}

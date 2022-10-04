#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function create an array
 * @size: size of an array
 * @c: character
 * Return: t
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;


	t = malloc(size * sizeof(char));

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		{
		t[i] = c;
		}

	if (size == 0)
		{
		return (NULL);
		}
	return (t);
}

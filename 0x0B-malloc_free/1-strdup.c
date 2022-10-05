#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function to duplicate string
 * @str: string
 * Return: t
 */

char *_strdup(char *str)
{
	char *t;

	if (str == NULL)
	{
	return (NULL);
	}

	int j, i = strlen(str) + 1;

	t = malloc(i * sizeof(*t));

	if (t == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		t[j] += str[j];
	}
	return (t);
}

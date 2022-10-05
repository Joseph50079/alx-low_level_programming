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
	int j, i = strlen(str);

	if (str == NULL)
	{
	return (NULL);
	}

	t = malloc(i * sizeof(char));

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

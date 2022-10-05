#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - function concat string
 * @s1: string 1
 * @S@: string 2
 * Return: t
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *t;
	int j, k, num;

	for (j = 0; s1[j] != '\0'; j++)
	;
	for (k = 0; s2[k] != '\0'; k++, j++)
	{
	s1[j] = s2[k];
	}
	s1[j] = '\0';

	i = strlen(s1) + strlen(s2) + 1;
	t = malloc(sizeof(char) * i);
	if (t == NULL)
	{
	return (NULL);
	}

	for (num = 0; num < i; num++)
	{
	t[num] += s1[num];
	}

	return (t);
}

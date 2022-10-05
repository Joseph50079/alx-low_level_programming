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
	int i = strlen(s1) + strlen(s2);
	char *t;
	int j, k, num;

	t = malloc(sizeof(char) * i);
	if (t == NULL)
	{
	return (NULL);
	}

	for (j = 0; j != '\0'; j++)
		s1[j];
	for (k = 0; k != '\0'; k++, j++);
	{
	s1[j] = s2[k];
	}
	s1[j] = '\0';
    
	for (num = 0; num < s1; num++)
	{
	t[num] = s1;
	}

	return (t);
}

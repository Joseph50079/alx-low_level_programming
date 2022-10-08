#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function concatenate two string into memory
 * @s1: string 1
 * @s2: string 2
 * @n: number set to s2
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, c1 = strlen(s1);
	unsigned int sum = strlen(s1) + strlen(s2) + 1;
	char *ptr;

	ptr = malloc(sizeof(char) * sum);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1 && s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < sum && s2[j] != '\0' && j < n; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[sum - 1] = '\0';

	return (ptr);
}

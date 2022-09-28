#include <stdio.h>

#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: pointer
  * @accept: pointer
  *
  * Return: the address of the first occurrence character in the string
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);

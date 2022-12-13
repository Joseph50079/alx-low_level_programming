#include <stdio.h>
#include "main.h"

/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: the length of a string
  */
unsigned int __strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
  * _strspn - gets the length of a prefix substring.
  * @s: pointer
  * @accept: poniter
  * Return: length of matched characters
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int s_len = __strlen(s);
	unsigned int accept_len = __strlen(accept);

	unsigned int i;
	unsigned int j;
	unsigned int match;

	for (i = 0; i < s_len; i++)
	{
		match = 0;

		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				match = 1;
				break;
			}
		}

		if (!match)
		{
			break;
		}
		else
		{
			count++;
		}
	}

	return (count);
}

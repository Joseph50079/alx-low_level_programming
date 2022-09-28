#include <stdio.h>
#include "main.h"

/**
 * *_strstr - function get the link of a prefixed substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
	{
		return (haystack);
	}
		haystack++;
	}
		if (*needle != *haystack)
		{
		return (NULL);
		}
		else
			return (haystack);
}

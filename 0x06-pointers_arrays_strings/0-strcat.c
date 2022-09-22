#include "main.h"
#include <stdio.h>
/**
 * _strcat - function concatinate
 * @dest: dest main string
 * @src: last string
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	while (src[i] == '\0')
		i++;

	if (dest[i] != '\0' && src[i] == '\0')
	dest[i] = dest[i] + src[i];

	return (dest);

}

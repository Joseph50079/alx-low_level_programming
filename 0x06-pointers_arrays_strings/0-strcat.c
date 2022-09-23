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
	int i = 0, n;

	while (*(dest + i) != '\0')
		i++;

	for (n = 0; *(src + n) != '\0'; n++, i++)
	{

		*(dest + i) = *(src + n);
	}
		dest[i] = '\0';


	return (dest);

}

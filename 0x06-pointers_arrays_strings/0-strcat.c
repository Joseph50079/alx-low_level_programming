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
	if (dest != '\n')
		dest =+ src;
	return (dest);

}

#include "main.h"
#include <stdio.h>

/**
 * _strlen - function returns length of string
 * @s: parameter
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0') i++;
	return (i);


}

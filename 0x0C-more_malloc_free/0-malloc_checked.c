#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function check malloc
 * @b: integer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

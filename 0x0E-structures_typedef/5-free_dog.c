#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: parameter
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}

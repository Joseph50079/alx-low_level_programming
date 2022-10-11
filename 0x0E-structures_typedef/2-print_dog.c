#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funtion print struct
 * @d: struct parameter
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);

	if (!(d->age) || d->owner == NULL)
	{
		 printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
}


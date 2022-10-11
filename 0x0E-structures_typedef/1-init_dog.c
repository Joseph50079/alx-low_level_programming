#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function initializing structure
 * @d: struct dog local variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function initializing structure
 * @d: struct dog local variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = (struct dog *)malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}

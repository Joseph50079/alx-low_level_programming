#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - create new dog
 * @name: dog name
 *
 * @age: doge age
 * @owner: dog owner
 * Return: ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}

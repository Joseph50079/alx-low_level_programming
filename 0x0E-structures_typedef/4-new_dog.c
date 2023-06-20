#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcopy - copy from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{

	int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->name = malloc(strlen(name) + 1 * sizeof(char));
	if (ptr->name == NULL)
	{
		return (NULL);
	}

	ptr->owner = malloc(strlen(owner) + 1 * sizeof(char));
	if (ptr->owner == NULL)
	{
		return (NULL);
	}

	ptr->name = _strcopy(ptr->name, name);
	ptr->owner = _strcopy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}

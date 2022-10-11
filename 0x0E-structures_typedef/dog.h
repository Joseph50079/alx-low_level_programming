#ifndef DOG_H
#define DOG_H

/**
 * struct dog - funtion dog structure
 * @name: name of dog
 * @age: dog age
 */
struct dog
{
	char *name;
	float age;

	/**
	 * @owner: dog owner
	 * Description: for longer struct
	 */
	char *owner;
};


#endif

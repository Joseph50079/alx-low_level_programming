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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif

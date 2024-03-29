#include "hash_tables.h"


/**
 * hash_table_create - creates hash table
 * @size: size of array if hash t
 * Return: hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (hash == NULL)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}
	return (hash);
}

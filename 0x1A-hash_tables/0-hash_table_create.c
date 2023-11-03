#include "hash_tables.h"


/**
 * hash_table_create - creates hash table
 * @size: size of array if hash t
 * Return: hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash->array = malloc(sizeof(hash_node_t) * size);

	if (hash->array == NULL)
	{
		return (NULL);
	}
	return (hash);
}

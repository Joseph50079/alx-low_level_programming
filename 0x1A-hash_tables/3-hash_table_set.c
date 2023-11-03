#include "hash_tables.h"

/**
 * hash_table_set - set hash table
 * @ht: hash table ptr
 * @key: hash key
 * @value: hash value
 * Return: 1 on success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	unsigned long int n, i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *ptr, *node = malloc(sizeof(hash_node_t));

	if (node == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	if (ht == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	for (n = i; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = value_copy;
			return (1);
		}
	}

	if (ht->array[i] != NULL)
	{	
		ptr = ht->array[i];
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = node;
		return (1);
	}
	else
	{
		ht->array[i] = node;

		return (1);
	}
}

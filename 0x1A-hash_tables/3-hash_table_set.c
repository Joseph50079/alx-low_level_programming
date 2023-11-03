#include "hash_tables.h"

/**
 *
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index(key, ht->size);
	hash_node_t *ptr, *node = malloc(size(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}

	if (ht == NULL)
	{
		return (0);
	}
	node->key = key;
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[i] != NULL)
	{
		ht->(array[i]->key) = key;
		ht->(array[i]->value) = strdup(value);
		ht->(array[i]->next) = NULL;
		return (1);
	}
	else
	{
		ptr = ht->array[i];
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
		
		return (1);
	}
}

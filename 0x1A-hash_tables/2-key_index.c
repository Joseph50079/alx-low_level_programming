#include "hash_tables.h"


/**
 * key_index - index of key/value of hash table
 * @key: key
 * @size: size of array
 * Return: index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - add more node
 * @head: head pointer
 * @str: string
 * Return: ptr
 */

list_t *add_node(list_t **head, const char *str)
{
	int n = strlen((char *)str);

	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}

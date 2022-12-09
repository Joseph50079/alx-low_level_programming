#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer
 * @index: index
 * Return: ptr
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = head;

	for (i = 0; i < index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}

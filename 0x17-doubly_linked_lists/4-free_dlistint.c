#include "lists.h"

/**
 * free_dlistint - function frees dlistint
 * @head: head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}
	head = NULL;
}

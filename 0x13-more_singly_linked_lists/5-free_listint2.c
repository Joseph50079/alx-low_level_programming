#include "lists.h"

/**
 * free_listint2 - free listint_t nodes
 * @head: head pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;
}

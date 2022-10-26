#include "lists.h"

/**
 * free_listint - frees int
 *
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	
}

#include "lists.h"

/**
 * free_listint - frees int
 *
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (head == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	ptr = NULL;
}

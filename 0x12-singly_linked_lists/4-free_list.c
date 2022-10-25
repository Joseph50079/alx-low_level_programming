#include "lists.h"

/**
 * free_list - frees node
 * @h: header address
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	if (head == NULL)
	{
		return;
	}
	head = ptr;
	while (ptr != NULL)
		{
			free(ptr);
			free(ptr->str);
			ptr = ptr->next;
		}
	ptr = NULL;
}

#include "lists.h"

/**
 * free_list - frees node
 * @head: header address
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	if (head == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
	ptr = NULL;
}

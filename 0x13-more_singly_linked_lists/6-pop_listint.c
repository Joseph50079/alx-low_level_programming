#include "lists.h"

/**
 * pop_listint - delete head of node
 * @head: head pionter
 * Return: i
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
	{
		(*head)->n = 0;
	}
	i = (*head)->n;
	ptr = *head;
	*head = ptr->next;
	return (i);
}

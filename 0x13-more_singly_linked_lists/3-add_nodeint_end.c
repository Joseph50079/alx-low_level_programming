#include "lists.h"

/**
 * *add_nodeint_end - add node to at the end
 * @head: head pointer
 * @n: node data int
 * Return: *head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}

	return (*head);
}

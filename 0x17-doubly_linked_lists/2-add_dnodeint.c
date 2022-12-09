#include "lists.h"

/**
 * add_dnodeint - function adds node
 * @head: head pointer
 * @n: dlistint data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = ptr;
	*head = temp;
	if (ptr != NULL)
		ptr->prev = temp;

	return (*head);
}

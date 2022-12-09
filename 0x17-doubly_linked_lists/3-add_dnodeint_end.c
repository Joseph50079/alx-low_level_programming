#include "lists.h"

/**
 * add_dnodeint_end - function add double linked node to end
 * @head: head pointer
 * @n: dlistint_t data
 * Return: *head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		*head = ptr;
	}
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	temp->n = n;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;

	return (temp);
}

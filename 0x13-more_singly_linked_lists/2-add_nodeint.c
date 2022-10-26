#include "lists.h"

/**
 * *add_nodeint - add node from the beginning
 * @head: head pointer
 * @n: data int of listint_t
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

#include "lists.h"

/**
 * sum_dlistint - sum all node data
 * @head: head pointer
 * Return: sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

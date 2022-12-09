#include "lists.h"

/**
 * insert_dnodeint_at_index - function add node at index
 * @idx: index where data (n) will be added
 * @h: head pointer
 * @n: data to add
 * Return: temp
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	if (ptr->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	temp->n = n;
	temp->prev = ptr;
	temp->next = ptr->next;
	ptr->next->prev = temp;
	ptr->next = temp;

	return (temp);
}

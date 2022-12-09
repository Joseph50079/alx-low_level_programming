#include "lists.h"

/**
 * dlistint_len - function count node length
 * @h: head pointer
 * Return: num
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}

	return (num);
}

#include "lists.h"

/**
 * print_dlistint - function print dlistint
 * @h: head
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}

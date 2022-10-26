#include "lists.h"

/**
 * print_listint - print node list
 * @h: head pointer
 * Return: n
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		n++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}

#include "lists.h"

/**
 * listint_len - list listint_t length
 * @h: head pointer
 * Return: n
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}

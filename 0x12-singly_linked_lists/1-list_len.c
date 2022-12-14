#include <stdio.h>
#include "lists.h"

/**
 * list_len - function list len of elements of struct
 * @h: head pointer
 * Return: n
 */

size_t list_len(const list_t *h)
{
	list_t *ptr;
	size_t n = 0;

	ptr = (list_t *)h;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}

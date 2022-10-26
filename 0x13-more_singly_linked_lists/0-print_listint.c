#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print node list from listint_t
 * @h: head pointer
 * Return: n
 * Description - Print_list function will print all node list in listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		n++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}

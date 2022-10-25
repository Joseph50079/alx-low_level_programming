#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * *add_node_end - add more node
 * @head: head pointer
 * @str: string
 * Return: ptr
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int n = strlen((char *)str);
	list_t *ptr = *head;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup((char *)str);
	temp->len = n;
	temp->next = NULL;
	if (ptr == NULL)
	{
		*head = temp;
	}

	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (ptr);
}

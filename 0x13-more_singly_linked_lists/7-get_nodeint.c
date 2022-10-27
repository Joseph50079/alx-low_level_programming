#include "lists.h"

/**
 * get_nodeint_at_index - get node data from index n
 * @head: head pointer
 * @index: index
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  listint_t *ptr, *n;
  unsigned int i;
  if (head == NULL)
  {
    return (NULL);
  }
  ptr = head;
  for (i = 0; i < index && ptr != NULL; i++)
    {
      ptr = ptr->next;
    }
  n = ptr;
  return (n);
}

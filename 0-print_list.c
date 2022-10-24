#include "lists.h"
#include <stdio.h>

/**
 * print_list - funtion print list and return element
 * @h: heah pointer
 * Return: count
 */

size_t print_list(const list_t *h)
{

  size_t count = 0;
  list_t *ptr;

  ptr = (list_t *)h;

  /**if (ptr->str == NULL)
  {
      ptr->len = 0;
      ptr->str = "(nil)";
  }*/

  while (ptr != NULL)
  {
    if (ptr->str == NULL)
    {
      ptr->len = 0;
      ptr->str = "(nil)";
    }
    count++;
    printf("[%i] %s\n", ptr->len, ptr->str);
    ptr = ptr->next;
  }
  return (count);
}

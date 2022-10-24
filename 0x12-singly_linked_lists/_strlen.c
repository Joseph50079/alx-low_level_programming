#include "lists.h"
#include <stdio.h>

/**
 * _strlen - function return length of string
 * @c: string
 * Return: len
 */

int _strlen(char *c)
{
  int i, len = 0;
  if (c == NULL)
  {
    exit(1);
  }
  for (i = 0; c != NULL; i++)
    {
      len++;
    }
  return (len);
}
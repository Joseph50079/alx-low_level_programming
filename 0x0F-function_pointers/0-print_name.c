#include "function_pointers.h"

/**
 * print_name - prints name given to function
 * @name: name given
 * @f: funtion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	(*f)(name);
}



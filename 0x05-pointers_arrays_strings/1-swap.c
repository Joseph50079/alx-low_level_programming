#include "main.h"
#include <stdio.h>

/**
 * swap_int - funtion swaps two inter
 * @a: function parameter
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

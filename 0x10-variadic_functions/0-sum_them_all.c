#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all parameter's argument
 * @n: argument count
 * ...: addiotional parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arg;

	va_start(arg, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);

	return (sum);
}

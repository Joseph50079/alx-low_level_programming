#include "python.h"

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b)
{
	int sum = 0;

	sum += a + b;
	return (sum);
}

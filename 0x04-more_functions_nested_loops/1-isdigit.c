#include "main.h"
/**
 * _isdigit - function
 * @c: return 1 if it's a digit
 * description - 1 if it is a digit
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

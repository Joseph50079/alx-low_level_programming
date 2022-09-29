#include "main.h"

/**
  * _pow_recursion - raised the
  * the value of x to the power of y
  * @x: integer
  * @y: integer
  *
  * Return: the power of y to x
  */
int _pow_recursion(int x, int y)
{
	if ((x == 0) && (y == 0))
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

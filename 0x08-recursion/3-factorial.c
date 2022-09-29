include "main.h"

/**
  * factorial - get the factorial of a given number
  * @n: integer
  *
  * Return: return the factorial of a given number
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

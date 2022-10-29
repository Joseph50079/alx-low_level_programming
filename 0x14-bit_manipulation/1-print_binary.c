#include "main.h"

/**
 *_pow - calculates (base ^ power)
 *@base: bse of the exponent
 *@power: powre of the exponent
 *
 *Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;

	for (i = 1; i <= power; i++)
		num *= base;

	return (num);
}

/**
 *print_binary - prints the binary representation of a number
 *@n: binary number
 *
 *Return 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, checker;
	char flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		checker = n & divisor;
		if (checker == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar ('0');
		}

		divisor >>= 1;
	}
}

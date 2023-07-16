#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the combination of two numbers
 * Return: 0
 */

int main(void)
{
	int i = 0, n;

	while (i < 100)
	{
		n = 0;
		while (n < 100)
		{
			if (n > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n;
		}
		++i;
	}

	putchar('\n');
	return (0);
}

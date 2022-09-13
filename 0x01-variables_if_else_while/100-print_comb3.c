#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * description - print numbers in double digit with putchar
 * Return: return 0
 */
int main(void)
{

	int i = 0, n;

	while (i <= 9)
	{
		n = 1;
		while (n <= 9)

		{

		if (i != n && i < n)

		{
			putchar(i + 48);
			putchar(n + 48);

			if (i + n != 17)
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

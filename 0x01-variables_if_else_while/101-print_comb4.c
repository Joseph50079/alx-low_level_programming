#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * description - print numbers in double digit with putchar
 * Return: return 0
 */
int main(void)
{

	unsigned int i = 0, n, j;

	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			j = 0;
			while (j <= 9)

			{

			if (i != n && i < n && n != j && n < j)

			{
				putchar(i + 48);
				putchar(n + 48);
				putchar(j + 48);

				if (i + n + j != 789)
				{
					putchar(',');
					putchar(' ');
				}

			}
			++j;

			}
			++n;
		}
		++i;

	}

	putchar('\n');

	return (0);
}

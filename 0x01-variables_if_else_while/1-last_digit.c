#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function
 * Return: return 0 if success otherwise 1
 */

int main(void)
{

	int n, m;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (n == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, m);
	}

	else if (n > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, m);
	}

	else if (n < 6)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, m);
	}

	return (0);

}

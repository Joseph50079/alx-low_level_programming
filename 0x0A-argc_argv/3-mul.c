#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function with arguments
 * @argc: counts strings
 * @argv: arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m;
	int result;

	if (argc == 0)
	{
		printf("Error\n");
		return (0);
	}

		n = atoi(argv[1]);
		m = atoi(argv[2]);
		result = n * m;

	printf("%d\n", result);

	return (0);
}

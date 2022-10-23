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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		n = atoi(argv[1]);
		m = atoi(argv[2]);
		result = n * m;

	printf("%d\n", result);

	return (0);
}

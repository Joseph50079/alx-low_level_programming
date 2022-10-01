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
	int i;
	int result = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		result = result * x;
	}

	printf("%d\n", result);

	return (0);
}

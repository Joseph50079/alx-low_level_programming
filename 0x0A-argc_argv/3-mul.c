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
	int i, n, m;
	int result;
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		result = n * m;
	}
	printf("%d\n", result);

	return (0);
}

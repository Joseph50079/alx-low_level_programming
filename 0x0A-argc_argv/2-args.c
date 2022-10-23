#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with argument
 * @argc: counts
 * @argv: command line arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}

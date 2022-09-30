#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with arguments
 * @argc: agrument that count
 * @argv: argument of an array
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

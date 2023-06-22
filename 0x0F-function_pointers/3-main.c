#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, op;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	s = argv[2];

	if ((*s == '/' && num2 == 0) || (*s == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}


	if (s[1] != '\0' || get_op_func(s) == NULL || !s)
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(s)(num1, num2);
	printf("%d\n", op);

	return (0);
}

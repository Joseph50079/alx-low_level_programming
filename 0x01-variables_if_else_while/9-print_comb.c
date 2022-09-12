#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 * description - print numbers in base 10 with putchar
 * Return: return 0
 */
int main(void)
{

	int me;


	for (me = '0'; me <= '9'; me++)
	{
	putchar(me);

	if (me != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 * decription - printing lowercase alphabet without e and q
 * Return: return 0 else
 *
 */
int main(void)
{

	int ch, q, e;

	q = 'q';
	e = 'e';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != e && ch != q)
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

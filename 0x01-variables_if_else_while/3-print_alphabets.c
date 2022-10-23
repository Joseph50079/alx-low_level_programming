#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 * decription - printing lowercase and uppercase alphabet
 * Return: return 0 else
 *
 */
int main(void)
{

	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	putchar(ch);
	putchar('\n');

	return (0);
}

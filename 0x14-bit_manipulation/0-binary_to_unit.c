#include "main.h"

/**
 * binary_to_uint - return's binary to unsigned int
 * @b: binary input
 * Desccription: returns binary to unsigned int
 * Return: t
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int t = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		{
			t += 1;
		}
	}
	return (t);

}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion
 * @argc: counts
 * @argv: arrays
 */

int main(int argc, char *argv[])
{
	int i, x;
	int coin[] = {25,10,5,2,1};
	int count = 0;
	int num = sizeof(coin) / sizeof(coin[0]);
	int total;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	x = atoi(argv[1]);
	if (x <= 0)
	{
		printf("0\n");
	}
	for (i = 0; 1 < num; i++)
	{
		if (x < coin[i])
		{
			coin[i]++;
		}
		else
			count++;
		x = x - coin[i];
	 }
	total = count;
	printf("%i", total);

	return (0);
}

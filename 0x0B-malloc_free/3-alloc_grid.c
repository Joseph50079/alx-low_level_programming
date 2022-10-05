#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocate a grid 2 dimensional array function
 * @width: width of an array
 * @height: height of an array
 * Return: t
 */

int **alloc_grid(int width, int height)
{
	int i = strlen(Width);
	int j = strlen(height);
	int w, h;
	int **t;

	t = (int **) malloc(sizeof(int) * i) * j;

	if (t == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < weight; w++)
		{
			t[h][w];
		}
	}
	if (width == 0 || width < 0 || height < 0 || height == 0)
	{
		return (NULL);
	}
	return (t);
}

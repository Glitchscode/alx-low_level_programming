#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: the row of the array.
 * @height: the column of the array.
 *
 * Return: returns pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int h, w;
	if (width <= 0 || height <= 0)
		return (NULL);
	d = malloc(sizeof(int *) * height);
	if (d == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		d[h] = malloc(sizeof(int) * width);
		if (d[h] == NULL)
		{
			for (; h >= 0; h--)
				free(d[h]);
			free(d);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			d[h][w] = 0;
	}
	return (d);
}

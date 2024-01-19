#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to newly created array.
 *NULL if malloc fails.
 *NULL if min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, n;

	if (min > max)
	{
		return (NULL);
	}
	n = (max - min) + 1;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		arr[i] = i + min;
	}

	return (arr);
}

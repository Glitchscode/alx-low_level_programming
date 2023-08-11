#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: The first value of the array.
 * @max: the last value of the array
 *
 * Return: If min > max or the function fails - NULL
 */
int *array_range(int min, int max)
{
	int *array, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	array = malloc(sizeof(int) * s);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		array[i] = min++;
	return (array);
}

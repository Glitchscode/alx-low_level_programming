#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: The size of the array
 * @c: The character to initialize the array
 * Return:  NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

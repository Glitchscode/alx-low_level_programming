#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: the size of the array
 * @c: the character.
 * Return: the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size == 0)
	{
		return (0);
	}
	ar = malloc(size * sizeof(char));
	for (n = 0; n <= size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}

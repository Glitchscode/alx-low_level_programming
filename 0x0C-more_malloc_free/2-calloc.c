#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: the number of elements to allocate
 * @size: the size of the elements.
 *
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *c;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(c) + i) = 0;
	}

	return (c);
}

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
	int n, s;
	void *c;

	n = nmemb;
	s = size;
	c = malloc(n * sizeof(s));
	if (c == NULL)
		return (NULL);
	if (n == 0)
		return (NULL);
	if (s == 0)
		return (NULL);
	return (c);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
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
	return ar;
}

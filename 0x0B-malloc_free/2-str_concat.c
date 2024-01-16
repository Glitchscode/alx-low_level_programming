#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: returns the concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, limit;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	c = malloc((i + j + 1) * sizeof(char));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	limit = j;
	for (j = 0; j <= limit; k++, j++)
	{
		c[k] = s2[j];
	}
	return (c);
}

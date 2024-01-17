#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: it stores the string to be duplicated
 * Return: returns a pointer to the dupilcated string on success.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	c = (char *)malloc((sizeof(char) * (i + 1)));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}

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
	unsigned int i, len;
	char *c;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len--;
	c = (char *)malloc((sizeof(char) * (len + 1)));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		c[i] = str[i];
	}
	return (c);
}

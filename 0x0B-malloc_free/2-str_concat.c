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
	int i, len, len1;
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
		len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len1++;
	}
	c = malloc((len + len1 + 1) * sizeof(char));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		c[len++] = s2[i];
	}
	return (c);
}

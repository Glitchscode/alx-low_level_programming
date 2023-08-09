#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: The returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents of s2, and
 * null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, len, ci;

	ci = 0;
	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
                s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	c = malloc(sizeof(char) * len);
	if (c == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		c[ci++] = s1[i];
	for (i = 0; s2[i]; i++)
		c[ci++] = s2[i];
	return (c);
}

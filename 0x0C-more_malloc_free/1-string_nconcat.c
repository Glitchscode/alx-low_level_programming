#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of string to concatenate from s2.
 * Return: returns the concatenation of s1 and s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	int num;
	char *c;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	c = malloc(len * sizeof(*c));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = '\0';
	return (c);
}

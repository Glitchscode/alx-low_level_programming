#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of string to concatenate from s2.
 * Return: returns the concatenation of s1 and s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, len;
	int num;
	char *c;

	num = n;
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
		len++;
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= len)
	{
		num = len;
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
	for (j = 0; j <= num; k++, j++)
	{
		c[k] = s2[j];
	}
	return (c);
}

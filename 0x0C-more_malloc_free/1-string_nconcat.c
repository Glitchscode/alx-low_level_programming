#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 * @n: number of characters to concatenate in @s2.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cc;
	unsigned int len, i;

	len = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	cc = malloc(sizeof(char) * (len + 1));
	if (cc == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		cc[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		cc[len++] = s2[i];
	cc[len] = '\0';
	return (cc);
}

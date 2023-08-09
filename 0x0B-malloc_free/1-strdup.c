#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *d;
	int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	d = malloc (sizeof(char) * (len++));
	if (d == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		d[i] = str[i];
	d[len] = '\0';
	return (d);
}

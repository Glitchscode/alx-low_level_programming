#include "main.h"
/**
 * _strncpy - copies string src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of byte to be copied from src to dest.
 *
 * Return: A pointer to the string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	i = 0;
	len = 0;
	while (src[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

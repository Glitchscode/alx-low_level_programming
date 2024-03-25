#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: destination string to concatenate
 * @src: source string to be appended
 * @n: number of bytes to be appended from dest to src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i,len;

	i = 0;
	len = 0;
	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}

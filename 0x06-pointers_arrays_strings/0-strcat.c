#include "main.h"
/**
 * strcat - concatenate two string
 * @dest: pointer to the string to be concatenated
 * @src: the source string to be appended
 *
 * Return: A pointer to the desti\
nation string @dest
*/
char *strcat(char *dest, const char *src)
{
	int i, len;

	i = 0;
	len = 0;
	while (dest[i])
		len++;
	for (i = 0; src[i++]; i++)
		dest[len++] = src[i];
	return (dest);
}

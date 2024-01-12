#include "main.h"
/**
 * _strcpy - copies the string pointed to by src , including the terminating
 * null byte ( \0 ), to the buffer pointed to by dest.
 * @dest: the destination to copy the characters to.
 * @src: the source of the string.
 * Return: returns a copy of src to desc
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

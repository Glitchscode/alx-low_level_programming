#include "main.h"
/**
 * _memcpy - copies mem area
 * @dest: the destination memory.
 * @src: The source memory.
 * @n: number.
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int y;

	y = n;
	for (i = 0; i < y; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by
 * @s with the constant byte @c.
 * @s: pointer to the mem area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The no. of bytes to be filled.
 *
 * Return: A pointer to the filled memarea @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

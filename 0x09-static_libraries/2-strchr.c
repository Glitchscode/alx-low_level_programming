#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: input 1
 * @c: input 2
 *
 * Return: Returns a pointer to the first occurrence of the character c in the
 * string s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

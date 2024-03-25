#include "main.h"
/**
 * _strcmp - Compares pointers of two string
 * @s1: A pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: Either s1 or s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

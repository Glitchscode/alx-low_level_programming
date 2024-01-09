#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: stores the string
 * Return: return the length of the string s
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

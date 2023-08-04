#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: parameter for the string
 * Return: It returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i <= *s; i++)
	{
		if (s[i] == '\0')
			break;
	}
	return (i);
}

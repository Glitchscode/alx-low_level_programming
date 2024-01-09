#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string argument.
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

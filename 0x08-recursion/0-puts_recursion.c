#include "main.h"
/**
 * _puts_recursion - prints the string s recursively
 * @s: it stores the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

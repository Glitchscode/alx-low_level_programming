#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: stores the string to be printed
 */
void puts_half(char *str)
{
	int i, n, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - A function that reverses a string
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	i = 0;
	while (s[i++])
		len++;
        for (i = len - 1; i >= 0; i--)
        {
                if (i < 0)
                        break;
		if (s[i] == '\0')
			continue;
		_putchar(s[i]);
        }
        _putchar('\n');
}

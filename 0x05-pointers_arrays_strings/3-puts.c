#include "main.h"
/**
 * _puts - This function print a string followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
	int i;

        for (i = 0; i <= *str; i++)
        {
                if (str[i] == '\0')
                        break;
		_putchar(str[i]);
        }
	_putchar('\n');
}

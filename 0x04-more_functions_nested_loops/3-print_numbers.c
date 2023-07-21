#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 with a new line
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

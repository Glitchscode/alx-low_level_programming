#include "main.h"
/**
 * print_line - prints lines based on the length n
 * @n: a parameter for storing the length of the straight line
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
		else if (i <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}

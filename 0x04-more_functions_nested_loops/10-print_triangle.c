#include "main.h"
/**
 * print_triangle - prints # in a triangular way
 * @size: size of the character '#'
 */
void print_triangle(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

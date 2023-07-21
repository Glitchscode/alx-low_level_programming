#include "main.h"
/**
 * print_square - It prints a square followed by a new line
 * @size: this the size of the square
 */
void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j = 0;
		for (j = 1; j <= size; j++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else if (size > 0)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

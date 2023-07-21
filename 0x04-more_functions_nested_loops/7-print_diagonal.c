#include "main.h"
/**
 * print_diagonal - prints \ in a diagonal way
 * @n: number of times the character '/' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)

		{
			int j;

			for (j = 1; j <= i; j++)

			{

				if (j == i)

				{

					_putchar('\\');

					_putchar('\n');

				}

				else

					_putchar(' ');
			}
		}
	}
}

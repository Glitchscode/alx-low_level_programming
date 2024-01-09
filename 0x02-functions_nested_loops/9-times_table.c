#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * _putchar - prints the variable s
 *
 *
 */
void times_table(void)
{
	int n;
	int m;
	int s;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			s = 0;
			s = n * m;
			if (s < 10)
			{
				_putchar(s + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (s > 9)
			{
				_putchar(s / 10 + '0');
				_putchar(s % 10 + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}

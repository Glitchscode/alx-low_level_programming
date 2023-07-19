#include "main.h"
/**
 *
 *
 *
 */
void times_table(void)
{
	char n, m, s;

	n = '0';
	while (n <= '9')
	{
		m = '0';
		while (m <= '9')
		{
			s = '0';
			s = (n * m);
			_putchar(s);
			_putchar(',');
			_putchar(' ');
			m++;
		}
		_putchar('\n');
		n++;
	}
}

#include "main.h"
/**
 * jack_bauer - prints from 00:00 to 23:59 using while loop
 *
 * Return: It returns nothing
 *
 */
void jack_bauer(void)
{
	int j, k, n, i;
	i = '0';
	while (i <= '2')
	{
		j = '0';
		while (j <= '3')
		{
			k = '0';
			while (k <= '5')
			{
				n = '0';
				while (n <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(n);
					_putchar('\n');
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

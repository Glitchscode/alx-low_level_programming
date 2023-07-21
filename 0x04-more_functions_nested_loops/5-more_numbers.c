#include "main.h"

/**
 * more_numbers - it prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int digit1, digit2, counter;

	counter = 0;
	while (counter <= 10)
	{
		digit1 = 0;
		while (digit1 <= 1)
		{
			digit2 = 0;
			while (digit2 <= 9)
			{
				if (digit1 == 1)
				{
					_putchar((digit1) + '0');
				}
				_putchar((digit2) + '0');
				if (digit2 == 4 && digit1 == 1)
				{
					break;
				}
				digit2++;
			}
			digit1++;
		}
		_putchar('\n');
		counter++;
	}
}

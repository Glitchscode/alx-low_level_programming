#include "main.h"
/**
 * print_last_digit - A function that prints the last digit
 * @n: this parameter stores integer values
 *
 * Return: it returns the absolute value of a given value
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i > 0)
	{
		_putchar(i + 48);
		return (i);
	}
	else if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else if (i == 0)
	{
		_putchar(48);
		return (i);
	}
	return (i);
}

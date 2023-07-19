#include "main.h"
/**
 * print_sign - It prints if a number is positive or negative or zero
 * @n: it stores the number for checking if it is + or - or 0
 *
 * Return: Always zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}

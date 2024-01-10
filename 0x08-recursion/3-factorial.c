#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: the number n
 * Return: returns -1 when n < 0, returns the factorial of n when it is greater
 * than 0, and returns 1 when it is equals to 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

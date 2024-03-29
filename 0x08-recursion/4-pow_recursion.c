#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the value x to be raised
 * @y: the value y power of value x
 * Return: returns -1 if y < 0, returns 0 if y == 0
 * returns x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

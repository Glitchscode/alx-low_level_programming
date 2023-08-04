#include "main.h"
/**
 * _abs - A function to get the absolute value of an integer
 * @N: this parameter stores integer values
 *
 * Return: it returns the absolute value of a given value
 */
int _abs(int N)
{
	if (N > 0)
	{
		return (N);
	}
	else if (N == 0)
	{
		return (N);
	}
	else if (N < 0)
	{
		return (-N);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: returns the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

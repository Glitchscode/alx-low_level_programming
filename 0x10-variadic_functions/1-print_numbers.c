#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: separate the numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}

		if (n == 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(ptr);
}

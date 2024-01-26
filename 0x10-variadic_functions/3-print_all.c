#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: returns the sum of all arguments
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	int i, in, len;
	char c;
	float f;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == 's')
		{
			str = va_arg(ptr, char *);
			printf("%s%s", sep, str);
		}
		else if (format[i] == 'i')
		{
			in = va_arg(ptr, int);
			printf("%s%i", sep, in);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(ptr, double);
			printf("%s%f", sep, f);
		}
		else if (format[i] == 'c')
		{
			c = va_arg(ptr, int);
			printf("%s%c", sep, c);
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ptr);
}

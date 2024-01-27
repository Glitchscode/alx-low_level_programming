#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - sum all arguments
 * @format: number of arguments
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	int i;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			case 'i':
				printf("%s%i", sep, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ptr, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ptr, int));
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}

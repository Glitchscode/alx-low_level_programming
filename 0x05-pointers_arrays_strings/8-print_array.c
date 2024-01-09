#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, plus a new line.
 * @a: stores the array to be printed.
 * @n: stores the number of elements in array a.
 */
void print_array(int *a, int n)
{
	int i, len;

	for (i = 0; a[i] != '\0'; i++)
	{
		len++;
	}
	n = len;
	for (i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1])
		{
			printf("%d, ", a[i]);
		}
		else if (a[i] == a[n - 1])
		{
			printf("%d\n", a[i]);
		}
	}
}

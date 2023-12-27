#include <stdio.h>
/**
 * main - prints all numbers of base16
 *
 * Return: Always zero
 *
 * putchar: prints the value of a and n in int data type
 *
 * a: stores the ascii value of hexadecimal numbers
 *
 * n: stores the ascii value of hexadecimal numbers
 */

int main(void)
{
	int a, n;

	a = 97;
	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar ('\n');

	return (0);
}

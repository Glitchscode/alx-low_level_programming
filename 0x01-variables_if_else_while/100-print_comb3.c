#include <stdio.h>
/**
 * main - prints non-duplicated numbers in pairs from 0 to 9 separted by space
 *
 * and comma
 * Return: Always zero
 *
 * putchar: prints the value of i and n in int data type
 *
 * i: stores the numbers
 *
 * n: stores the integer numbers
 */

int main(void)
{
	int i;
	int n;

	i = 48;
	while (i < 57)
	{
		n = i + 1;
		while (n <= 57)
		{
			if (i != n)
			{
				putchar(i);
				putchar(n);
				if (i == '8' && n == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - prints all numbers from 0 to 9 separted by space and comma
 *
 * Return: Always zero
 *
 * putchar: prints the value of i in int data type
 *
 * i: stores the numbers
 *
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}

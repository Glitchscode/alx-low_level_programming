#include <stdio.h>
/**
 * main - prints all 
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i;
	i = '0';
	while (i <= '8')
	{
	      putchar(i);
	      putchar(',');
	      putchar(' ');
	      i++;
	}
	putchar('9');
	return (0);
}

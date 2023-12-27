#include <stdio.h>
/**
 * main - It prints small letters from z to a
 *
 * Return: Always zero
 *
 * c: stores the ASCII value of the alphabet
 *
 * putchar: prints the values of c in char data type
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}

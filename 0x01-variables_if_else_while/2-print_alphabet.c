#include <stdio.h>
/**
 * main - It prints small letters from a to z
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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

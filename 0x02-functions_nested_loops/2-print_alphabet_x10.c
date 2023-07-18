#include "main.h"
/**
 * print_alphabet_x10 - A function that prints a to z 10x
 * Return: It does not return anything
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}

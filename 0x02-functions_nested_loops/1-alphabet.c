#include "main.h"
/**
 * print_alphabet: print a to z
 *
 * Return: It returns nothing
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

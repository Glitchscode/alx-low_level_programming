#include "main.h"
/**
 * main - prints "abcdefghijklmnopqrstuvwxyz"
 *
 * Return: Always 0
 * print_alphabet: print a to z
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

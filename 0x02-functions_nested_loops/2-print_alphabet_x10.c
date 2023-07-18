#include "main.h"
/**
 * main - print a to z 10x
 *
 * Return: Always 0 
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

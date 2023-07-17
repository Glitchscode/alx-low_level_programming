#include <stdio.h>
/**
 * main - print
 *
 * Return: Always 0 
 */

int main(void)
{
      int i;
      char c;
      c = 'a';
	i = '0';
	while (i <= '9')
	{
	      putchar(i);
	      i++;
	}
	while (c <= 'f')
	{
	      putchar(c);
	      c++;
	}
	putchar('\n');
	return (0);

}

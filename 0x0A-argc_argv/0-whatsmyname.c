#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line.
 * @argc: argument count.
 * @argv: argument array.
 *
 * return: Always zero.
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	_puts(argv[0]);
	return (0);
}

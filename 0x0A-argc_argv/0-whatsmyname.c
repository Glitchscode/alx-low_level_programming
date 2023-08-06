#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

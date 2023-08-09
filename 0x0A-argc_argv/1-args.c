#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

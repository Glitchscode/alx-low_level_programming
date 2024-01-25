#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - arithmetic operation
 * @argc: argument count
 * @argv: argument variable
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int (*optr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	optr = get_op_func(argv[2]);
	if (!optr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", optr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

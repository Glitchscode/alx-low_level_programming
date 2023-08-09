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
	int f, s, mul;

	if ((argv[1] == 0) || (argv[2] == 0))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		f = atoi(argv[1]);
		s =atoi(argv[2]);
		mul = (f * s);
		printf("%d\n", mul);
		return (0);
	}
}

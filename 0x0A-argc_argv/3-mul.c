#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul, i;

	for (i = 0; i < argc; i++)
	{
		mul = 0;
		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
	}
	printf("%d\n", mul);
	return (0);
}

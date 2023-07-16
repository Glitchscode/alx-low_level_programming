#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - randomize number and tell if it is zero, negative or positive
 *
 * n: A variable for storing the randomize numbers
 *
 * Return: Always returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

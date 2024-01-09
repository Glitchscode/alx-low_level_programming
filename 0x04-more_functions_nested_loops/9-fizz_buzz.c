#include <stdio.h>
/**
 * main - the main function
 * Return: always zero
 */
int main(void)
{
	int i, three, five;

	for (i = 1; i <= 100; i++)
	{
		three = i % 3;
		five = i % 5;
		if (three == 0 && five == 0)
		{
			printf("FizzBuzz ");
		}
		else if (five == 0)
		{
			printf("Buzz ");
		}
		else if (three == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

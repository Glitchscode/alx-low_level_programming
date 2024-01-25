#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 * Return: the addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two numbers
 * @a: first num
 * @b: second num
 * Return: the substraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first num
 * @b: second num
 * Return: the multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first num
 * @b: second num
 * Return: the division of a from b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two numbers
 * @a: first num
 * @b: second num
 * Return: the remainder of the division of a from b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

#include "main.h"
/**
 * divisors - return n and m
 * @n: integer n
 * @m: integer m
 * Return: return n and m
 */
int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: stores the number
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}

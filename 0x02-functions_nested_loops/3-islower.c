#include <stdio.h>
/**
 * _islower - prints if an alphabet is lower or upper case
 * @c: holds the alphabets
 *
 * Return: either 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	return (0);
}

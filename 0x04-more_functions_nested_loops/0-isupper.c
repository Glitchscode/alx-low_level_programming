#include "main.h"
/**
 * _isupper - It returns 1 when an alphabet is in uppercase but 0 when it is
 * not an upper case.
 * @c: A parameter that stores alphabets
 *
 * Return: It returns 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

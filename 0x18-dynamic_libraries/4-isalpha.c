#include "main.h"
/**
 * _isalpha - It returns 1 if the parameter is an alphabet
 * @c: It holds the values A to Z and a to z
 *
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	return (0);
}

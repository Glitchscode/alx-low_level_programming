#include "main.h"
/**
 * main - prints lower or upper case
 *
 * Return: Always 0 
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	return (0);
}

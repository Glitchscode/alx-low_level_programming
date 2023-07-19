#include "main.h"
/**
 *
 *
 *
 */
int _abs(int abs)
{
	if (abs > 0)
	{
		_putchar(abs);
	}
	else if (abs == 0)
	{
		_putchar('0');
	}
	else if (abs < 0)
	{
		abs = abs * -1;
		_putchar(abs);
	}
	return (0);
}

#include "main.h"
/**
 * swap_int - It swap the value of two integers
 * @a: this parameter swaps with b parameter
 * @b: this parameter swaps with a parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

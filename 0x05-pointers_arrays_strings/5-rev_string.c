#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: stores the string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	int len;
	char rev1, rev2;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	j = 0;
	for (i = len - 1; i > j; i--)
	{
		rev1 = s[j];
		rev2 = s[i];
		s[i] = rev1;
		s[j] = rev2;
		j++;
	}
}

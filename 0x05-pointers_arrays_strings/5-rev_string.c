#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i, len, tmp;

	len = 0;
	i = 0;
	while (s[i++])
		len++;
	for (i = len - 1; i >= len/2; i--)
	{
		if (i < 0)
			break;
		if (s[i] == '\0')
			continue;
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

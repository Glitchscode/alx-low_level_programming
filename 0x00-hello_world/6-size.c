#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 *
 * sizeof: Tells the byte size of data types
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(li));
printf("Size of a long long int: %llu byte(s)\n", (long long int)sizeof(lli));
printf("Size of a float: %.0f byte(s)\n", (float)sizeof(f));
return (0);
}

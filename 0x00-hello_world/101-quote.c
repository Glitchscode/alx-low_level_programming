#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * write: A function used to write to a file
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
fwrite(str, sizeof(char), strlen(str), stderr);
return (1);
}

#include <stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
int main(void)
{
      char c;
      char s;
      
      c = 'A';
      s = 'a';
      while (s <= 'z')
      {
            putchar(s);
            s++;
      }
      while (c <= 'Z')
      {
            putchar(c);
            c++;
      }
      putchar('\n');
      return(0);
}

#include "main.h"
/**
 *print_rev - print reverse
 *@s: checked output
 *
 *Return: always return 0
 */
void print_rev(char *s)
{
  int i;

  for (i = _strlen; i >= 0; i--)
    {
      _putchar(s[i]);
      i--;
    }
  _putchar('\n');
}

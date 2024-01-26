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

  for (i = _strlen(s); i >= 0; i--)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}

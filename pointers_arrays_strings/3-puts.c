#include "main.h"
/**
 *_puts - print string
 *@str: checked output
 *
 *Return: always return 0
 */
void _puts(char *str)
{
  int i = 0;

  while(str[i])
    {
      _putchar(str[i]);
      i++;
    }
}

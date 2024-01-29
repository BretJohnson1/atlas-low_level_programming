#include "main.h"
/**
 *puts_half - print second half of string
 *@str: checked output
 *
 *Return: always return 0
 */
void puts_half(char *str)
{
  int len = 0;
int  n = (len - 1 / 2);
int  i = 0;
  
    while ( str[len] != '\0')
      {
	len++;
      }
    len--;
    if (len >= 1)
	  {
	    i = len / 2 + 1;
	    for (n = i;n <= len; n++)
	      {
		_putchar(*str[n]);
	      }
  _putchar('\n');
}
}

#include "main.h"
/**
 *print_line - print a line
 *@n: checked output
 *
 *Return: always return 0
 */
void print_line(int n)
{
  while (n > 0)
    {
      _putchar('_');
      if (n <= 0)
	{
	  _putchar('\n');
	}
    }
}

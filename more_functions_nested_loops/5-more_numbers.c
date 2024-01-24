#include "main.h"
/**
 *more_numbers - print numbers
 *
 *Return: always return 0
 */
void more_numbers(void)
{
  int i = 0;
  int n = 1;

  for (i = 0; i <= 14; i++)
    {
      _putchar((i % 10) + 48);
    }
      for (n = 0; n <= 10; n++)
	{
	  if (i > 10)
	    {
	      _putchar((i / 10) + 48);
	}
    }
  _putchar('\n');
  i++;
  n++;
}

#include "main.h"
/**
 *more_numbers - print numbers
 *
 *Return: always return 0
 */
void more_numbers(void)
{
  int i = 0;
  int n = 0;

  for (i = 0; i < 10; i++)
    {
      for (n = 0; n <= i; n++)
	{
      _putchar(48 + i);
	}
    }
  _putchar('\n');
  i++;
}

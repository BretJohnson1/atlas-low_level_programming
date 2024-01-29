#include "main.h"
/**
 *puts2 - print every other character
 *@str: checked output
 *
 *Return: always return 0
 */
void puts2(char *str)
{
  int len;

  while (str != '\0')
    {
      if (str % 2 == 0)
	{
	len++;
      str++;
	}
    }
  _putchar('\n');
}

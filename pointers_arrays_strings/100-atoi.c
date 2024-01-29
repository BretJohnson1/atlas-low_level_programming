#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: checked output
 *
 *Return: always return 0
 */
int _atoi(char *s)
{
  int num;
  int sign;

  if (*s == '+' || *s == '-')
    {
      sign = (*s == '-')
	? -1 : 1;
      s++;
    }
  while (*s != '\0')
    {
      if (*s >= '0' && *s <= '9')
	{
	  num = num * 10 + (*s - '0');
	}
      else
	{
	  return (0);
	}
      s++;
    }
  return (sign * num);
}

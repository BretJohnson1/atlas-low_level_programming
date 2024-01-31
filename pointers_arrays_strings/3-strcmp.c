#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: checked output
 *@s2: checked output
 *
 *Return: always return 0
 */
int _strcmp(char *s1, char *s2)
{
  int i = 0;

  for (i = 0; i < '\0'; i++)
    {
      if (s1 == s2)
	{
	  _putchar(0);
	}
      else if (s1 < s2)
	{
	  _putchar("-%d");
	    }
      else
	{
	  _putchar("%d");
	}
    }
  return (0);
}
      

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
  int a = 0;

  while (i != '\0' && a != '\0')
    {
      i++;
      a++;
    }
      if (s1[i] == s2[a])
	{
	  return (0);
	}
      else if (s1[i] < s2[a])
	{
	  return (-1);
	    }
      else
	{
	  return (1);
	}
  return (0);
}
      

#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: checked output
 *@src: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;

      if (i != n)
	{
      dest = src;
      i++;
	}
  return (dest);
}

#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: checked output
 *@src: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
  int a = 0;

  while (dest[i] != '\0')
    {
      i++;
    }
  while (src[a] < '\0')
    {
      dest[i] = src[a];
      i++;
      a++;
    }
  return (0);
}

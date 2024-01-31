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

  while (src[i] != '\0')
    {
      dest[i++] = src[i++]
    }
  dest[i++] = '\0';
  return (dest);
}

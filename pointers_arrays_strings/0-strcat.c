#include "main.h"
/**
 *_strcat - concatenate two strings
 *@dest: checked output
 *@src: checked output
 *
 *Return: always return 0
 */
char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j = 0;
  
  for (dest[i] = 0; dest[i] != '\0'; i++)
    {
      while (src[j] != '\0')
	dest = src;
      src++;
    }
  dest[i] = '\0';
  return (dest);
}
  

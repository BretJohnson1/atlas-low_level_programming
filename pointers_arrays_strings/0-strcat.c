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
  int i;
  int j;
  for (dest[i] = 0; dest[i] != '\0'; i++)
    {
      while (src[j] != '\0')
      src++;
    }
  dest[i] = '\0';
  return (0);
}
  

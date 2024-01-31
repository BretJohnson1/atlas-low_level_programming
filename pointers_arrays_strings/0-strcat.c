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
  
  for (i = 0; i <= '\0'; i++)
    {
      while (dest[i] <= '\0')
	dest++;
      src++;
    }
  dest[i] = '\0';
  return (0);
}
  

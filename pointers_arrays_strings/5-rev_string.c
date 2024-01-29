#include "main.h"
/**
 *_strlen - length of string
 *@s: checked output
 *
 *Return: always return 0
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
/**
 *rev_string: reverse string
 *@s: checked output
 *
 *Return: always return 0
 */
void rev_string(char *s)
{
  int i = _strlen(s);
  char *b;
  char* start = s;
  char* end = s + i - 1;

  while (start < end)
    {
int temp = *s;
*s = *b;
*b = temp;
 start++;
 end--;
    }
}

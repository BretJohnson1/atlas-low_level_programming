#include "main.h"
/**
 *rev_string - reverse string
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
*s = b;
*b = temp;
 start++;
 end--;
    }
}

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

while (*s != "\0")
{
length++;
s++;
}
return (length);
}

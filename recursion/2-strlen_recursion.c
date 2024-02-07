#include "main.h"
/**
 *_strlen_recursion - return length of string
 *@s: checked output
 *
 *Return: always return 0
 */
int _strlen_recursion(char *s);
{
	int len = 0;
	
	if (*s == '\0')
	{
		return;
	}
	s++;
	len++;
	_putchar(len);
	_strlen_recursion(s);
	

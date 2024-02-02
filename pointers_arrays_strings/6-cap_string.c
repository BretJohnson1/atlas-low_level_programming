#include "main.h"
/**
 *cap_string - capitalize string
 *@a: checked output
 *
 *Return: always return 0
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		switch (a[i])
			{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
					a[i + 1] = a[i + 1] -32
					}
	   return (a);
	}
}

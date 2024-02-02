#include "main.h"
/**
 *string_toupper - change case of letters
 *@a: checked output
 *
 *Return: always return 0
 */
char *string_toupper(char *a)
{
	int len = a;

	for (i = 0; i < len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] -32;
		}
	}
	return (0);
}

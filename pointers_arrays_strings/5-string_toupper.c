#include "main.h"
/**
 *string_toupper - change case of letters
 *@a: checked output
 *
 *Return: always return 0
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}

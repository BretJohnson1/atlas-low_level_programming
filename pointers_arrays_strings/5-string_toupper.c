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
	int temp = *a

	while (i != '\0')
	{
		if (a[i] == 'a')
		{
			a[i] = 'A';
			i++;
		}
	}

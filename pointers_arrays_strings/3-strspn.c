#include "main.h"
/**
 *int_strspn - get the length
 *@s: checked output
 *@accept: checked output
 *
 *Return: always return 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; accept[i] !='\0'; i++)
	{
		if (s[j] == accept[i])
			s++;
		accept++;
	}
	return (i);
}

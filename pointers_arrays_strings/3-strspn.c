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
	int i;

	for (i = 0; i !='\0'; i++)
	{
		if (s == accept)
			s++;
		accept++;
	}
	return (s);
}

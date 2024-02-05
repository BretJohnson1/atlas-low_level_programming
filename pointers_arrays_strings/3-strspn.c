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
	unsigned int result;
	int j;

	while(*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (*s == accept[j])
		{
			result++;
		break;
		}
		else if (accept[j+1] == '\0'){
			return (result);
		s++;
		}
	}
		
	return (result);
}

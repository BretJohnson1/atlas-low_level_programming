#include "main.h"
/**
 *_strstr - locate substring
 *@haystack: checked output
 *@needle: checked output
 *
 *Return: always return 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (*needle == *haystack && *needle != '\0')
			return (haystack)
	}
	return ('\0')
		}

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
	char *p = haystack;
	char *s = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*needle == *haystack && *needle != '\0')
		{
		haystack++;
		needle++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return ('\0');
		}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenate two strings
 *@s1: checked output
 *@s2: checked output
 *
 *Return: always return 0
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

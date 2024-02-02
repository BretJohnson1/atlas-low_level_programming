#include "main.h"
/**
 *leet - encode a string
 *@a: checked output
 *
 *Return: always return 0
 */
char *leet(char *)
{
	char leet[] = "4BCD3FGHIJK1MN0PQR7UVWXYZ4bcd3fghijk1mn0pqr7uvwxyz";

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = leet[a[i] - 'A'];
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = leet[a[i] - 'a' + 26];
		}
	}
	return (s);
}

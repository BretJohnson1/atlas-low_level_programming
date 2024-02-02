#include "main.h"
/**
 *cap_string - capitalize string
 *@a: checked output
 *
 *Return: always return 0
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		switch (a[i])
			{
			case 1: ' ';
			case 2: '\t';
			case 3: '\n';
			case 4: ',';
			case 5: ';';
			case 6: '.';
			case 7: '!';
			case 8: '?';
			case 9: '"';
			case 10: '(';
			case 11: ')';
			case 12: '{';
			case 13: '}';
					a[i + 1] = a[i + 1] -32
					}
	   return (a);
	}
}

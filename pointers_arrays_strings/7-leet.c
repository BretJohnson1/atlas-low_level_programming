#include "main.h"
/**
 *leet - encode a string
 *@a: checked output
 *
 *Return: always return 0
 */
char *leet(char *a)
{
	int i, j;
    char leet[256] = {0};
	
    leet['a'] = leet['A'] = '4';
    leet['e'] = leet['E'] = '3';
    leet['o'] = leet['O'] = '0';
    leet['t'] = leet['T'] = '7';
    leet['l'] = leet['L'] = '1';
	
    for (i = 0, j = 0; a[i]; i++)
    {
        if (leet[a[i])
        {
            a[j++] = a[i];
        }
        else
        {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
    return (a);
}

#include "main.h"
/**
 *reverse_array - reverse content
 *@a: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
int reverse_array(int *a, int n)
{
	int i;
	int m;
	int *f = a;

	for(i = 0; i <= n; i++)
	{
		a[i] = f[m];
			}

		for (m = n; m >= 0; m--)
		{
			f[m] = a[i];
		}

	return (0);
}

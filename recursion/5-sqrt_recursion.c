#include "main.h"
/**
 *_sqrt_recursion - return natural square root
 *@n: checked output
 *
 *Return: always return 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (_sqrt_recursion(n^2));
}

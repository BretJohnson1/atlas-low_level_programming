#include <stdio.h>
#define SUM(x, y) ((x) + (y))
/**
 *main - compute sums
 *
 *Return: always return 0
 */
int SUM(int x, int y)
{
	int a = 5;
	int b = 3;
	int result = SUM(a, b);

	printf("Sum of %d and %d is %d\n", a, b, result);
	return (0);
}

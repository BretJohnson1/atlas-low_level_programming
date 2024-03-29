#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add numbers
 * @a: checked output
 * @b: checked output
 *
 * Return: return 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract numbers
 * @a: checked output
 * @b: checked output
 *
 * Return: return 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply numbers
 * @a: checked output
 * @b: checked output
 *
 *  Return: return 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a: checked output
 * @b: checked output
 *
 *  Return: return 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - error
 * @a: checked output
 * @b: checked output
 *
 * Return: return 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

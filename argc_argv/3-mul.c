#include <stdio.h>
#include "main.h"
/**
 *main - multiply two numbers
 *@argc: checked output
 *@argv: checked output
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	int a = 2, b = 5, result = (a * b);
	(void) argc;
	(void) argv;
	
	if (result < 2)
	{
		printf("Error\n");
			return (1);
	}
	else if (result >= 2)
	{
		printf("%d", result);
		return(result);
	}
	return (0);
}

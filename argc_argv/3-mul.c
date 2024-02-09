#include <stdio.h>
#include <stdlib.h>
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
	int a = atoi(argv[1]);
		int b = atoi(argv[2]);
	int result = (a * b);
	
	if (argc <= 2)
	{
		printf("Error\n");
			return (1);
	}
	else if (argc == 3)
	{
		printf("%d", result);
		return(result);
	}
	return (0);
}

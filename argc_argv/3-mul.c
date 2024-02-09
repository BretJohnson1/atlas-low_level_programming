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
	int result = (argc * argc);
	(void) argv;

	atoi(argv[]);
	
	if (argv < 2)
	{
		printf("Error\n");
			return (1);
	}
	else if (argv == 2)
	{
		printf("%d", result);
		return(result);
	}
	return (0);
}

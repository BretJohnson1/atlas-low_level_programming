#include <stdio.h>
#include "main.h"
/**
 *main - print all arguments
 *@argc: checked output
 *@argv: checked output
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s/n", argc);
			}
	return (0);
}

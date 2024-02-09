#include <stdio.h>
#include "main.h"
/**
 *main - print number of arguments
 *@argc: checked output
 *@argv: checked output
 *
 *return: always return 0
 */
int main(int argc, char* argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}

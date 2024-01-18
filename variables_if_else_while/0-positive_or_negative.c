#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - assign a number to n Return: always return 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	  {
	    printf("is psoitive,\n");
	  }
	else if (n == 0)
	  {
	        printf("is zero,\n");
	  }
	 else (n < 0)
	  {
		printf("is negative,\n");
	  }
	;
	
	return (0);
}

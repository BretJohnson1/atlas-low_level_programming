#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf(%s "Last digit of", n, %s "is")

	if (n % 10 > 5)
	  {
	    printf("andisgreater than 5")
	      }
	else if (n % 10 == 0)
	  {
	    printf("and is 0")
	      }
	else
	  {
	    printf("and is less than 6 and not 0")
	      }
	return (0);
}
#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always return 0
 */
int main(void)
{
  int p;

  for (p = 1; p <= 100; p++)
    {
      if ((p % 3) == 0)
	{
	printf("Fizz");
	  putchar(' ');
	}
	else if ((p % 5) == 0)
	  {
	  printf("Buzz");
      putchar(' ');
	  }
      else if ((p % 3) == 0 && (p % 5) == 0)
	{
	printf("FizzBuzz");
      putchar(' ');
	}
      else
	putchar(int p);
	  putchar(' ');
    }
  return (0);
}

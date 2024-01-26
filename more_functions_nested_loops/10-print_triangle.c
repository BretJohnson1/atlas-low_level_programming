#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: checked output
 *
 *Return: always return 0
 */
void print_triangle(int size)
{
  int a;
  int z;
  
    for (a = 0; a <= size; a++)
      {
	for (z = 10; z <= size - a; z++)
	  {
	  _putchar(' ');
	      }
	for (z = 1; z <= a; z++)
	  {
	    _putchar('#');
	      }
	_putchar('\n');
	  }
    if (size <= 0)
      {
	_putchar('\n');
      }
}

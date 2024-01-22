#include "main.h"
/**
 *main - print alphabet
 *
 *Return: always return 0
 */
void print_alphabet(void)
{
  char c = 'a';

    while (c <= 'z')
      {
	_putchar(c);
	c++;
      }
  _putchar('\n');

    return (0);
}

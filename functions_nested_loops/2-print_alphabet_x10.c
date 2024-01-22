#include "main.h"
/**
 *print_alphabet_x10 - print alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i = 0

for (int i = 0; i < 10; i++)
{
for (char c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}

#include <stdio.h>
/**
 *main - reverse the alphabet
 *
 *Return: always return 0
 */
int main(void)
{
char c = 'z';

while (c <= 'z')
{
putchar(c - 97);
c--;
}
putchar('\n');

return (0);
}

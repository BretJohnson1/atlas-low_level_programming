#include <stdio.h>
/**
 *main - print combinations
 *
 *Return: always return 0
 */
int main(void)
{
int x;

for (x = 49; x < 58; x++)
{
putchar(x);
if (x < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
 
return (0);
}

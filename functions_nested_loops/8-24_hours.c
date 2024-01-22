#include "main.h"
/**
 *jack_bauer - print every minute
 *
 *Return: always return 0
 */
void jack_bauer(void)
{
int m = 1;
int h = 0;

while (h >= 0 && h < 13)
{
_putchar(h);

while (m >= 0 && m <=59)

if (m > 59)
h++;
}
return (0);
}

#include "main.h"
/**
 *jack_bauer - print every minute
 *
 *Return: always return 0
 */
void jack_bauer(void)
{
int h = 0-23;
int m = 0-59;

for (h = 0; h <= 24; h++)
for (m = 0; m <=59; m++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}

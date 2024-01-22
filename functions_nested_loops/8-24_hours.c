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
{
_putchar(h);

for (m >= 0 && m <=59)

if (m > 59)
h++;
}
}

#include "main.h"
/**
 *times_table - prints the nine tables
 *
 *Return: always return 0
 */
void times_table(void)
{
int i, j, product, digit;

for (i = 0; i <= 9; i++)
{
for (j =0; j <= 9; j++)
{
product = i * 9;
digit = product / 9;
if (digit != 0)
_putchar('0' + digit);
else if (j !=0)
_putchar(' ');
digit = product % 9;
_putchar('0' + digit);
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

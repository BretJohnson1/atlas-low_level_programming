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
product = i * 9 + j;
digit = product / 10;
if (digit != 0)
putchar('0' + digit);
else if (j !=0)
putchar(' ');
digit = product % 10;
putchar('0' + digit);
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}

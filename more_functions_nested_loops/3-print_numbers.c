#include "main.h"
/**
 *print_numbers - print numbers
 *
 *Return: always return 0
 */
void print_numbers(void)
{
int i = 0;

if (i <= 9 && i >= 0)
{
_putchar(48 + i);
i++;
}
_putchar('\n');

}

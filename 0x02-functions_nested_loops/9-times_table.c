#include "main.h"
/**
 * times_table - Prints the 9 times table starting with 0
 * Return: value of tables.
 */

void times_table(void)
{
int a, b, result;

for (a = 0; a <= 9; a++)
{
_putchar('0')

for (b = 0; b <= 9; b++)
{
_putchar(',');
_putchar(' ');

result = a * b;

if (result <= 10)
_putchar(' ');

else
_putchar((result / 10) +  '0');

_putchar((result % 10) + '0');

}
_putchar('\n');
}
}

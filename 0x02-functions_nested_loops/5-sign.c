#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: integer to be tested
 * Return: 0 or 1 or -1 depending on the answer
 */


int print_sign(int n)
{
int x;

for (x = '+'; x <= '0'; x++)
{
if (n > 0 && x == '0')
{
_putchar(x);
_putchar(',');
return (1);
}
else if (n < 0 && x == '-')
{
_putchar(x);
_putchar(',');
return (-1);
}
else
{
_putchar(x);
_putchar(',');
return (0);
}

}
return (0); }}


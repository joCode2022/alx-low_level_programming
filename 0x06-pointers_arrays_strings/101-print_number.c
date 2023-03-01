#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: input integer parameter
 */
void print_number(int n)
{
int sign;
unsigned int a, tmp;
int tens = 1;
sign = (n < 0) ? -1 : 1;
a = (n < 0) ? -1 * n : n;
for (tmp = a; tmp >= 10; tmp /= 10)
tens *= 10;
if (sign < 0)
_putchar('-');
while (tens != 0)
{
tmp = a / tens;
_putchar('0' + tmp);
a = a - (tens *tmp);
tens /= 10;
}
}

#include "main.h"

/**
 * is_prime_number - checks for prime number
 *
 * @n: int number to work with
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
int i;
i = (n % 2);
if (n == 1)
{
return (0);
}
else if (i == 1)
{
return (1);
}
else
{
return (0);
}
}

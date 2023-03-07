#include "main.h"

/**
 * _Sqrt - checks square root of a number
 * @a: square root
 * @b: integer to find sqaure root
 * Return: square root of number
 */

int _Sqrt(int a, int b)
{
if (b * b > a)
return (-1);
if (b * b == a)
return (b);
return (_Sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int number to find square root
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
{
return (_Sqrt(n, 1));
}
}

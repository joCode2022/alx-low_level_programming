#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: 1st int to swap
 * @b: 2nd int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

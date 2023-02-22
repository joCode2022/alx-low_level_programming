/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{	int num;	
	for (num = 0; num <= 9; num++)
	{
<<<<<<< HEAD
		putchar((num % 10) + '1');
		if (num == 9)
			continue;
=======
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
>>>>>>> 4cc64ae44f73cdf3027a906f58dd45d97a536f85
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

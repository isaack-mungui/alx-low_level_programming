#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: number to check
 * Return: 1 if n is greater than 0 |
 * 0 if n is zero | -1 if n is less than zero
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	} else if (n == 0)
	{
		test = 0;
		_putchar('0');
	} else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}

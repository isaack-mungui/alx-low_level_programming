#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - performs check
 * if a number is divisible
 *
 * @num: number to be evaluated
 * @div: the divisor
 *
 * Return: 0 if number is divisible,
 * otherwise return 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}


/**
 * is_prime_number - returns whether an integer
 * is a prime number or not.
 *
 * @n: integer value to be evaluated.
 *
 * Return: 1 if input integer is a prime number, 0
 * otherwise.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}

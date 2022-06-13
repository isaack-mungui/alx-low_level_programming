#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer to a variable
 * @b: integer pointer to a vraiable
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}


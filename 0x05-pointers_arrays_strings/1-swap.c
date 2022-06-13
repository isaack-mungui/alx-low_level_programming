#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a, @b - integer pointers to variables to be swapped
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}


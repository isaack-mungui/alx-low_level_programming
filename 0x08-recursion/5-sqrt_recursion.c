#include "main.h"
#include <math.h>

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of
 * a number.
 * @num: number to be computed
 * @root: root to be evaluated
 *
 * Return: the natural square root of a number |
 * -1 if number has no natural square root.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}

	return (find_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - return the natural
 * square root of a number
 *
 * @n: number to be computed
 *
 * Return: The natural root of n |
 * -1 if n does not have a natural
 *  square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}

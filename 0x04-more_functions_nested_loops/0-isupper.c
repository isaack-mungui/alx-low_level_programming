#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: character to check
 * Return: 0 | 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

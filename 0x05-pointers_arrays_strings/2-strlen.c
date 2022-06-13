#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - return the length of a string.
 *
 * @s: pointer to a character
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

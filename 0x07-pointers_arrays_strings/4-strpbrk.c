#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes.
 *
 * @s: string to perform search on.
 * @accept: set of bytes to perform search on.
 *
 * Return: pointer to byte if @s matching one of the bytes in accept |
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}

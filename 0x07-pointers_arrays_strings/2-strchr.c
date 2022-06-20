#include "main.h"
#include <string.h>

/**
 * *_strchr - locate character in string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: Pointer to matched character |
 * NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}


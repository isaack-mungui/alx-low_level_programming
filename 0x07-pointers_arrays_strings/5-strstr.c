#include "main.h"

/**
 * *_strstr - locate a substring
 *
 * @haystack: string to perform search on
 * @needle: substring derived from search on @haystack
 *
 * Return: Pointer to the beginning of the located substring |
 * NULL if substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}

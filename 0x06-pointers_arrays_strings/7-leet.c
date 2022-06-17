#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 *
 * Return: s transformed
 */

char *leet(char *s)
{
	int i = 0, ii;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (ii = 0; ii <= 7; ii++)
		{
			if (s[i] == leet[ii] ||
					s[i] - 32 == leet[ii])
				s[i] = ii + '0';
		}

		i++;
	}

	return (s);
}

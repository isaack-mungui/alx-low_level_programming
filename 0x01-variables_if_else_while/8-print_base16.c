#include <stdio.h>
/*
 * main - main block
 * Description: Print all base 16 numbers,
 * followed by a new line.
 * Return 0
 */
int main(void)
{
	char x = '0', y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}


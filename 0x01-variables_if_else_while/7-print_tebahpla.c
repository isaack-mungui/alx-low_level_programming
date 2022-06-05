#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print lowercase
 * alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: print "_putchar\n"
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}

	return (0);
}

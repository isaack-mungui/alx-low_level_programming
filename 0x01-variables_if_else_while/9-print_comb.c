#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all
 * possible combinations
 * of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}


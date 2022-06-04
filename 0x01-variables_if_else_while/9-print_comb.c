#include <stdio.h>
#include <stdlib.h>
/*
 * main - main block
 * Description: print all
 * possible combinations
 * of single-digit numbers
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}


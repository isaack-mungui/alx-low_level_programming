#include <stdio.h>
/*
 * main - main block
 * Description: Print all single digit
 * numbers of base 10 starting from 0.
 * Return 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}

	printf("\n");

	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main: main block
 * Description: Prints all single digit numbers of base 1- starting from 0
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}

	printf('\n');
	return (0);
}

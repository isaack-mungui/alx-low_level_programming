#include <stdio.h>

/**
 * main - entry block
 * Description: Print 1 to 100 and return
 * Fizz, Buzz or FizzBuzz if conditions are met
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);

		if (i != 100)
			putchar(' ');
	}

	putchar('\n');
	return (0);
}

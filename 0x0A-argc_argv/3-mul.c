#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments passed
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);

			printf("%d\n", result);
		}
	} else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbeber of arguments
 * passed
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	} else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}

	return (0);
}

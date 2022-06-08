#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: print the alphabet
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}


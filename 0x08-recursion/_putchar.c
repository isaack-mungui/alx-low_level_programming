#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to be printed.
 *
 * Return: 1 on success | -1 on error, with errno
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

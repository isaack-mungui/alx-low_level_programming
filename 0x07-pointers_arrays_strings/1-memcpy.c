#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies n bytes from memory area
 * source to destination
 * @src: pointer to source memory area
 * @dest: pointer to destination memory area
 * @n: length of src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

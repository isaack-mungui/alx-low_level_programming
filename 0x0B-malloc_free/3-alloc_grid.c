#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D
 * array of integers.
 *
 * @width: x dimension of 2D array
 * @height: y dimension of 2D array
 *
 * Return: pointer to a 2D array of integers |
 * return NULL if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **two_dimension;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dimension = malloc(sizeof(int *) * height);

	if (two_dimension == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		two_dimension[height_index] = malloc(sizeof(int) * width);

		if (two_dimension[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(two_dimension[height_index]);

			free(two_dimension);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			two_dimension[height_index][width_index] = 0;
	}

	return (two_dimension);
}

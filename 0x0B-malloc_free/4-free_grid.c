#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the 2D grid create by the
 * alloc_grid function.
 *
 * @grid: 2D grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

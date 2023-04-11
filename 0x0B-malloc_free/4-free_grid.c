#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 *
 * @grid: 2D grid
 * @height: column length
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees the 2d array from memory
 * @grid: the 2d array
 * @height: size of the 2d array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

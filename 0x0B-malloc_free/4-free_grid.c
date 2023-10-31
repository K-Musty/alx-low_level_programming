#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the previous two dimensional array
 * @grid: 2 dimensional array
 * @height: rows
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}

#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

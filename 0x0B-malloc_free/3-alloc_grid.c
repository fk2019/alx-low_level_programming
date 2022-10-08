#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2 dimesional array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array, NULL on failure, NULL if widht/height = 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
		i++;
	}
	return (grid);
}

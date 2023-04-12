#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid already created
 * @grid: 2D array already created
 * @height: number of columns
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


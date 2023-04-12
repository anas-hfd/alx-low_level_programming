#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - 2 dimentional array allocation
 * @width: the columns of the 2d array
 * @height: the rows of the 2d array
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid);
				return (NULL);
			}
		}
	}
	return (grid);
}

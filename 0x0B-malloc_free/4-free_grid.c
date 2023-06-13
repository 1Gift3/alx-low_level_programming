#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *Free_grid - free 2d array
 *@grid:2d grid
 *@height:height of dimension grid
 *description:frees memory of the grid
 *Return: 0
 *
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

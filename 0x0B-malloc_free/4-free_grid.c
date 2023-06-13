#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *Free_grid - Free 2d array
 *@grid:2d grid
 *@height:height of the dimension grid
 *
 *description:frees memory of the grid
 *Return: 0
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

	{
		free(grid[a]);
	}
	free(grid);
}

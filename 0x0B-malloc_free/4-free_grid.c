#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: 2D grid
 * @height: dimension of grid
 * Return: nothing
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

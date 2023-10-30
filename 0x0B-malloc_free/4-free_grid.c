#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory of a 2D array
 * @grid: 2D grid to be freed
 * @height: height dimension of the grid
 *
 * Description: This function frees the memory allocated for a 2D array.
 * Return: None
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

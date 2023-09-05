#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the2D array
 * @grid: 2D grid
 * @height: Height parameters ofthe  grid
 * Description: frees memory of the grid
 * Return: nothing
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

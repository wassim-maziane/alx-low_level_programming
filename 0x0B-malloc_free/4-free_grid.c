#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees allocated grid
 * @grid: two dimensional grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}

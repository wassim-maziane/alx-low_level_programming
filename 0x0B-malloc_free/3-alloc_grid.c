#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int r, c, i;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (r = 0; r < heigth; r++)
		for (c = 0; c < widht; c++)
			grid[r][c] = 0;
	return (grid);
}
	

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function
 * @grid: 2D integer array
 * @height: grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free function
 * @grid: 1 input
 * @height: 2 input
 *
 * Return - void
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

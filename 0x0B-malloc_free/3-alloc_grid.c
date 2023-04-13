#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create grid
 * @width: 1 input
 * @height: 2 input
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(height * sizeof(int *));
	if (x == NULL)
	{
		printf("there is no space");
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(width * sizeof(int));
		if (x[i] == NULL)
		{
			printf("there is no space");
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
	for (i = 0; i < height; i++)
	{
		free(x[i]);
	}
	free(x);
}


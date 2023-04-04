#include "main.h"
#include <stdio.h>

/**
 *
 */
void print_diagsums(int a[size][size], int size)
{
	int i, j, x, y;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				x = x + a[i][j];
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				y = y + a[i][size - j -1];
			}
		}
	}
	printf("%d, %d\n", x , y);
}


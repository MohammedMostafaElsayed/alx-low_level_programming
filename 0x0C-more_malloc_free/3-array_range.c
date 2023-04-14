#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - range
 * @min: 1 input
 * @max: 2 input
 *
 * Return: poiner
 */
int *array_range(int min, int max)
{
	int *x;
	int a;

	if(min > max)
		return NULL;
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
		return NULL;
	for(a =0; a < (max - min + 1); a++)
	{
		*(x + a) = min + a;
	}
	return (x);
}

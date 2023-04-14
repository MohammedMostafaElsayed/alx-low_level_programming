#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - array
 * @nmemb: 1 input
 * @size: size of array
 *
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (size != 0 || nmemb != 0)
	{
		x = malloc(size * nmemb + 1);
		if (x == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				*(x + i) = 0;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (x);
}

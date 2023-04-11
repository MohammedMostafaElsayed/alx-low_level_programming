#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - array
 * @size: size of array
 * @c: input
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size != 0)
	{
		x = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			*(x + i) = c;
		}
	}
	else
	{
		x = '\0';
	}
	return (x);
}

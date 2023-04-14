#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(size * nmemb);
	if (x == NULL)
	{
		return (NULL);
	}
	memset(x, 0, size * nmemb);
	return (x);
}

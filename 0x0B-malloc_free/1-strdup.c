#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - array
 * @str: string
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int i;
	unsigned int size;

	size = strlen(str);
	if (*str != '\0')
	{
		x = malloc(size * sizeof(char));
		if (x == NULL)
		{
			return x;
		}
		else
		{
			for (i = 0; *(str + i); i++)
			{
				*(x + i) = *(str + i);
			}
		}
	}
	else
	{
		printf("failed to allocate memory");
	}
	return (x);
}

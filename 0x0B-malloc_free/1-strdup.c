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
	if (str == NULL)
	{
		 x = NULL;
	}
	else
	{
		x = malloc(size * sizeof(char) + 1);
			for (i = 0; *(str + i); i++)
			{
				*(x + i) = *(str + i);
			}
		
	}
	return (x);
}

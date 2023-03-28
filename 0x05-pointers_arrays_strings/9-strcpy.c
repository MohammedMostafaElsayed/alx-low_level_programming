#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copying the array
 * @dest: first input
 * @src: second input
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}

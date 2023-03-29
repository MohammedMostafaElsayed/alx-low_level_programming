#include "main.h"

/**
 * _strcat - concatination string
 * @dest: first input
 * @src: second input
 *
 * Return: char type
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (x = 0; *(src + x) != '\0'; x++)
	{
		*(dest + i + x) = *(src + x);
	}
	*(dest + i + x) = '\0';
	return (dest);
}

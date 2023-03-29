#include "main.h"

/**
 * _strncat - concatination string
 * @dest: first input
 * @src: second input
 * @n: 3th input
 *
 * Return: char type
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (x = 0; x < n && *(src + x) != '\0'; x++)
	{
		*(dest + i + x) = *(src + x);
	}
	*(dest + i + x) = '\0';
	return (dest);
}

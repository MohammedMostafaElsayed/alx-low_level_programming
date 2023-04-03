#include "main.h"
#include <string.h>

/**
 * _memcpy - put spacific char in memory
 * @dest: first input
 * @src: secend input
 * @n: thid input
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = strlen(src);
	while (i < n && *(src + i))
	{
		if ( l > n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i + l) = '\0';
		}
	}
	*dest = '\0';
	return (dest);
}

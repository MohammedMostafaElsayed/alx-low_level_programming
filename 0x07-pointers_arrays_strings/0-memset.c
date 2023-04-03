#include "main.h"
#include <string.h>

/**
 * _memset - put spacific char in memory
 * @s: first input
 * @b: secend input
 * @n: thid input
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

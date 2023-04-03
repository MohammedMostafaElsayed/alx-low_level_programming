#include "main.h"
#include "stddef.h"

/**
 * _strchar - locates char in str
 * @s: first input
 * @c: secend input
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

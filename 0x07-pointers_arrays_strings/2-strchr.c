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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

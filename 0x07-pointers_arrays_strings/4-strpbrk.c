#include "main.h"

/**
 * _strpbrk - return string
 * @s: first input
 * @accept: secend input
 *
 * Return: the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

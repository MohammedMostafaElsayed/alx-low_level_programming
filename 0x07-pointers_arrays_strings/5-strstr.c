#include "main.h"

/**
 * _strstr - return string
 * @haystack: first input
 * @needle: secend input
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *(needle); i++)
	{
		for (j = 0; *(haystack); j++)
		{
			if (*(needle + j) == *(haystack + i))
			{
				return (needle + i);
			}
		}
	}
	return ('\0');
}

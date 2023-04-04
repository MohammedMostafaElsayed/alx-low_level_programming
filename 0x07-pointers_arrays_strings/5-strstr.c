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
	while (*haystack)
	{
		while (*haystack && *needle && *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (!*needle)
		{
			return haystack;
		}

	}
	return ('\0');
}

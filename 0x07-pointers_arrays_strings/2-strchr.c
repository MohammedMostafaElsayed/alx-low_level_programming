#include "main.h"
#include "stdio.h"

/**
 *_strchr - locates char in string
 *@s: first input
 *@c: secend input
 *
 *Return: string value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

#include "main.h"
#include <string.h>

/**
 * _strspn - for the string
 * @s: first input
 * @accept: secend input
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;
	while (*(s + i) >= '\0')
	{
		if (*(s + i) == *accept)
		{
			x = i + 1;
			break;
		}
		i++;
	}
	return (x);
}

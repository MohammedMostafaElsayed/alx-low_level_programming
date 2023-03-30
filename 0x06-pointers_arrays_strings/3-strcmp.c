#include "main.h"

/**
 * _strcmp - copmare two str
 * @s1: first input
 * @s2: secend input
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int i;

	x = 0;
	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			x = *(s1 + i) - *(s2 + i);
		}
		break;
	}
	return (x);
}

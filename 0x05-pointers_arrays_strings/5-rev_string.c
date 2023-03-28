#include "main.h"

/**
 * rev_string - revesing
 * @s: input
 *
 * Return: no
 */
void rev_string(char *s)
{
	int i;
	int x;
	char j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	for (x = 0; x != i / 2; x++)
	{
		j = s[x];
		s[x] = s[i - x - 1];
		s[i - x - 1] = j;
	}
}

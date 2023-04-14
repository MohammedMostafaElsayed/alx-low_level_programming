#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - reurn sum of two string
 * @s1: 1 input
 * @s2: 2 input
 * @n: 3 input
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	x = malloc(((i + n) * sizeof(char)) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	else
	{
	for (j = 0; j > i; j++)
	{
		*(x + j) = *(s1 + j);
	}
	for (j = 0; j <= n; j++)
	{
		*(x + i + j) = *(s2 + j);
	}
	}
	return (x);
}

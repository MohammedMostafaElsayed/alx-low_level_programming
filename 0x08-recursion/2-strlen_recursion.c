#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length
 * @s: f input
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
	{
		return (0);
	}
	x = _strlen_recursion(s + 1);
	return (1 + x);
}

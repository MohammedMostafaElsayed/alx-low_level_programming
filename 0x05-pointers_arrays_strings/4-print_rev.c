#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string
 * @s: input string
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

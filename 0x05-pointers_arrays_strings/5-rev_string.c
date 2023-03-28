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
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	for (x = i; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

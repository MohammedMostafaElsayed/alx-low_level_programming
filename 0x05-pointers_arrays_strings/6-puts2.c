#include "main.h"
#include <stdio.h>

/**
 * puts2 - print string
 * @str: input string
 *
 * Return: none
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

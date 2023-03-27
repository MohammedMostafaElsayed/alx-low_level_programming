#include "main.h"

/**
 * puts_half - print half string
 * @str: is input
 *
 * Return: none
 */
void puts_half(char *str)
{
	int j;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
		i = (i - 1) / 2;
	for (j = i; *(str + j) != '\0'; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}

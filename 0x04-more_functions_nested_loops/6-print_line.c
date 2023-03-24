#include "main.h"

/**
 * print_line - draw
 * @n: input
 *
 * Return:none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

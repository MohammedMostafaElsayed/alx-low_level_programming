#include "main.h"

/**
 * print_diagonal - draw
 * @n: is input
 *
 * Return: non
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (x = 0; x <= i; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}

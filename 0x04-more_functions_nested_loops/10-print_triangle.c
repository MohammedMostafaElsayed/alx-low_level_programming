#include "main.h"

/**
 * print_triangle - draw
 * @size: is input
 *
 * Return: non
 */
void print_triangle(int size)
{
	int i;
	int x;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = i + 1; x < size; x++)
			{
				_putchar(' ');
			}
			for (z = 0; z < i + 1; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

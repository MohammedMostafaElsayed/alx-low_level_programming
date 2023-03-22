#include "main.h"

/**
 * print_times_table - prit multi number
 * @n: entry number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{

			_putchar(i*j + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
			

}


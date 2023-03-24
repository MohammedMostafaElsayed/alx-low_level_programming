#include "main.h"

/**
 * more_numbers - print more number
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int x;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			_putchar(x + '0');
		}
		for (z = 0; z < 5; z++)
		{
			_putchar(1 + '0');
			_putchar(z + '0');
		}
	_putchar('\n');
	}
}

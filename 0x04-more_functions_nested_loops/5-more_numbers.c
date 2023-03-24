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
		for (x = 0; x <= 14; x++)
		{
			z = x;
			if (z > 9)
			{
				_putchar(1 + '0');
				z = z % 10;
			}
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}

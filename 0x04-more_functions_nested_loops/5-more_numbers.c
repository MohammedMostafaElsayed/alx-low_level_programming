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
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}
		_putchar('\n');
	}
}

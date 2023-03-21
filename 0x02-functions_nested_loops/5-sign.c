#include "main.h"

/**
 * print_sign - Print the sign and number
 * @n: is input
 *
 * Return: this function return 1 if + , 0 if 0 , -1 if -
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	else
	{
		_putchar('0');
		x = 0;
	}
	return (x);
}

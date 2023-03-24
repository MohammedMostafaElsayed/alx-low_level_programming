#include "main.h"

/**
 * print_number - print int 
 * @n: is input
 *
 * Return: non
 */
void print_number(int n)
{

	if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

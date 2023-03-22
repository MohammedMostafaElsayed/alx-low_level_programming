#include "main.h"
/**
 * print_last_digit - print last num
 * @n: is number that print it
 *
 * Return: the lst nmber
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	_putchar(x + '0');
	return (x + '0');
}

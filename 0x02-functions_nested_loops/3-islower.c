#include "main.h"

/**
 * _islower - function for check number or char
 * c is char to print
 *
 * Return: 1 (is number) 0 (otherwise)
 */
int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}

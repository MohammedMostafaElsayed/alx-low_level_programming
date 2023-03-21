#include "main.h"

/**
 * _abs - Print the abslute value
 * @n: is the number
 *
 * Return: the abslute value
 */
int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = -n;
	}
	else
	{
		x = n;
	}
	return (x);
}

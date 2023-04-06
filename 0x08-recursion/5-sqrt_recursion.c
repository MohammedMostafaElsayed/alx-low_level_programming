#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: input
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i, x;

	i = 0;
	x = 0;
	if (x != n)
	{
		x = i * i;
		_sqrt_recursion(n);
		i++;
	}
	return (i - 1);
}

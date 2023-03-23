#include "main.h"

/**
 * _isdigit - check for digit
 * @c: is input nuber
 *
 * Return: return 1 for digit
 */
int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}

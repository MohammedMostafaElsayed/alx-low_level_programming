#include "main.h"

/**
 * _isalpha - function for check number or char
 * @c: is char to print
 *
 * Return: 1 (is char) 0 (otherwise)
 */
int _isalpha(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}

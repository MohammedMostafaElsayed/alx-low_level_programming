#include "main.h"

/**
 * clear_bit - set spacifc bit
 * @n: f input
 * @index: s input
 *
 * Return: 1 if success -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(*n) * 8)
		return (-1);
	mask = 1 << index;
	*n = (*n & ~mask);
	return (1);
}

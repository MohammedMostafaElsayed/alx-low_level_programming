#include "main.h"

/**
 * flip_bits - filped
 * @n: f mem
 * @m: s mem
 *
 * Return: number of changes
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count;

	count = 0;
	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if (!((n & 1) == (m & 1)))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

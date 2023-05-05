#include "main.h"

/**
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask, shifted;

	mask = n << index;



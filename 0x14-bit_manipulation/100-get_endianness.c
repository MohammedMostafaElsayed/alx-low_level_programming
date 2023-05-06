#include "main.h"

/**
 * get_endianness - bit order
 *
 * Return: int
 */
int get_endianness(void)
{
	int x = 0x1234;
	char *y;

	y = (char *)&x;
	if (*y == 0x12)
		return (0);
	else if (*y == 0x34)
		return (1);
	return (0);
}

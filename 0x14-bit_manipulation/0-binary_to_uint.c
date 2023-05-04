#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: 1 mem
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i, len, mul;

	if (b == NULL || *b == '\0')
		return (0);
	len = strlen(b);
	x = *(b + len - 1) - 48;
	mul = 1;
	for (i = 1; i < len; i++)
	{
		mul *= 2;
		if (*(b + len - i - 1) == 49)
		{
			x += mul;
		}
		else if (*(b + len - i - 1) > 49)
		{
			x = 0;
			break;
		}
	}
	return (x);
}

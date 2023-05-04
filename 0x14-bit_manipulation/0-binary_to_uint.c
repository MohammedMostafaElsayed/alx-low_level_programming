#include "main.h"

/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	x = *(b + len - 1) - 48;
	for (i = 1; i < len; i++)
	{
		if (*(b + len - i - 1) == 1)
		{
			x += pow(2, i);
		}
		else if (*(b + len - i - 1) > 49)
		{
			x = 0;
			break;
		}
	}
	return (x);
		
}

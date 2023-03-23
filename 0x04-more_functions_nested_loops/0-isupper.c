#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: is input char
 *
 * REturn: return 1 for upper
 */
int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}	
	return (x);
}

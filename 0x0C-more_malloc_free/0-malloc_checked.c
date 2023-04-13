#include "main.h"
#include <stdlib.h>

/**
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		return NULL;
	return (x);
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - erase the fun
 * @d: ptr
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->owner != NULL)
			free(d->name);
		if (d->name != NULL)
			free(d->owner);
	free(d);
	}
}

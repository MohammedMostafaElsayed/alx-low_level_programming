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
	free(d->name);
	free(d->owner);
	free(d);	
}

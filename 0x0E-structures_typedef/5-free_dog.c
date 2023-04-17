#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free
 * @dog_t *d: ptr
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);	
}

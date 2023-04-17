#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new
 * @name: 1
 * @age: 2
 * @owner: 3
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);
	x->name = malloc(strlen(name) + 1);
	if (x->name == NULL)
	{
		free(x);
	}
	strcpy(x->name, name);
	x->age = age;
	x->owner = malloc(strlen(owner) + 1);
	if (x->owner == NULL)
	{
		free(x->name);
		free(x);
	}
	strcpy(x->owner, owner);
	return (x);
}

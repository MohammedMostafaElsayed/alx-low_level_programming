#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

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
	char *a, *b;
	
	a = name;
	b = owner;
	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);
	x->name = a;
	if (x->name == NULL)
	{
		free(x->name);
	}
	x->age = age;
	if (x->age < 0)
	x->owner = b;
	if (x->owner == NULL)
		free(x->owner);
	return (x);
}

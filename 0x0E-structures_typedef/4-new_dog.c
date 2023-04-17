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
	{
		return NULL;
	}
	else
	{
	x->name = a;
	x->age = age;
	x ->owner = b;
	}
	return (x);
}

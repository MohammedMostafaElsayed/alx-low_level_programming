#include "dog.h"
#include <stdio.h>

/**
* print_dog - print element
* @d: pointer
*
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age > 0)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, "(nil)",				 d->owner);
		return;
	}
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


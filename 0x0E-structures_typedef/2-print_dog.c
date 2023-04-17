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
		printf("Name: (nil)"\n);
	else
		printf("Name: %s\n", d->name);
	if (a->age >= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", a->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner)
	

}


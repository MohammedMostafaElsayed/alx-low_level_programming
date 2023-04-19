#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this fun print name
 * @name: 1mem
 * @f: secend mem
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ( f != NULL)
		(*f)(name);
	else
		return;
}

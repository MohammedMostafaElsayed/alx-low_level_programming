#include "main.h"
#include <stdio.h>

/**
 * set_string - set string to another
 * @s: f input
 * @to: s input
 *
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}

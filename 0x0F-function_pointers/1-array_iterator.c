#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print array
 * @array: f mem
 * @size: 2 mem
 * @action: 3 mem
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "function_pointers.h"
/**
 * int_index - return index of array
 * @array: 1 mem
 * @size: 2 mem
 * @cmp: 3 mem
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}




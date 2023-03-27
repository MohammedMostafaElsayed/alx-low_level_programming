#include "main.h"

/**
 * swap_int - swap two integer
 * @a: is first int
 * @b: is secend int
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

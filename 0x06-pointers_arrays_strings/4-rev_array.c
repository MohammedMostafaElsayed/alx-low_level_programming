#include "main.h"

/**
 * reverse_array
 * @a: f input
 * @n: num of element
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n / 2; i++)
	{
		x = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = x;
	}
}

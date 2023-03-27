#include "main.h"
#include <stdio.h>

/**
 * Print_array - array print n number
 * @a: is input
 * @n: input
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	do
	{
		printf("%d\n", *(a + i));
	}
	while (i < n);
	{
		if (i != (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
			printf("%d\n", *(a + i));
	i++;
	}
}


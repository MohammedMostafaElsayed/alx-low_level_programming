#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print table
 * @n: is input
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n == 0)
			{
				printf("%d", i * j);
				continue;
			}
			if (j == 0)
			{
				printf("%d,", i * j);
			}
			else if (j < n)
			{
				printf("%4d,", i * j);
			}
			else
			{
				printf("%4d", i * j);
			}

		}
		printf("\n");
	}
	}
}

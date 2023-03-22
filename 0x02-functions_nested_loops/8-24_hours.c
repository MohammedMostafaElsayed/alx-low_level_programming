#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print the time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}

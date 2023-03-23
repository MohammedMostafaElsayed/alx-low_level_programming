#include "main.h"
#include<stdio.h>
/**
 * positive_or_negative - Entry point
 * @i: is input var
 *
 * Return: no return
 */
void positive_or_negative(int i)
{
	i = 0;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	} else if (i < 0)
	{
		printf("%i is negative\n", i);
	} else
	{
		printf("%i is zero\n", i);
	}
}

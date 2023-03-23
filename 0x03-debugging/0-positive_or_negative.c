#include "main.h"
#include<stdio.h>
/**
 * positive_or_negative - Entry point
 * @n: is input var
 *
 * Return: no return
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		n = 0;
		printf("%i is zero\n", n);
	} else if (n < 0)
	{
		printf("%i is negative\n", n);
	} else
	{
		printf("%i is zero\n", n);
	}
}

#include "main.h"

/**
 * is_prime_number - prime
 * @n: input
 *
 * Return
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (i < n)
	{
		if (n % i != 0 && n % 1 == 0 && n % n == 0)
		{
			i++;
			return 1 + is_prime_number(n);
		}
		return (0);
	}
	return (0);
}

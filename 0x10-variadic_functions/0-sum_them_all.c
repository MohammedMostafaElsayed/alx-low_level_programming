#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - summ all
 * @n: 1 mem
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}


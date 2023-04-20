#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numb
 * @separator: 1 mem
 * @n: 2 mem
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d", va_arg(x, int));
		}
		else
		{
			printf("%d%s", va_arg(x, int), separator);
		}
	}
	printf("\n");
	va_end(x);
}

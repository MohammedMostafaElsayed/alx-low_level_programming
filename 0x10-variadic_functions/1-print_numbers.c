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
	int i;
	va_list x;

	va_start(x,n);
	for(int i = 0; i < n; i++)
	{
		if (i == n-1)
		{
			printf("%d\n", va_arg(x, int));
			return;
		}
		if (separator == NULL)
		{
			printf("%d ", va_arg(x, int));
		}
		else
		{
			printf("%d%c ", va_arg(x, int), *separator);
		}
	}
	va_end(x);
}

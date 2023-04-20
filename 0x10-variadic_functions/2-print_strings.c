#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: 1 mem
 * @n: 2 mem
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;
	char *w;

	va_start(x,n);
	for(i = 0; i < n; i++)
	{
		w = va_arg(x, char *);
		if (i == n-1)
		{
			printf("%s\n", w ? w : "(nil)");
			return;
		}
		if (separator == NULL)
		{
			printf("%s", w ? w : "(nil)");
		}
		else
		{
			printf("%s%s", w ? w : "(nil)", separator);
		}
	}
	va_end(x);
}

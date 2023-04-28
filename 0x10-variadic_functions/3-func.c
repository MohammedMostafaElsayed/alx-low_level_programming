#include "variadic_functions.h"

/**
 */
void _char(char *s, va_list x)
{
	printf("%s%c ", s, va_arg(x, int));
}
/**
 */
void _int(char *s, va_list x)
{
        printf("%s%d ", s, va_arg(x, int));
}
void _float(char *s, va_list x)
{
        printf("%s%f ", s, va_arg(x, int));
}
void _string(char *s, va_list x)
{
	if(x == null)
		printf("%s%d ", s, "(ni;)");
        printf("%s%s ", s, va_arg(x, char *));



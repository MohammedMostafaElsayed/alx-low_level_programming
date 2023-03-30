#include "main.h"

/**
 * tring_toupper - change to upper
 * @s: input string
 *
 * Return: chare string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}

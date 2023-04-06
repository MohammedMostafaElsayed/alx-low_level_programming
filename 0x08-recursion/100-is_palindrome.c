#include "main.h"
#include <string.h>

/**
 * is_palindrome - returb pal string
 * @s: input
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s);
	l = l - 1;
	if(l <= 1) 
	{
		return (1);
	}
	if(s[0] == s[l - 1])
	{

		is_palindrome(s + 1);
	}
	else
	{
		return (0);
	}
	return (0);
}

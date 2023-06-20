#include "main.h"

/**
* _strlen - length of string
* @s: char input
*
* Return: return the length
*/
int _strlen(char *s)
{
	int x;
	int i;

	x = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		x++;
	}
	return (x);
}

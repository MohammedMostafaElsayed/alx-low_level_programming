#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatinate argument
 * @ac: 1 input
 * @av: 2 input
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *x;
	int i;

	if (ac == 0 || av == 0)
	       return (NULL);
	x = malloc(ac * sizeof(char*));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		x[i] = *av[i];
	}
	return (x);
}

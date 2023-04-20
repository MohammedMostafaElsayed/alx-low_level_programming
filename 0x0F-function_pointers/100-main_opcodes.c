#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: 1 mem
 * @argv: 2 mem
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;
	unsigned char *x;

	(void) argc;
	x = (unsigned char *) &main;
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x ", (*x + i));
	}
	return (0);
}

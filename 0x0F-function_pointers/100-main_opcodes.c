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
	int i, y;
	unsigned char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
                exit(2);
	}
	x = (unsigned char *) &main;
	for (i = 0; i < y; i++)
	{
		printf("%02x ", (*x + i));
	}
	return (0);
}

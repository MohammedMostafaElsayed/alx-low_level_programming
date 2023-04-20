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
	char *x;

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
	x = (char *)main;
	for (i = 0; i < y; i++)
	{
		if(i == y - 1)
		{
			printf("%02hhx\n ", *(x + 1));
			break;
		}
		printf("%02hhx ", *(x + i));
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: 1
 * @argv: 2
 *
 * Return: none
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	return (0);
}

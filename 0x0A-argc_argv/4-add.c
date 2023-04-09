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
	int i, sum;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}

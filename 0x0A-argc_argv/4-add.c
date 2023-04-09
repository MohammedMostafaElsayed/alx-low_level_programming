#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: 1
 * @argv: 2
 *
 * Return: none
 */
int main(int argc, char *argv[])
{
	int i, sum, j;

	sum = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}

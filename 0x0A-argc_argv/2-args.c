#include <stdio.h>

/**
 * main - entry point
 * @argc: 1 input
 * @argv: 2 input
 *
 * Return: none
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

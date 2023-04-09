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
	int i, sum;
	int x;
	int s[] = {25, 10, 5, 2, 1};

	sum = 0;
	if (argc == 2)
	{
		x = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (x >= s[i])
			{
				sum += x / s[i];
				x = x % s[i];
				if (x % s[i] == 0)
				{
					break;
				}
			}
			else if (x < 0)
			{
				printf("%d\n", sum);
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);


}

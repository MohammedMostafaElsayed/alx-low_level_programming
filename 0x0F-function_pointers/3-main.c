#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry
 * @argc: 1
 * @argv: 2
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int x, y, i;
	char *v;
	char *w;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	w = "+, -, *, /, %";
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	v = argv[2];
	if ((*v == '/' || *v == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	for (i = 0; *(w + i); i++)
        {
        if (*v == *(w + i))
        {
                printf("%d\n", get_op_func(v)(x, y));
		break;
        }
        else
        {
                printf("Error\n");
                exit(99);
        }
        }


	return (0);
}

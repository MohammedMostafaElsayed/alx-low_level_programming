#include "main.h"

/**
 * main - entry point
 * @argc: first argument
 * @argv: seconed argument
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int x, y;
	int r, w;
	int c1, c2;
	char rr[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(argv[1], O_RDONLY);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(x, rr, sizeof(rr))) > 0)
	{
		w = write(y, rr, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c1 = close(x);
	c2 = close(y);
	check(c1, c2);
       	return (0);
}

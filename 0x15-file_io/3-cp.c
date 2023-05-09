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
	int x, y, r, w, c1, c2;
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
		if (write(y, rr, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
if (close(x) != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
exit(100);
}
if (close(y) != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
exit(100);
}
	return (0);
}

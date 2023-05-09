#include "main.h"

/**
 * check - entry
 * @c1: 1
 * @c2: 2
 * @x: 3
 * @y: 4
 *
 * Return: void
 */
void check(int c1, int c2, int x, int y)
{
if (c1 != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
exit(100);
}
if (c2 != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
exit(100);
}
}
/**
* main - entry point
* @argc: first argument
* @argv: seconed argument
*
* Return: int
*/
int main(int argc, char **argv)
{
	int x, y, r;
	char rr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
	check(close(x), close(y), x, y);
	return (0);
}

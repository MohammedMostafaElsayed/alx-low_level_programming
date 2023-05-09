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
	char rr[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(argv[1], O_RDONLY);
	if (x < 0)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (y < 0)
	{
		printf("Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	while ((r = read(x, rr, sizeof(rr))) > 0)
	{
		w = write(y, rr, r);
		if (w != r)
		{
			printf("Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	close(x);
	close(y);
	/**if (e1 == -1 || e2 == -1)
	{
		printf("Error: Can't close fd FD_VALUE\n");
		exit(100);
	}*/
	return (0);
}

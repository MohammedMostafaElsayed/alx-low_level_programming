#include "main.h"

/**
 * read_textfile - read from file
 * @filename: name
 * @letters: number of litters
 *
 * Return: number of litters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t	size;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		printf("the error ocired");
		return (0);
	}
	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	size = read(fd, buf, letters);
	printf("%s", buf);
	close(fd);
	return (size);
}

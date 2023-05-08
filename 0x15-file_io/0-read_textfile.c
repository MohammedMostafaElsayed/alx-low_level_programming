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
	ssize_t	size, w;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	size = read(fd, buf, letters);
	if (size < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	w = write(1, buf, size);
	if ( w < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (size);
}

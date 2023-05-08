#include "main.h"

/**
 * create_file - create file
 * @filename: name
 * @text_content: content
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int x, y;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "\0";
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x < 0)
	{
		return (-1);
	}
	y = write(x, text_content, (int)strlen(text_content));
	if (y < 0)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}

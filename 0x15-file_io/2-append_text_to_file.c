#include "main.h"

/**
 * append_text_to_file - add to file
 * @filename: name
 * @text_content: string
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "\0";
	x = open(filename, O_WRONLY | O_APPEND, 0664);
	if (x < 0)
	{
		close(x);
		return (-2);
	}
	y = write(x, text_content, (int)strlen(text_content));
	if (y < 0)
	{
		close(x);
		return (-3);
	}
	close(x);
	return (1);
}

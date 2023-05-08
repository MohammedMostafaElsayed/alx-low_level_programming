#include "main.h"

/**
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "\0";
	x = open(filename, O_APPEND, S_IRUSR | S_IWUSR);
	if (x < 0)
	{
		close(x);
		return (-1);
	}
	y = write(x, text_content, (int)strlen(text_content));
	if (y < 0)
	{
		close(x);
		return (-1);
	}
	return (1);
}

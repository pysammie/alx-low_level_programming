#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1(Success) -1(Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));

		if (w == -1)
			return (-1);
	}

	close(fd);

	return (-1);
}

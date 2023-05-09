#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1(Success) or -1(Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_toappend, fd_toread;

	if (filename == NULL)
		return (-1);

	fd_toappend = open(filename, O_WRONLY | O_APPEND);

	if (fd_toappend == -1)
		return (-1);

	if (write(fd_toappend, text_content, strlen(text_content)) == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd_toread = open(filename, O_RDONLY);

		if (fd_toread == -1)
			return (-1);

		close(fd_toread);
		return (1);
	}

	close(fd_toappend);

	return (1);
}

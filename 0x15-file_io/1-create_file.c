#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content - file content
 *
 * Return: 1(Success) or -1(Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (fd != -1)
	{
		if (text_content != NULL)
		{
			write(fd, text_content, strlen(text_content));
			return (1);
		}
	}
	close (fd);

	return (1);
}

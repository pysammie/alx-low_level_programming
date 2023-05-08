#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a textfile and prints it to
 * POSIX standard output
 *
 * @filename: name of file
 * @letters: no of letters it should read/print
 *
 * Return: no of letters read/printed or 0 (Failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char buffer[5000];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (fd != -1)
	{
		n = read(fd, buffer, letters);
		if (n > 0)
			write(STDOUT_FILENO, buffer, n);
		else
			return (0);
	}

	close(fd);

	return (n);
}

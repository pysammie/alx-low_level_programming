#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void error_handle(int, int, char **);
/**
 * main - program copies one file to another
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t char_rdwr;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_handle(file_from, file_to, av);

	char_rdwr = 1024;
	while ((char_rdwr = read(file_from, buffer, 1024)) > 0)
	{
		if (char_rdwr == -1)
			error_handle(-1, 0, av);

		char_rdwr = write(file_to, buffer, char_rdwr);

		if (char_rdwr == -1)
			error_handle(0, -1, av);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * error_handle - handles error in reading from file or writing to file
 *
 * @file_from: fd of file to be read from
 * @file_to: fd of file to be written to
 * @av: array of filenames
 */
void error_handle(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
}

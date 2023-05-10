#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

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
	int file_from, file_to, file_close;
	ssize_t char_rdwr;
	char buffer[1024];

	if (ac != 3)
	{	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97); }
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98); }
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }

	while ((char_rdwr = read(file_from, buffer, 1024)) > 0)
	{
		if (char_rdwr == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
			exit(98); }
		char_rdwr = write(file_to, buffer, char_rdwr);

		if (char_rdwr == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	if (char_rdwr == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[0]);
		exit(98); }
	if (close(file_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100); }

	if (close(file_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100); }
	return (0);
}

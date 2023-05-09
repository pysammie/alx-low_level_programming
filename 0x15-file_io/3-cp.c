#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int cp(const char *file_from, const char *file_to);
/**
 * main - program
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	res = cp(av[1], av[2]);

	if (res == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (res == -2)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	printf("-> %i)\n", res);
	return (0);
}

/**
 * cp - copies one textfile to another
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: int
 */
int cp(const char *file_from, const char *file_to)
{
	int o, w, close_readfile, close_writefile;
	ssize_t char_read, char_cp;
	char buffer[1024];

	o = open(file_from, O_RDONLY);
	w = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (o == -1)
		return (-1);

	char_read = 1024;
	while (char_read == 1024)
	{
		char_read = read(o, buffer, 1024);
		if (char_read == -1)
			return (-1);

		char_cp = write(w, buffer, char_read);
		if (char_cp == -1)
		return (-2);
	}

	close_readfile = close(o);
	close_writefile = close(w);
	if (close_readfile == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	if (close_writefile == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", w);
		exit(100);
	}

	return (1);
}

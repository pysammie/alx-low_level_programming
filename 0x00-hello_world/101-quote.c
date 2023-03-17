#include <unistd.h>

/**
 * main - Entry point
 *
 * write prints with a file descriptor of 1
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
}

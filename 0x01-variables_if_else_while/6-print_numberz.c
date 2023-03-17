#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers 0 - 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

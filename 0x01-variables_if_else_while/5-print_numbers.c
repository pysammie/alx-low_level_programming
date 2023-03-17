#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints nos 1 - 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char number[] = "0123456789";
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(number[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

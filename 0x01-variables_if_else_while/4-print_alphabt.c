#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alphabets a - z without q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha_missing[] = "abcdfghijklmnoprstuvwxyz";

	int i;
	i = 0;
	while (i < 24)
	{
		putchar(alpha_missing[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_BET[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (i < 52)
	{
		putchar(alpha_BET[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

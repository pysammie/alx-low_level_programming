#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alphabets in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha_reverse[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	i = 0;
	while (i < 26)
	{
		putchar(alpha_reverse[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

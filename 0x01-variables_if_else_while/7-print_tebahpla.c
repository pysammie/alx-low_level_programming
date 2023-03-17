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
	char c;

	c = "z";
	while (c >= "a")
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

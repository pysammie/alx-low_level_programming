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
	char numberz[] = "0123456789";
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(numberz[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

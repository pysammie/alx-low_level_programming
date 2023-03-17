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
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf('\n');
	return (0);
}

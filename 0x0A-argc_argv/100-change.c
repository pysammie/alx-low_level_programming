#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum no of coins for change
 *
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, i, count;
	int value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (cents < 1)
		{
			count += 0;
			break;
		}
		if (cents >= value[i])
		{
			count += cents / value[i];
			cents = cents % value[i];
		}
	}
	printf("%d\n", count);
	return (0);
}

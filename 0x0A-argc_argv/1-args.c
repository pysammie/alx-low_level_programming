#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

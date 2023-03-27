#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\n'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

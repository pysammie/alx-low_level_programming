#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet 10times
 *
 * _putchar prints letters to stdout
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

#include "main.h"

/**
 * print_alphabet - prints letters in lowercase
 *
 * _putchar prints letters to stdout
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}

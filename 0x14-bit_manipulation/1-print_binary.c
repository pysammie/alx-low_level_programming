#include "main.h"

/**
 * print_binary - prints a given number in binary
 *
 * @n: given no
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

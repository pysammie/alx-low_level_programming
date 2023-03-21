#include "main.h"

/**
 * _abs - Prints the absolute value of integer
 *
 * @n: value of integer
 *
 * Return: int
 */
int _abs(int n)
{
	int n;
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar(i);
	}
	else
		_putchar(n);
}

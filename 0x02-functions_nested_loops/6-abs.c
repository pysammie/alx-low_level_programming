#include "main.h"

/**
 * _abs - Prints the absolute value of integer
 *
 * @int: value of integer
 *
 * Return: int
 */
int _abs(int)
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

#include "main.h"

/**
 * clear_bit - sets bit at given position to 0
 *
 * @n: number
 * @index: index
 *
 * Return: 1 (Success) -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

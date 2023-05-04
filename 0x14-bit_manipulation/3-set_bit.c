#include "main.h"

/**
 * set_bit - sets bit at guven index to 1
 *
 * @n: number
 * @index: index
 *
 * Return: 1 (Success) or -1 (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	
	if (index > 63)
		return (-1);

	mask = (1 << index);
	*n = *n | mask;

	return (1);
}

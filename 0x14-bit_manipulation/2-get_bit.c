#include "main.h"

/**
 * get_bit - gets bit at a given index
 *
 * @n: number
 * @index: Index
 *
 * Return: bit at index or -1 (Error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = (n >> index) & 1;

	return (bit_value);
}

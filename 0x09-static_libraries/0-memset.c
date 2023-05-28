#include "main.h"

/**
 * _memset - fills memory area with constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: amount of byte to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination area
 * @src: source area
 * @n: amount of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

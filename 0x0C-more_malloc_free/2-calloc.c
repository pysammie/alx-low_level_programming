#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - dynamically allocate memory
 *
 * @nmemb: number of elements
 * @size: size
 *
 * Return: pointer to allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	ptr = memset(ptr, 0, nmemb);

	return (ptr);
}


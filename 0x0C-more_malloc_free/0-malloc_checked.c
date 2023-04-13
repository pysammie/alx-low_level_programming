#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of allocated memory
 *
 * Return: 0 (Success)
 * exit: 98 (Fail)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

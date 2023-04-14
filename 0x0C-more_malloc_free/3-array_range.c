#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, array_length;

	if (min > max)
		return (NULL);

	array_length = (max - min) + 1;
	ptr = malloc(sizeof(int) * array_length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < array_length; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}

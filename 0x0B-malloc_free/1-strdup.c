#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 *
 * @str: string
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	int i, n;
	char *ptr;

	if (str == NULL)
		return (NULL);

	n = 0;
	for (i = 0; str[i]; i++)
		n++;

	ptr = (char *)malloc((sizeof(char) * n) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}

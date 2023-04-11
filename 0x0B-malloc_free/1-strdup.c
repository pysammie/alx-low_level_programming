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

	n = 0;
	for (i = 0; str[i] != '\0'; i++)
		n++;

	ptr = (char *)malloc(sizeof(char) * n);

	if (n == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program to a new string
 *
 * @ac: argument counter
 * @av: array of arguments
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, n, k;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	n = 0;
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		}
	}
	n += ac;

	ptr = (char *)malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')
		{
			ptr[k++] = '\n';
		}
	}
	return (ptr);
}

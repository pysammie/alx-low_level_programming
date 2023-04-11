#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n1, n2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = 0;
	n2 = 0;
	for (i = 0; s1[i]; i++)
		n1++;

	for (i = 0; s2[i]; i++)
		n2++;

	ptr = (char *)malloc(sizeof(char) * (n1 + n2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= n1; i++)
	{
		if (i != n1)
			*(ptr + i) = s1[i];

		else
		{
			for (j = 0; j <= n2; j++)
			{
				*(ptr + i + j) = s2[j];
			}
		}
	}	
	return (ptr);
}

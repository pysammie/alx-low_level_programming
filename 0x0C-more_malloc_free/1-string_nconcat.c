#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings to a new string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n < len_s2)
		len_s2 = n;

	ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';
	return (ptr);
}

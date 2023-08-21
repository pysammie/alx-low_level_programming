#include "main.h"

/**
 * _strstr - searches for a substring in a string
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
				&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
			{
				break;
			}
			k++;
		}
		if (needle[j + k] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
		j++;
	}
	return (0);
}

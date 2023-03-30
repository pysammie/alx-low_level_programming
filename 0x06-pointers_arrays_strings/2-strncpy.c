#include "main.h"

/**
 * _strncpy - copies n characters from one string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: amount of characters to be copied
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_dest;
	int len_src;

	len_dest = 0;
	len_src = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len_src++;
	}

	if (n >= len_src)
	{
		if (n < len_dest)
		{
			for (i = 0; i < len_src; i++)
			{
				dest[i] = src[i];
			}
			for (i = len_src; i < n; i++)
			{
				dest[i] = '\0';
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

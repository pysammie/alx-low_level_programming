#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to the other
 *
 * @dest: destination string
 * @src: source string
 * @n: amount of characters in bytes
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest;
	int len_src;

	len_dest = 0;
	len_src = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i] != '\0'; i++)
		len_src++;
	if (n <= len_src)
	{
		for (i = 0; i < n; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i <= len_src; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}
	return (dest);
}

#include "main.h"

/**
 * _strcat - appends one string to the other
 *
 * @dest: string that gets appended to
 * @src: string to append from
 *
 * Return: pointer to character
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}

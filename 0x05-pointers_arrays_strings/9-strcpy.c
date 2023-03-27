#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: destination array
 * @src: source array
 * Return: destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

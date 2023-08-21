#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: string or 0 if no matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}

#include "main.h"

/**
 * _strspn - checks the length of substring
 *
 * @s: string
 * @accept: substring
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}

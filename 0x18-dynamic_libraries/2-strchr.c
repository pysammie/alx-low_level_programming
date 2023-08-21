#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		else if (s[i + 1] == c)
		{
			s = &s[i + 1];
			return (s);
		}
	}
	return ('\0');
}

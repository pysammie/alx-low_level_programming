#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = (count - 1); i >= 0; i--)
		_putchar(s[i]);
}

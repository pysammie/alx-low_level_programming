#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int count;
	char rev;

	count = 0;
	rev = s[0];
	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: String
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = (n + 1); i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}


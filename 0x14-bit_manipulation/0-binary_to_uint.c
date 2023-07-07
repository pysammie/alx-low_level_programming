#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string containing binary
 *
 * Return: unsigned int or 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n;
	unsigned int sum = 0;
	int powvalue = 1;

	if (b == NULL)
		return (0);

	n = strlen(b);
	for (i = (n - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			sum += powvalue;
		}
		powvalue *= 2;
	}
	return (sum);
}

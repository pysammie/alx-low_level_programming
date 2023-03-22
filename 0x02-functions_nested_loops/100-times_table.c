#include "main.h"

/**
 * print_times_table - prints multiplication table
 *
 * @n: Parameter
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				k = j * i;
				if (j == 0)
					_putchar(k + '0');
				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
		;
}

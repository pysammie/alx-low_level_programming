#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	int largest;

	i = 972;
	j = -98;
	k = 0;

	largest = largest_number(i, j, k);

	printf("%d is the largest number\n", largest);
	return (0);
}

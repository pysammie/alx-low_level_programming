#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 *
 * @c: parameter to be checked
 *
 * Return: 1 (Success),
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}

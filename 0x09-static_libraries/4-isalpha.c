#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: Parameter to be checked
 *
 * Return: 1 (SUccess)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

#include "main.h"

int check_ispalindrome(char *s, int left, int len);
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 (Success) or 0 (Failure)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_ispalindrome(s, 0, _strlen_recursion(s)));
}
/**
 * check_ispalindrome - checks if string is palindrome
 *
 * @s: string
 * @left: integer
 * @len: integer
 *
 * Return: 1 (Success) or 0 (Failure)
 */
int check_ispalindrome(char *s, int left, int len)
{
	if (*(s + left) != *(s + len - 1))
		return (0);

	if (left >= len)
		return (1);

	return (check_ispalindrome(s, ++left, --len));
}
/**
 * _strlen_recursion - returns length of string
 *
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

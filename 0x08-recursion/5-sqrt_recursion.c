#include "main.h"

int _check_sqrt_recursion(int, int);
/**
 * _sqrt_recursion - returns square root of number
 *
 * @n: number
 *
 * Return: -1 (Error) or int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_check_sqrt_recursion(n, 0));
}

/**
 * _check_sqrt_recursion - checks if a number has natural
 * square root, returns squareroot
 *
 * @n: number
 * @x: squareroot
 *
 * Return: -1 (Error) or int
 */
int _check_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (_check_sqrt_recursion(n, x + 1));
}

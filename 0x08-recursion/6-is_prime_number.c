#include "main.h"

int check_is_prime(int, int);
/**
 * is_prime_number - returns 1 if primenumber 0 if not
 *
 * @n: integer
 *
 * Return: 0 (Not prime) 1 (prime)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (check_is_prime(n, 2));
}
/**
 * check_is_prime - checks if primenumber
 *
 * @n: number
 * @x: integer
 *
 * Return: 0 (Not prime) 1 (prime)
 */
int check_is_prime(int n, int x)
{
	if (n != x && n % x == 0)
		return (0);
	else if (n != x)
		return (check_is_prime(n, x + 1));
	else
		return (1);
}

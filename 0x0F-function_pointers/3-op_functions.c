#include "3-calc.h"

/**
 * op_add - Adds 2 numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference between 2 numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division between a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division between a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"

/**
 *  root_square - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1, on error, -1 is returned
 */

int root_square(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (root_square(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: The root number
 */

int _sqrt_recursion(int n)
{
	return (root_square(n, 1));
}

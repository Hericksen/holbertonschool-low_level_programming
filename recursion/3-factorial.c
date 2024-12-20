#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number checked for fact
 * Return: 1 if n = 1, -1 if n < 0 and return the factorial of n in other case
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

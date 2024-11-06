#include "main.h"

/**
 * check_prime - check if the number is a prime number
 * @n: number checked
 * @i: calculate if he can be divided by itself or not
 * Return: recursively check all posibilities
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 2));
}

/**
 * is_prime_number - prints the prime number
 * @n: number checked
 * Return: recursively the check function starting by divided by 3
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (0);

	return (check_prime(n, 3));
}

#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @d: the number
 * Return: return the last digit of d and its value
*/
int print_last_digit(int d)
{
	int last_digit;
	last_digit = d % 10;
	if (last_digit < 0)
	{
		last_digit -= last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

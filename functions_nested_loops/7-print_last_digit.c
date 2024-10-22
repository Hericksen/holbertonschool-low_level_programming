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
	_putchar(last_digit);
	return (last_digit);
}

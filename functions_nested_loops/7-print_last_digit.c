#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @d: the number
 * Return: return the last digit of d and its value
*/
int print_last_digit(int d)
{
	d = d % 10;
	_putchar(d);
	return (d);
}

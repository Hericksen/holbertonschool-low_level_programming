#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 without printing 2 or 4
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			i++;

		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_times_table - display the n table
 * @n: the table
*/

void print_times_table(int n)
{
	int number, multi, product;

	if (n >= 0  && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				product = number * multi;

				if (product <= 99)
				{
					_putchar(' ');
				}
				if (product <= 9)
				{
					_putchar(' ');
				}

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

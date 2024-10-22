#include "main.h"

/**
 *
*/

void times_table(void)
{
	int number, multiplication, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplication = 1; multiplication <= 9; multiplication++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplication;
			
			if (product <= 9)
		        {
				_putchar(' ');
			}
			else
			{
				_putchar((product/10) + '0');
			}
		}
	}
}

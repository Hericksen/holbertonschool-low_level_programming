#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
*/

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}

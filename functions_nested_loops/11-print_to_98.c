#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - display all number to 98
 * @n: number which will go to 98
*/


void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}

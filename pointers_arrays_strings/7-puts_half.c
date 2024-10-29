#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: string printed
*/

void puts_half(char *str)
{
	int length = _strlen(str);
	int n, i = 0;

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

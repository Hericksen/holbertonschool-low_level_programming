#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string gonna be printed
*/

void print_rev(char *s)
{
	int lenght = 0, i;

	while (s[lenght] != '\0')
		lenght++;

	for (i = lenght - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

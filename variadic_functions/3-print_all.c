#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - Prints an integer
 * @ap: Argument pointer
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	/* Associate each character of format to a print function of types[] */
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;
	char *separator = "";
	int i = 0;
	int j = 0;

	/* Init list of variadic args with format as the last fix arg */
	va_start(ap, format);

	/* Run throw every character of format */
	while (format && format[i])
	{
		while (types[j].type)
		{
			/*For each character check in type the right function*/
			if (*types[j].type == format[i])
			{
				/* Print a separator and call right fnc */
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
			}
			++j;
		}

		j = 0; /* Reset to check next character */
		++i;
	}

	va_end(ap); /* Cleans list of variadic arg */
	printf("\n"); /* Prints a new line */
}

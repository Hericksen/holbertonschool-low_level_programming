#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a var for the variadic arg list */
	unsigned int i;

	va_start(args, n); /* Init the arg list */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /* Print the current numb */

		/* Print separator if it's not NULL and not the last numb */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean the variadic arg list*/
	printf("\n"); /* Prints a new line */
}

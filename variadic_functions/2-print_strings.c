#include <stdio.h>
#include <stdarg.h>

/**
 *
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a var to hold the variadic arg list */
	unsigned int i;
	const char *str;

	va_start(args, n); /* Int the var arg list */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL) /* Check if the string is not NULL*/
			printf("(nil)");
		else
			printf("%s", str); /* Else prints the string*/

		/* Print separator if it's not NULL and not the last char */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Cleans the arg list */
	printf("\n"); /* Prints a new line */
}

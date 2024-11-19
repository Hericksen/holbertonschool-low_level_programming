#include <stdarg.h>

/**
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* Declare a var to hold the variable arg list */
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_starts(args, n); /* Init the var arg list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int); /* Find next arg and add it to sum */
	}

	va_end(args); /* Cleans the arg list */

	return (sum);
}

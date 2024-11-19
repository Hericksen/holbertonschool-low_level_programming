#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */

typedef struct print
{
	char *type; /* Type to print (e.g. "c", "i", "f", "s") */
	void (*f)(va_list ap); /* Pointer function to the right function*/
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

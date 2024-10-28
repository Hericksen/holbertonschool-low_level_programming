#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for a digit
 * @c: digit checked
 * Return: 1 if it's a digit, 0 if not
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}

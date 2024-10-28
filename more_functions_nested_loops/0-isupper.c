#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase character
 * @c: character checked
 * Return: 1 if upper, 0 if not
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}

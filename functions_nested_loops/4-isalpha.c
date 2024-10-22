#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Fucntion testing if character is alpha
 * @c: Character tested
 * Return: 1 if true 0 if falser
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

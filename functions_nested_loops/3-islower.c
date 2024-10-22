#include "main.h"
#include <ctype.h>
/**
 * _islower - Function testing if character is lowercase
 * @c: Character to be check
 * Return: 1 if true 0 if false
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

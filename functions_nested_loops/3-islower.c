#include "main.h"
#include <ctype.h>
/**
 * _islower - Function testing if character is lowercase
*/

int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

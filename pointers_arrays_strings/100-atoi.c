#include "main.h"


/**
 *
*/

int _atoi(char *str)
{
	int result = 0;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result);
}
